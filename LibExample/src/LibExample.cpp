#include "LibExample.h"

CDemoClass::CDemoClass()
    : m_val(0)
{

}

int CDemoClass::GetVal()
{
    return m_val;
}

void CDemoClass::SetVal(int val)
{
    m_val = val;
}

int Fibonacci(int n)
{
    int *fib = new int[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    return fib[n];
}
