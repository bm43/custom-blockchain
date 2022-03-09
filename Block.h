#define TESTCHAIN_BLOCK_H
#include <cstdint>
#include <iostream>
#endif

using namespace std;

//.h file just tells program(?) what member function and variables a class have
// details are implemented in .cpp file
class Block {
public:
    string sPrevHash;
    Block(uint32_t nIndexIn, const string &sDataIn);
    string Gethash();
    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    string _sData;
    string _sHash;
    time_t _tTime;

    string _CalculateHash() const;
};