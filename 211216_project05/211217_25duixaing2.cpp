#include<iostream>
#include<string>
using namespace std;

//thisָ�룺ָ����ʵ������ĵ�ַ       *this�����ã�����     ���ĸ�ʵ����������this��ָ��˭��
//1������Ƴ�ͻ,�ں��������ͳ�Ա����������ͬʱ��
class Student
{
public:
	int age;
	Student(int age)
	{
		this->age = age;   //thisָ��ָ����ʵ��������->	���������ĳ�Ա
	}
	Student& add(Student& s)
	{
		this->age += s.age;
		return *this;    //*this�����ã�ָ���Ǳ���
	}
};
void test11()
{
	Student s1(18);
	cout << s1.age << endl;

}



//2���� ������   return *this
void test12()
{
	Student s2(100);
	Student s3(100);
	//��ʽ���˼�룺
	s2.add(s3).add(s3).add(s3);
	cout << s2.age << endl;
}



int main05()
{
	test12();
	system("pause");
	return 0;
}