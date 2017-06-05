#include<iostream>
#include<cmath>
using namespace std;
int main()
{int x1,x2,x3,y1,y2,y3;
float a,b,c;
cout<<"enter all the x coordinates of the triangle";
cin>>x1>>x2>>x3;
cout<<"enter all the y coordinates of the triangle";
cin>>y1>>y2>>y3;
a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
b=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
c=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
if(a==b&&a==c&&b==c)
{cout<<"equilateral";
}
else if(a!=b&&a!=c)
{cout<<"scalene";
}
else
{cout<<"isoceles";
}
}
