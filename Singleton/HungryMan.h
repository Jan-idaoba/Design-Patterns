#pragma once

// 饿汉式单例模式
// 系统一运行就初始化创建实例，需要时直接掉用。
// 饿汉式单例本身就是线程安全的
 
class HungryMan
{
public:
	HungryMan* GetInstance();
	void DeleteInstance();

private:
	HungryMan();
	~HungryMan();

	HungryMan(const HungryMan& instance) = delete;
	const HungryMan operator=(const HungryMan& instance) = delete;
private:
	static HungryMan* m_instance;
};

