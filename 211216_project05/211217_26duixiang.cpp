#include<iostream>
#include<string>
using namespace std;

//常函数：函数后面加const，不可以在这个函数内修改成员属性，因为const限制了 this指针指向
//目的：为了不会在此函数中随意更改里面的属性，将这一块变成只读的。
class Student
{
public:
	mutable int a;   //加上mutable就可以修饰了。
	void show() const
	{
		this->a = 100;
		cout << a << endl;
	}

};
void te()
{
	Student s1;//常对象实例：实例对象前面加const
	s1.show();
	const Student s2;
	s2.a = 999;
	s2.show();//
	
}



int main13()
{
	te();

	system("pause");
	return 0;
}