#include<iostream>
#include<string>
using namespace std;

//�����������������const��������������������޸ĳ�Ա���ԣ���Ϊconst������ thisָ��ָ��
//Ŀ�ģ�Ϊ�˲����ڴ˺��������������������ԣ�����һ����ֻ���ġ�
class Student
{
public:
	mutable int a;   //����mutable�Ϳ��������ˡ�
	void show() const
	{
		this->a = 100;
		cout << a << endl;
	}

};
void te()
{
	Student s1;//������ʵ����ʵ������ǰ���const
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