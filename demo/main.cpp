#include <iostream>
#include <cstdlib>
#include "LibExample.h"

using namespace std;
#pragma comment(lib, "LibExample.lib")

void TestImplicitLink()
{
    cout << Fibonacci(10) << endl;

    CDemoClass demo;
    demo.SetVal(5);
    cout << demo.GetVal() << endl;
}

// TODO - Demo of explicit link

int main()
{
    TestImplicitLink();
}