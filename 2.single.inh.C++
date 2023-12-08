/*
Write a programm to creat a class person withw attributes name and age . And method to read and display information.
Creat another class student derived from  class person to use the feature of base class.
Student class has additional attribiutes and feature appropriate to stdent::
*/ 

#include<iostream>
#include<conio.h>
using namespace std;
class person
  {
    protected:
      char name[50] ;
      int age;
    public:
      void Setdetails()
        {
            cout<<"Enter the name of the person :";
            cin>>name ;
            cout<<"\nEnte rthe age of the person:";
            cin>> age;
        }
      void Displaydetails()
        {
            cout<<"\nThe name of the person :"<<name;
            cout<<"\nThe age of the person :"<<age;

        }
  };

class student: public person  
  {
   private:
     int roll;
     int reg;
     int result;
   public:
     void setdetails()
       {
        cout<<"\nEnter the Roll NUmber:";
        cin>>roll;
        cout<<"\nEnter the registration number:";
        cin>>reg;
        cout<<"\nEnter the result of the student";
        cin>>result;
       }
     void displaydetails()
       {
         cout<<"\nThe Roll number is :"<<roll;
         cout<<"\nThe Registration number is :"<<reg;
         cout<<"\nThe Result  number is :"<<result;
       }
  };

int main()
  {
    student obj;
    obj.Setdetails();
    obj.Displaydetails();
    obj.setdetails();
    obj.displaydetails();
    return 0;
  }
