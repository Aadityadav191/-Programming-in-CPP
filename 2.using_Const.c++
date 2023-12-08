#include<iostream>
#include<conio.h>
using namespace std;
class Person
  {
   private:
     char name;
     int code;
   public:
    void setperson()
       {
        cout<<"\nEnter the Name";
        cin>>name;
        cout<<"\nEnter the code";
        cin>>code;
       }
    void displayperson()
       {
        cout<<"\nThe Name is :"<<name;
        cout<<"\nThe code is"<<code;
       }  
  };

class Admin:public Person  
  {
    private:
     int Expyear;
   public:
    void setadmin()
       {
        cout<<"\nEnter the no. of year of Experience";
        cin>>Expyear;
       }
    void displayadmin()
       {
        cout<<"\nThe number of experience is :"<<Expyear; 
       }  
  };

class Account:public Person  
  {
    private:
     int salary;
   public:
    void setaccount()
       {
        cout<<"\nEnter the Salary";
        cin>>salary;
       }
    void displayaccount()
       {
        cout<<"\nThe salary is :"<<salary; 
       }  
  };
  class Record:public Admin, public Account  
  {
    private:
     int record_no;
   public:
    void setrecord()
       {
        cout<<"\n Enter the Record number ";
        cin>>  record_no ;
       }
    void displayrecord()
       {
        cout<<" \n TheRecord number  is :"<< record_no; 
       }  
  };

int main()
  {
    Admin A;
    Account AC;
    Record R;
    A.setadmin();
    AC.setaccount();
    R.setrecord();
    A.displayadmin();
    AC.displayaccount();
    R.displayrecord();
    return 0;
  }