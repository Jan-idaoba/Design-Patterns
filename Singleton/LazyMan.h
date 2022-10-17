#pragma once
#include <mutex>

// ����ʽ����ģʽ
// ϵͳ����ʱ��ʵ����û������ֻ��ʹ��ʵ��ʱ��ʵ���ű�������
// ����ʽ������Ҫ�����̰߳�ȫ���⡣

class LazyMan
{
public:
	LazyMan*& GetInstance();
	void DeleteInstance();

private:
	LazyMan();
	~LazyMan();

	LazyMan(const LazyMan& lazyInstance);
	const LazyMan& operator=(const LazyMan& lazyInstance) = delete;

private:
	static LazyMan* m_Instance;
	static std::mutex m_mutex;
};

