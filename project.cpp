#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
   int i;
   float f;
   char c;
   double d;
   cout<<" Size of char:"<< sizeof(c)<< " byte\n";
   cout<<" Size of int:"<<sizeof(i)<<" bytes\n";
   cout<<" Size of float:"<<sizeof(f)<<" bytes\n";
   cout<<" Size of double:"<<sizeof(d)<<" bytes\n";
   
   float x,y;
   cout<<" Enter two numbers:";
   cin>>x>>y;
   cout<<" Product="<<x*y;

    return 0;
}
