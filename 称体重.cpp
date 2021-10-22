////有三只猪，分别输入体重，并判断谁最重
//#include<iostream>
//
//using namespace std;
//
////判断三只小猪谁最重
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cout<<"请分别输入三只小猪的体重："<<endl;
//	cout<<"第a只小猪：a = ";
//	cin>>a;
//	cout<<"第b只小猪：b = ";
//	cin>>b;
//	cout<<"第c只小猪：c = ";
//	cin>>c;
//
//	if(a>b)
//	{
//		if(a>c)
//		{
//			cout<<"最重的是第a只小猪"<<endl;
//			cout<<"a = "<<a<<endl;
//		}
//		else
//		{
//			cout<<"最重的是第c只小猪"<<endl;
//			cout<<"c = "<<c<<endl;
//		}
//	}
//
//	if(a<b)
//	{
//		if(b>c)
//		{
//			cout<<"最重的是第b只小猪"<<endl;
//			cout<<"b = "<<b<<endl;
//		}
//		else
//		{
//			cout<<"最重的是第c只小猪"<<endl;
//			cout<<"c = "<<c<<endl;
//		}
//	}
//
//	system("pause");
//
//	return 0;
//}

//比较三只小猪最重的是多少
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cout<<"请分别输入三只小猪的体重："<<endl;
//	cout<<"第一只小猪：a = ";
//	cin>>a;
//	cout<<"第二只小猪：b = ";
//	cin>>b;
//	cout<<"第三只小猪：c = ";
//	cin>>c;
//	//按a，b，c排序
//	if(a<b)
//	{
//			int big = 0;
//			big = b;
//			b = a;
//			a = big;
//	}
//	if(a<c)
//	{
//			int big = 0;
//			big = c;
//			c = a;
//			a = big;
//	}
//	if(b<c)
//	{
//			int big = 0;
//			big = c;
//			c = b;
//			b = big;
//	}
//	cout<<"三只小猪最重的是："<<a<<endl;
//
//	system("pause");
//
//	return 0;
//}