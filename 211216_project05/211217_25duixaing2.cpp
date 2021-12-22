#include<iostream>
#include<string>
using namespace std;

//this指针：指的是实例对象的地址       *this解引用，本体     （哪个实例调用它，this就指向谁）
//1解决名称冲突,在函数参数和成员变量名字相同时：
class Student
{
public:
	int age;
	Student(int age)
	{
		this->age = age;   //this指针指的是实例对象，用->	调用是它的成员
	}
	Student& add(Student& s)
	{
		this->age += s.age;
		return *this;    //*this解引用，指的是本体
	}
};
void test11()
{
	Student s1(18);
	cout << s1.age << endl;

}



//2返回 对象本身   return *this
void test12()
{
	Student s2(100);
	Student s3(100);
	//链式编程思想：
	s2.add(s3).add(s3).add(s3);
	cout << s2.age << endl;
}



int main05()
{
	test12();
	system("pause");
	return 0;
}