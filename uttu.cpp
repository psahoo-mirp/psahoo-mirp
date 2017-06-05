#include<iostream>
using namespace std;
int main()
{int a,b,c,d;
cout<<"enter the four integers";
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d)
{cout<<"a is max";
if(b>c && b>d)
cout<<"b is 2nd max";
else if (c>b&&c>d)
cout <<"c is 2nd max";
else if(d>c&&d>b)
cout<<"d is 2nd max";
}
if(a<b && b>c && b>d)
{cout<<"b is max";
if(a>c && a>d)
cout<<"a is 2nd max";
else if (c>a&&c>d)
cout <<"c is 2nd max";
else if(d>c&&d>a)
cout<<"d is 2nd max";
}
if(c<a && b<c && c>d)
{cout<<"c is max";
if(a>b && a>d)
cout<<"a is 2nd max";
else if (b>a&&b>d)
cout <<"b is 2nd max";
else if(d>a&&d>b)
cout<<"d is 2nd max";
}
if(d<a && d<c && c<d)
{cout<<"d is max";
if(a>c && a>b)
cout<<"a is 2nd max";
else if (b>c&&b>a)
cout <<"b is 2nd max";
else if(c>c&&c>b)
cout<<"c is 2nd max";
}
}
