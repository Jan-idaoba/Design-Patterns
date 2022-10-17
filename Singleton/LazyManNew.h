#pragma once

// C++11懒汉式单例模式
// 因为static提供了线程安全的特性，因此不需要进行上锁行为。

class LazyManNew
{
public:
	LazyManNew& GetInstance();

private:
	LazyManNew();
	~LazyManNew();

	LazyManNew(const LazyManNew& instance);
	const LazyManNew& operator=(const LazyManNew instance) = delete;
};

