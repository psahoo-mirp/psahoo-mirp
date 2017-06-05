#include<iostream>
#include<cmath>
using namespace std;
int main()
{int a,b,c,d,x1,x2,y1,y2;
cout<<"enter the coefficients of x^2";
cin>>a;
cout<<"enter the coefficients of x";
cin>>b;
cout<<"enter the constant";
cin>>c;
d=(b*b)-(4*a*c);
if(d<0)
{
x1=(-b)+sqrt(d);
x2=(-b)-sqrt(d);
cout<<"imaginary"<<x1<<"&"<<x2;
 }
else if(d>=0)
{
y1=(-b)+sqrt(d);
y2=(-b)-sqrt(d);
cout<<"real"<<y1<<"&"<<y2;
}
}

