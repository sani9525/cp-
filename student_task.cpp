#include <bits/stdc++.h>
using namespace std;

class Rectangle 
{
private : 
int roll;
string name;
int mathmarks;
int physicsmarks;
int chemistrymarks;

public :
 student (int r,string n,int m,int p,int c)
{
    roll=r;
    name=n;
    mathmarks=m;
    physicsmarks=p;
    chemistrymarks=c;

}
int total()
{
    return physicsmarks+mathmarks+chemistrymarks;
}
char grade() 
{
float average=total()/3;
if(average>60)
return 'A';
if else (average<60&&average>=40)
return 'B';
else 
return 'C';
}

};

int main ()
{
    int roll;
string name;
int m,p,c;
cout<<"Enter Roll number of a Student: ";
cin>>roll;
cout<<"Enter Name of a Student:";
cin>>name;
cout<<"Enter marks in 3 subjects";
cin>>m>>p>>c;
Student s(roll,name,m,p,c);
cout<<"Total Marks:"<<s.total()<<endl;
cout<<"Grade of Student:"<<s.grade()<<endl;
return 0;
}