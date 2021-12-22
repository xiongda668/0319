#include<iostream>
#include<string>
using namespace std;

//类做友元。这个类可以访问本类的私有属性。
class Buiding;
class Goodboy
{
public:
	Goodboy();
	void visit();      //访问另一个类的私有属性
	Buiding *buiding;//这里定义了一个指针变量

};

class Buiding
{
public:
	Buiding();
public:
	string sitroom;
private:
	string bedroom;
};
//在类外定义成员函数：
void Goodboy::visit()
{
	cout << "好朋友可以访问" << buiding->sitroom << endl;
}
//在类外定义成员函数：
Buiding::Buiding()
{
	sitroom = "卧室";
	bedroom = "卧室";
}
//在类外定义成员函数：
Goodboy::Goodboy()
{
	buiding = new Buiding;//将地址赋给buiding指针变量
}
void test22()
{
	Goodboy g;
	g.visit();

}
int main()
{

	test22();
	system("pause");
	return 0;
}