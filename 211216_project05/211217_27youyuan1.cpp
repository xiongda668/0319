#include<iostream>
#include<string>
using namespace std;

//��Ԫ������ʶһЩ����Ϊ�Լ�������ѣ�������ӵ�з���˽�г�Ա��Ȩ����
//ȫ�ֺ�������Ԫ��
class Buiding
{
	//����test13()��Buiding������ѣ����Է������е�˽������
	friend void test13();
public:
	Buiding()
	{
		sitroom = "����\n";
		bedroom = "����\n";
	}
	string sitroom;
private:
	string bedroom;
};
void test13()
{
	Buiding s1;
	cout << "�����ѿ��Խ���" << s1.sitroom << endl;
	cout << "�����ѿ��Խ���" << s1.bedroom << endl;
	//s1.age;

}
int main65()
{

	test13();
	system("pause");
	return 0;
}