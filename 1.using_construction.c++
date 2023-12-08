#include<iostream>
#include<conio.h>
using namespace std;
class College
  {
    private:
      char name[50];
      char location[50];
    public:
       void setdata()
          {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the location:";
            cin>>location;
          }
        void displaydata()
          {
            cout<<"\n the name is :"<<name;
            cout<<"\n the name is :"<<location;
          }
  };

class Student:public College
   {
    private:
      char name [50];
      int roll_no;
    public:
       void setNR()
          {
            cout<<"\n Enter the name:";
            cin>>name;
            cout<<"\n Enter the roll number:";
            cin>>roll_no;
          }
   };

class Teacher:public College 
   {
 private:
      char name [50];
      int code;
    public:
       void setNC()
          {
            cout<<" \n Enter the name:";
            cin>>name;
            cout<<" \n Enter the roll number:";
            cin>>code;
          }
   };
   

class Book:public Teacher , public Student
   {
 private:
      char bookname [50];
      char writername[50];
      int code;
    public:
       void setNR()
          {
            cout<<"\n Enter the bookname:";
            cin>>bookname;
            cout<<"\n  Enter the writer name :";
            cin>>writername;
          }
   };

int main()
   {
    Student S;
    Teacher T;
    Book B;
    S.setdata();
    S.displaydata();
    T.setNC();
    B.setNR();
    return 0;
   }
     





