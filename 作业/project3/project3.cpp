// project3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
long fac(int x,int y)
{
	long ans;
	if(y==1)
	{
		ans=x;
	}
	else
		ans=x*fac(x,y-1);
	return ans;
}
void main()
{
	int x,y;
	cin>>x;
	cin>>y;
	cout<<fac(x,y)<<endl;
	system("pause");
}
