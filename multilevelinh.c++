/* Define a class student which has NAME and ROLL NUMBER and member function to input and display student details 
   
*/




#include<iostream>
#include<conio.h>
using namespace std;
class Student 
  {
   protected:
     char name[40];
     int roll_no;
   public:
     void inputdetails()
        {
            cout<<"Enter the name of the student:";
            cin>>name;
            cout<<" \n Enter the Roll number of the student: ";
            cin>>roll_no;
        }
     void displaydetails()
        {
            cout<<"\n Name="<<name;
            cout<<"\n roll number= "<< roll_no;
        }
  };
class Examination: public Student
   {
     protected:
        int science,fit,c,LC,math;
     public:
        void initializedmark()
            {
                cout<<"Enter the mark of the student in fit,c,lc,maths \n";
                cin>>fit>> c >> LC >> math;
                          
            }
        void displaymark()
            {
                cout<<"\n math="<<math;
                cout<<"\n FIT= "<<fit;
                cout<<"\n c= "<<c;
                cout<<"\n LC"<<LC;
            }
   };
class Result: public Examination
   {
    protected:
      int Total_mark;
    public:
     void totalmark()
       {
        Total_mark= fit+ LC + c+ math;
       }
     void displaytotalmark()
       {
         cout<<" \ntotal mark ="<<Total_mark;
       }
   };
int main()
   {
    Examination e1;
    Result r1;
     e1.inputdetails();
     r1.initializedmark();
     e1.displaydetails();
     r1.displaymark();
     r1.totalmark(); 
     r1.displaytotalmark();
     return 0;
   } ;

