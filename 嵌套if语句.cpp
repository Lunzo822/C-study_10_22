//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	//提示输入
//	int grade = 0;
//	cout<<"请输入您的分数："<<endl;
//	cin>>grade;
//	cout<<"请确认您的分数是否正确："<<grade<<"分"<<endl;
//	
//	//根据输入数据做出以下分析
//	//大于600视为考上一本，大于500视为考上二本，大于400视为考上三本，其余视为考上本科
//	if(grade>600)
//	{
//		cout<<"恭喜您，考上一本！！！"<<endl;
//		//在此部分，大于700上北大，大于650上清华，大于600上人大
//		if(grade>700)
//		{
//			cout<<"北大"<<endl;
//		}
//		else if(grade>650)
//		{
//			cout<<"清华"<<endl;
//		}
//		else
//		{
//			cout<<"人大"<<endl;
//		}
//	}
//	else if(grade>500)
//	{
//		cout<<"恭喜您，考上二本！！"<<endl;
//	}
//	else if(grade>400)
//	{
//		cout<<"恭喜您，考上三本！"<<endl;
//	}
//	else
//	{
//		cout<<"恭喜您，考上了本科。"<<endl;
//	}
//	system("pause");
//
//	return 0;
//}