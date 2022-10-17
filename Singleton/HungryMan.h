#pragma once

// ����ʽ����ģʽ
// ϵͳһ���оͳ�ʼ������ʵ������Ҫʱֱ�ӵ��á�
// ����ʽ������������̰߳�ȫ��
 
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

