#include<iostream>
#include<conio.h>
using namespace std;
class second ;
class first
  {
    protected:
       int age1;
    public:
       void setdetails()
          {
            cout<<"\n ENter the age of the Ram ";
            cin>>age1;
          }
       void displaydetails()
          {
            cout<<"\n The  age of the Ram is :"<<age1;
          }
       friend int compare( first, second);   /* Here you can also write only class name  as argument in friend Function    */
       
  };

class second
  {
    protected:
       int age2;
    public:
       void setsetails()
          {
            cout<<"Enter the second age of the Shyam :";
            cin>>age2;
          }
       void displaydetails()
          {
            cout<<"\n The age of the second Shyam is"<<age2;
          } 
       friend int compare(first,second);       /* Here you can also write class name only as argument in friend Function    */
  };
 int compare(first F, second S)
  {
    if(F.age1>S.age2)
      {
        cout<<"\n Ram is greater than Shyam ";
      }
    else if (F.age1<S.age2)
       {
        cout<<"\n Shyam is greater than RAm ";
       }
    else 
       {
        cout<<"\n Ram and Shyam Both are twinse";
       }
  }

int main()

{
    first F;
    second S;
    F.setdetails();
    S.setsetails();
    F.displaydetails();
    S.displaydetails();
    compare(F , S);
    return 0;
}
