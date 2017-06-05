#include<iostream>
using namespace std;
int main()
{char grade;
int marks,A,B,C;
cout<<"cutoff for grade A is ";
cin>>A;
cout<<"cutoff for grade B is";
cin>>B;
cout<<"cutoff for grade C is";
cin>>C;
if(A>B && A>C)
{
if (B>C)
cout<<"cutoff is valid";
else 
cout<<"cutoff is invalid";}
cout<<"input marks of student ";
cin>>marks;

if(marks>=A)
grade='A';
else if(marks>=B)
grade='B';
else if(marks>=C)
grade='C';
else
grade='D';

cout<<grade;
return 0;
}

