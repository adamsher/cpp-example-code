// This is an example of a C++ with a class definited in a separate file
// Build then run the executeable it creates (it will be named: app)
// IMPORTANT: by default, tasks.json only compiles the .cpp have currently in when you hit build
//            you need to change ${FILE} to *.cpp int orer for all .cpp files to get compiled at build
#include <iostream>
// This include allows use to use the TestClass definted in the other file
// C++ uses "header" files which separate the definition of a class (see testClass.h) from the logic (see testClass.cpp)
#include "testClass.h"

using namespace std;


// All functions must come before main
void Function()
{
    cout << "I ran from Function()\n";
}

int main()
{
    cout << "Running... \n";
    cout << "Enter an number: ";
    int i;
    cin >> i;    
    cout << "Number is: " << i << "\n";
    i++;
    cout << "Number plus 1 is: " << i << "\n";
    Function();


    TestClass test;
    test.pubNumber = i;
    test.AddSecretNumber();
    test.PrintNewNumber();
    

    return 0;

}