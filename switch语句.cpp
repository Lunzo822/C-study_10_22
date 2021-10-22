//给电影评分
//10~9	经典
//8~7	非常好
//6~5	一般
//5以下	烂片

#include<iostream>

using namespace std;

int main()
{
	int grade = 0;
	while(1)
	{
		cout<<"请给该电影评分：";
		cin>>grade;
		cout<<"您给该电影的评分为"<<grade<<"分"<<endl;
		if(grade>=0 && grade<=10)
		{
			switch(grade)
			{
			case 10:
				{
					cout<<"您给该电影的评级为：经典"<<endl;
					break;
				}
			case 9:
				{
					cout<<"您给该电影的评级为：经典"<<endl;
					break;
				}
			case 8:
				{
					cout<<"您给该电影的评级为：非常好"<<endl;
					break;
				}
			case 7:
				{
					cout<<"您给该电影的评级为：非常好"<<endl;
					break;
				}
			case 6:
				{
					cout<<"您给该电影的评级为：一般"<<endl;
					break;
				}
			case 5:
				{
					cout<<"您给该电影的评级为：一般"<<endl;
					break;
				}
			default:
				{
					cout<<"您给该电影的评级为：烂片"<<endl;
					break;
				}
			}
		}
		else
		{
			cout<<"非法输入评分，无法评级！请重新输入！"<<endl;
		}
	}

	system("pause");

	return 0;
}