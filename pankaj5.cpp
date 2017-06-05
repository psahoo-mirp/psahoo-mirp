#include<iostream>
using namespace std;
int main()
{int x[5]={100,2,3,4};
for(int i=0;i<5;i++)
cout<<x[i]<<" ";

char name[50]="my name";

cout<<"enter first name";
cin>>name;
for(int i=0;name[i]!='\0';i++)
cout<<name[i]<<" ";
return 0;
}
