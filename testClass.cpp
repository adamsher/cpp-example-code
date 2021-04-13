// This is the logic behind the functions defined in testClass.h
// IMPORTANT: by default, tasks.json only compiles the .cpp have currently in when you hit build
//            you need to change ${FILE} to *.cpp int orer for all .cpp files to get compiled at build
#include <iostream>
// Notice you'll need to include the class header here
#include "testClass.h"

using namespace std;

// Here you'll implement the logic behind the fuctions defined in the class header
// Notice it goes [ClassName]::[Function]
void TestClass::AddSecretNumber()
{
    privNumber = 2;
    pubNumber += privNumber;
}

void TestClass::PrintNewNumber()
{
    cout << "Your number plus the secret number is: " << pubNumber << "\n";
}