#include<iostream>
#include<string>
using namespace std;

class Person0
{
public:
	//ʹ�ó�ʼ���б������г�ʼ����
	Person0(int a0,int b0) :a(a0), b(b0)
	{
		cout << "��ʼ����\n";
	}
	int a;
	int b;
};

void test()
{
	Person0 p(88,94);
	cout << p.a << p.b << endl;
}
//�����ʵ����Ϊ������ĳ�Աʱ������ʱ�ȹ���ʵ�����ٹ��������ࡣ�����෴
class Phone
{
public:
	Phone(int num0)//���������ʼ��
	{
		int num = num0;
	}
	int num;
};
class Person
{
public:
	//p1(num0):��ʼ����������ʽת����
	Person(string name,int num0):name(name),p1(num0)
	{

	}
	string name;
	Phone p1;
};
void test01()
{
	Person person("zhangsan",14768);
	cout << person.name << endl;
}
int main01()
{
	test01();
	system("pause");
	return 0;
}
