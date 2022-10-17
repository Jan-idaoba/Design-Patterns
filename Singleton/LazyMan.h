#pragma once
#include <mutex>

// 懒汉式单例模式
// 系统运行时，实力还没创建，只有使用实例时，实例才被创建。
// 懒汉式单例需要考虑线程安全问题。

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

