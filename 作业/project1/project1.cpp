// project1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int temperature(int f)
{
	int g,c;
	g=f-32;
	c=g*5/9;
	return c;
}
void main()
{
	int f;
	cin>>f;
	cout<<temperature(f)<<endl;
	system("pause");
}
	
