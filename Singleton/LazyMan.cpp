#include "LazyMan.h"

// ��̬��Ա�ĳ�ʼ��
LazyMan* LazyMan::m_Instance = nullptr;
std::mutex LazyMan::m_mutex;

// ��ȡʵ���Ľӿ�
LazyMan*& LazyMan::GetInstance()
{
	if (m_Instance == nullptr) {
		std::unique_lock<std::mutex> lock(m_mutex);		// ��Ҫ�Դ���ʵ������������ʹ��unique_lock
		if (m_Instance == nullptr)
		{
			m_Instance = new (std::nothrow)LazyMan();
		}
		return m_Instance;
	}
}

// ɾ��ʵ���Ľӿ�
void LazyMan::DeleteInstance()
{
	std::unique_lock<std::mutex> lock(m_mutex);			// ɾ������Ҳ��Ҫ����
	if (m_Instance)
	{
		delete m_Instance;
		m_Instance = nullptr;
	}
}

// ���캯��
LazyMan::LazyMan()
{
}

// ��������
LazyMan::~LazyMan()
{
}

