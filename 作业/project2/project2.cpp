// project2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void main()
{
 long int m,n,a,b=1,i=1,c;
 cout<<"Enter an integer as the superscript : ";
 cin>>m;
 cout<<"Enter an integer as the subscript : ";
 cin>>n;
 if(m>n) 
 printf("Error!!!\0");
 for(a=n;a>n-m;a--) 
 b*=a;
 for(c=m;c>0;c--) 
 i*=c;
 cout<<b/i<<"\n";
 system("pause");
}


