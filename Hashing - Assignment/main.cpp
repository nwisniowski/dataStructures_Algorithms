#include <iostream>
#include <list>
#include "hashingfunctions.h"

void PrintListTable(std::list<int> table[]);
void PrintTable(int table[]);

#define AMOUNT_OF_DATA 10

int main(int argc, char *argv[])
{
    std::list<int> chainingTable[HashingFunctions::tableSize];
    int linearProbingTable[HashingFunctions::tableSize] = {0}, doubleHashingTable[HashingFunctions::tableSize] = {0};

    int data[AMOUNT_OF_DATA] = {41, 24, 26, 62, 7, 6, 82, 74, 81, 93};

    for(int i = 0; i < AMOUNT_OF_DATA; i++){
        HashingFunctions::HashChain(chainingTable, data[i]);
        HashingFunctions::HashLinearProbing(linearProbingTable, data[i]);
        HashingFunctions::HashDoubleHashing(doubleHashingTable, data[i]);
    }

    PrintListTable(chainingTable);
    PrintTable(linearProbingTable);
    PrintTable(doubleHashingTable);

    return 0;
}

void PrintListTable(std::list<int> table[]){
    for(int i = 0; i < HashingFunctions::tableSize; i++){
        std::cout<<i<<": ";
        for(std::list<int>::iterator j = table[i].begin(); j != table[i].end(); j++){
            std::cout<< *j << " ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void PrintTable(int table[]){
    for(int i = 0; i < HashingFunctions::tableSize; i++){
        std::cout<<i<<": ";
        std::cout<<table[i]<<std::endl;
    }
    std::cout<<std::endl;
}
