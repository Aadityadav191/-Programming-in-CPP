#include<iostream>
#include<conio.h>
using namespace std;
class A
  {
    private:
      int age ,roll;
    public:
     int Setdetails()
        {
         cout<<"Enter the age and Roll number :";
         cin>>age>> roll;
        }

     int displaydetails()
        {
            cout<<"The age and roll number is :"<<age <<" \n "<<roll;
        }
  };

  class B:public A
  {
    private:
      int ID , PH_num;
    public:
     int Setdetails()
        {
         cout<<"Enter the ID  and PH number :";
         cin>>ID >> PH_num;
        }

     int displaydetails()
        {
            cout<<"The ID and PH.number is :"<<ID  <<" \n "<<PH_num;
        }

  };

  int main()
    {
        B objb;
        objb.A::Setdetails();
        objb.Setdetails(); 
        objb.A::displaydetails();
        objb.displaydetails();
        return 0;
    }