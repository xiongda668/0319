#include<iostream>
#include<string>
using namespace std;
//��Ŀ�ʵ������ռ�ڴ�ռ�Ϊ1

class Student
{
	int a=8;                        //�Ǿ�̬����������ʵ��
	void func()                   //�Ǿ�̬������������ʵ��
	{
		cout << "hanshu\n";
	}
	static int b;                 //��̬������
	static void func02()    //��̬������
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