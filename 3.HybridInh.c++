#include<iostream>
#include<conio.h>
using namespace std;
class person
 {
     protected:
       char name;
       int age;
     public:
       void setperson()
         {
          cout<<"Enter the namea of the person:";
          cin>>name;
          cout<<"Enter the age of the person:";
          cin>>age;
         }
      void displayperson()
         {
            cout<<"The name of the person is:"<<name;
            cout<<"The age of the person is :"<<age;
         }
 };



class student:public person 
 {
   protected:
     int roll;
   public:
     void setstudent()
       {
        cout<<"Enter the Roll number of the student:";
        cin>>roll;
       }
     void displaydetails()
       {
        cout<<"Roll Number=:"<<roll;
       }
 };



class Employee: public person
  {
    protected:
       char degination;
       int ID;
       int salarly;
    public:
       void setEmployee()
          {
            cout<<"Enter the Degination:";
            cin>>degination;
            cout<<"Enter the ID :";
            cin>>ID;
            cout<<"Enter the salary:";
            cin>>salarly;
          }
        void dispalyEmployee()
          {
            cout<<"The Degination of the person is :"<<degination;
            cout<<"The ID of the person is:"<<ID;
            cout<<"THe salary is :"<<salarly;
          }
  };



class examination: public student
  {
   protected:
      int praticalmark;
      int theorymark;
   public:
      void setExam()
        {
            cout<<"Enter the pratical mark:";
            cin>>praticalmark;
            cout<<"Enter the theory mark:";
            cin>>theorymark;
        }
      void displayexam()
        {
          cout<<" the pratical mark:"<<praticalmark;
           cout<<"the pratical mark:"<<theorymark;   
        }
  };



class result:public examination
  {
   protected:
      int totalmark;
   public:
       void calcuateresult()
          {

      
          }
       void displayresult()
          {


          }
  };



int main()
  {
    result r1;
    Employee e1;
    r1.setperson();
    r1.setExam();
    r1.calcuateresult();
    r1.displayperson();
    r1.displayexam();
    r1.displayexam();

    e1.setperson();
    e1.setEmployee();
    e1.dispalyEmployee();
    e1.displayperson();
    return 0;
  }
 

