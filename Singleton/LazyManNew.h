#pragma once

// C++11����ʽ����ģʽ
// ��Ϊstatic�ṩ���̰߳�ȫ�����ԣ���˲���Ҫ����������Ϊ��

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

