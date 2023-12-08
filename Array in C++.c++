#include<iostream>
#include<conio.h>
using namespace std;
class Employee          //Define class 
  {
   private:  
     char name[20];
     char address[20];
     int ID;
     int salary;
     char post[30];
  public:                          //acccess accesifier 
     void setEmployeeDetails();
     void displayEmployeeDetails();
  };

void Employee:: setEmployeeDetails()     //Definition of member function 
  {
     cout<<" name :";
     cin>>name;
     cout<<"\n address  :";
     cin>>address ;
     cout<<"\n  ID :";
     cin>>ID;
     cout<<" \n salary :";
     cin>>salary;
     cout<<" \n post :";
     cin>>post ;
  }

void Employee:: displayEmployeeDetails()       //member function 
   {
    cout<<"\n The name of the Employee is :"<<name;
    cout<<"\n The adress  of the Employee is :"<<address ;
    cout<<"\n  The ID of the Employee is :"<<ID;
    cout<<"\n The salary of the Employee is :"<<salary;
    cout<<"\n The post of the Employee is :"<<post;
   }

int main()
   {
    Employee emp[50];                  //Decalre a array of the object 
    int size,i;
    cout<<"Enter the number of the Empoyee :";
    cin>>size;
    cout<<"Enter the Details of the Employee :";
    for(i=0 ;i<=size -1 ; i++ )
       {
        emp[i].setEmployeeDetails();
       }
    cout<<"The Employee Details is Given Bleow :";
    for(i=0; i<=size-1 ;i++)
       {
        emp[i].displayEmployeeDetails();
       }
    return 0;
   }