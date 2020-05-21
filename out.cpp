#include<iostream>
#include<fstream>
#include<string.h>
//#include<process>
#include<stdio.h>
//#include<conio>
using namespace std;
class student
{
  char   name[5];//members variable
  int roll;
  float marks;
  char grad;
void grade();//PRIVATE member functions
public:
  void getdata();//member functions
   void display();

};
void student :: getdata()
{
  
  
     cout<<"enter student name:"<<"\n";
     cin>>name;
     cout<<"enter roll no,:"<<"\n";
     cin>>roll;
     cout<<"enter marks:"<<"\n";
     cin>>marks;
	grade();//calling private function 

  
}
void student :: grade()
{

  
  
    if(90<=marks<100)//chutiya h kya esa lagta h conditions
    grad='A';
    else
    grad='B';
  
  
}
void student ::display()
{
  
  
    cout<< name<<"\n";
    cout<< roll<<"\n";
    cout<< grad<<"\n";
    cout<<"\n";
  
}
int main()
{
  using namespace std;
  student p[4];//4 object declaration 
for(int i=0;i<2;i++)
  p[i].getdata(); //calling getdata of object p[i]
for(int i=0;i<2;i++)
  p[i].display();  //calling Display of object p[i]
}
