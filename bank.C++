#include<iostream>
#include<conio.h>
using namespace std;
class bank
  {
    private:
       char name[10];
       int AC_number;
       int AC_balance;
    public:
        bank();
        void openAC();
        void deposite();
        void display_AC_Info();
  };
 
 bank::bank()
   {
    cout<<"This is Default constructor";
    AC_balance=0;
   }

 void bank::openAC()
   {
    cout<<"Enter your name ";
    cin>>name ;
    cout<<"Enter ";
   }
   
  

