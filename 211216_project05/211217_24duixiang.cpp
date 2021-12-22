#include<iostream>
#include<string>
using namespace std;
//类的空实例对象占内存空间为1

class Student
{
	int a=8;                        //非静态变量，属于实例
	void func()                   //非静态函数，不属于实例
	{
		cout << "hanshu\n";
	}
	static int b;                 //静态不属于
	static void func02()    //静态不属于
	{
		cout << "hanshu2\n";
	}
};
int Student::b = 147;
void test09()
{
	Student s1;
	cout << sizeof(s1);
}


int main10()
{
	test09();
	system("pause");
	return 0;
}