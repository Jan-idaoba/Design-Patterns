#include "LazyMan.h"

// 静态成员的初始化
LazyMan* LazyMan::m_Instance = nullptr;
std::mutex LazyMan::m_mutex;

// 获取实例的接口
LazyMan*& LazyMan::GetInstance()
{
	if (m_Instance == nullptr) {
		std::unique_lock<std::mutex> lock(m_mutex);		// 需要对创建实例进行上锁，使用unique_lock
		if (m_Instance == nullptr)
		{
			m_Instance = new (std::nothrow)LazyMan();
		}
		return m_Instance;
	}
}

// 删除实例的接口
void LazyMan::DeleteInstance()
{
	std::unique_lock<std::mutex> lock(m_mutex);			// 删除过程也需要上锁
	if (m_Instance)
	{
		delete m_Instance;
		m_Instance = nullptr;
	}
}

// 构造函数
LazyMan::LazyMan()
{
}

// 析构函数
LazyMan::~LazyMan()
{
}

