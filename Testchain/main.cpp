#include <cstdint>
#include <iostream>
#include <string>
#include "Blockchain.h"

using namespace std;

int main(){
    
    Blockchain bChain = Blockchain();

    cout << "mining block 1 ..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));
    
    return 0;
}