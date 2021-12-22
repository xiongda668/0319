#include<iostream>
#include<string>
using namespace std;

//友元：来标识一些函数为自己类的朋友，让他们拥有访问私有成员的权利。
//全局函数做友元。
class Buiding
{
	//函数test13()是Buiding类的朋友，可以访问类中的私有属性
	friend void test13();
public:
	Buiding()
	{
		sitroom = "客厅\n";
		bedroom = "卧室\n";
	}
	string sitroom;
private:
	string bedroom;
};
void test13()
{
	Buiding s1;
	cout << "好朋友可以进入" << s1.sitroom << endl;
	cout << "好朋友可以进入" << s1.bedroom << endl;
	//s1.age;

}
int main65()
{

	test13();
	system("pause");
	return 0;
}