//����Ӱ����
//10~9	����
//8~7	�ǳ���
//6~5	һ��
//5����	��Ƭ

#include<iostream>

using namespace std;

int main()
{
	int grade = 0;
	while(1)
	{
		cout<<"����õ�Ӱ���֣�";
		cin>>grade;
		cout<<"�����õ�Ӱ������Ϊ"<<grade<<"��"<<endl;
		if(grade>=0 && grade<=10)
		{
			switch(grade)
			{
			case 10:
				{
					cout<<"�����õ�Ӱ������Ϊ������"<<endl;
					break;
				}
			case 9:
				{
					cout<<"�����õ�Ӱ������Ϊ������"<<endl;
					break;
				}
			case 8:
				{
					cout<<"�����õ�Ӱ������Ϊ���ǳ���"<<endl;
					break;
				}
			case 7:
				{
					cout<<"�����õ�Ӱ������Ϊ���ǳ���"<<endl;
					break;
				}
			case 6:
				{
					cout<<"�����õ�Ӱ������Ϊ��һ��"<<endl;
					break;
				}
			case 5:
				{
					cout<<"�����õ�Ӱ������Ϊ��һ��"<<endl;
					break;
				}
			default:
				{
					cout<<"�����õ�Ӱ������Ϊ����Ƭ"<<endl;
					break;
				}
			}
		}
		else
		{
			cout<<"�Ƿ��������֣��޷����������������룡"<<endl;
		}
	}

	system("pause");

	return 0;
}