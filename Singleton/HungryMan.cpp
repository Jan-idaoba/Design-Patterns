#include "HungryMan.h"
#include <new>

HungryMan* HungryMan::m_instance = new (std::nothrow)HungryMan();
HungryMan* HungryMan::GetInstance()
{
    return m_instance;
}

void HungryMan::DeleteInstance()
{
    if (m_instance)
    {
        delete m_instance;
        m_instance = nullptr;
    }
}

HungryMan::HungryMan()
{
}

HungryMan::~HungryMan()
{
}
