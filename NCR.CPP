#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
   int n,r,i;
   clrscr();
   cout<<"enter the value of n";
   cin>>n;
   cout<<"enter the value of r";
   cin>>r;
   int nf=1;
   for

	(i=1;i<=n;i++)
   {
   nf=nf*i;
   }
   int rf=1;
   for

	(i=1;i<=r;i++)
   {
   rf=rf*i;
   }
   int nrf=1;
   for

	(i=1;i<=n-r;i++)
   {
   nrf=nrf*i;
   }
   float result;
   result=nf/(rf)*(nrf);
   cout<<result;
   getch();
}

