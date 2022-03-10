#include "Block.h"
#include "sha256.h"
#include <string>

using namespace std;

// Block constructor define:
// after ":", copy the contents of params into the variables _nIndex and _sData
Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn) {
    _nNonce = -1;
    _tTime = time(nullptr);//what is time function?
}

string Block::Gethash(){
    return _sHash;
}

void Block::MineBlock(uint32_t nDifficulty){
    char cstr[nDifficulty + 1];
    for (uint32_t i =0; i<nDifficulty; ++i){
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';
    // nD -1 zeros and \0
    // what's the meaning of this?

    string str(cstr);

    do {
        _nNonce++;
        _sHash = _CalculateHash();
    } while (_sHash.substr(0, nDifficulty) != str);

    cout << "Block mined: " << _sHash << endl;
}