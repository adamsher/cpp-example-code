// This is the definition of the TestClass
// This lives in it's own header file which separates it's definition from it's logic
// The logic lives in testClass.cpp
#include <iostream>

using namespace std;

class TestClass
{
    public:
        int pubNumber;
        string pubWord;
        void AddSecretNumber();
        void PrintNewNumber();
    private:
        int privNumber;
        string privString;    
};