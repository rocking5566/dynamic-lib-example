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

