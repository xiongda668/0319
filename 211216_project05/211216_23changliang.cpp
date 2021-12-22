#include<iostream>
#include<string>
using namespace std;


//静态变量：所有实例对象用一份数据，类内声明，类外赋值
class Person01
{
public:
	static int a;
};

//类外赋值:
int Person01::a = 100;   //    ::是作用域符号，表示变量a的作用域

//静态函数：所有对象共享一个函数，
//静态成员函数里面只能是静态变量：其他变量根本不知道是哪一个实例的
class Person02
{
public:
	static int a0;//静态变量
	static void func()
	{
		a0 = 888;
		cout << "static void func(）\n";
	}
};
int Person02::a0 = 999;
void test06()
{
	//1通过对象访问：
	Person02 p2;
	p2.func();
	//2通过类名访问
	Person02::func();

}

void tes()
{
	Person01 p;
	cout << p.a << endl;
	Person01 p2;
	p2.a = 100000;
	cout << p.a << endl;
}
void test05()
{
	//静态变量不仅可以通过实例访问，还可以通过类名，因为数据共享
	cout << Person01::a << endl;
}
int main07()
{
	tes();
	test05();
	test06();
	system("pause");
	return 0;
}