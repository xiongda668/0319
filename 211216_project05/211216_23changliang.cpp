#include<iostream>
#include<string>
using namespace std;


//��̬����������ʵ��������һ�����ݣ��������������⸳ֵ
class Person01
{
public:
	static int a;
};

//���⸳ֵ:
int Person01::a = 100;   //    ::����������ţ���ʾ����a��������

//��̬���������ж�����һ��������
//��̬��Ա��������ֻ���Ǿ�̬��������������������֪������һ��ʵ����
class Person02
{
public:
	static int a0;//��̬����
	static void func()
	{
		a0 = 888;
		cout << "static void func(��\n";
	}
};
int Person02::a0 = 999;
void test06()
{
	//1ͨ��������ʣ�
	Person02 p2;
	p2.func();
	//2ͨ����������
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
	//��̬������������ͨ��ʵ�����ʣ�������ͨ����������Ϊ���ݹ���
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