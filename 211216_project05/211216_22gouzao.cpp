#include<iostream>
#include<string>
using namespace std;

class Person0
{
public:
	//使用初始化列表来进行初始化。
	Person0(int a0,int b0) :a(a0), b(b0)
	{
		cout << "初始化了\n";
	}
	int a;
	int b;
};

void test()
{
	Person0 p(88,94);
	cout << p.a << p.b << endl;
}
//当类的实例作为其他类的成员时，构造时先构造实例，再构造其他类。析构相反
class Phone
{
public:
	Phone(int num0)//参数构造初始化
	{
		int num = num0;
	}
	int num;
};
class Person
{
public:
	//p1(num0):初始化方法：隐式转换法
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
