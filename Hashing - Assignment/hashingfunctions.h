#ifndef HASHINGFUNCTIONS_H
#define HASHINGFUNCTIONS_H
#include <list>

class HashingFunctions
{
public:
    static void HashChain(std::list<int> table[], int data);
    static void HashLinearProbing(int table[], int data);
    static void HashDoubleHashing(int table[], int data);

    static int HashOne(int key);
    static int HashTwo(int key);
    static int DoubleHash(int key, int iteration);

    const static int tableSize = 15;
private:
    HashingFunctions();
};

#endif // HASHINGFUNCTIONS_H
