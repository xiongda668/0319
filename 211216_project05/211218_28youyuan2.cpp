#include<iostream>
#include<string>
using namespace std;

//������Ԫ���������Է��ʱ����˽�����ԡ�
class Buiding;
class Goodboy
{
public:
	Goodboy();
	void visit();      //������һ�����˽������
	Buiding *buiding;//���ﶨ����һ��ָ�����

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
//�����ⶨ���Ա������
void Goodboy::visit()
{
	cout << "�����ѿ��Է���" << buiding->sitroom << endl;
}
//�����ⶨ���Ա������
Buiding::Buiding()
{
	sitroom = "����";
	bedroom = "����";
}
//�����ⶨ���Ա������
Goodboy::Goodboy()
{
	buiding = new Buiding;//����ַ����buidingָ�����
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