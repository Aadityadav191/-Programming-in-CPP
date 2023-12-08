#include<iostream>
#include<conio.h>
using namespace std;
class theory;
class practcle
   {
    protected:
      int pmark;         //data member
    public:
      void setpracticle()        //member function 
        {
         cout<<"\nEnter the practile mark :";
         cin>>pmark;
        } 
      void displaypracticle()       //member function
        {
        cout<<"\nEnter the practile mark :"<<pmark;  
        }
      friend int Total(practcle P,theory T);      //  declaring friend function
   };

   class theory      //class 
   {
    protected:
      int tmark;      //data member 
    public:
      void settheory()     //member function
        {
         cout<<"\nEnter the Theory mark :"<<tmark;
         cin>>tmark;
        } 
      void displaytheory()    //member function
        {
        cout<<"\n the theory mark is :"<<tmark;  
        }
      friend int Total(practcle P ,theory T);  // declaring friend function 
   };
   int Total(practcle P ,theory T)       //definition of friend classs 
       {
        int totalmark;
        totalmark=P.pmark+ T.tmark;
        cout<<"\n The total mark is "<<totalmark;
       }

int main()
   {
    practcle P;
    theory T;
    P.setpracticle();
    T.settheory();
    P.displaypracticle();
    T.displaytheory();
    Total(P,T);  //calling friendd function
    return 0;
   }