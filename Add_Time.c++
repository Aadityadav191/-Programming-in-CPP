#include<iostream>
#include<conio.h>
using namespace std;
class Time 
{ 
    int hour ,minute,sec;       // data member 
    public:                     // access spifier 
    Time addTime(Time);          
    void setTime( );
    void displaysetTime();
};

void Time::setTime()
{
   cout<<"Enter the hour :";
   cin>>hour;
   cout<<"Enter the minute :";
   cin>>minute;
   cout<<"Enter the sec:";
   cin>>sec;
}

void Time :: displaysetTime ()
{
   cout<<"Hour:"<<hour;
   cout<<"Minute :"<<minute;
   cout<<"second"<<sec;
}

int main()
{
    Time t1,t2,t3; 
    cout<<"Enter the first time:\n";
    t1.setTime();
    cout<<"Eneter the second time :\n";
    t2.setTime ();
    cout<<"Enter the third time :\n";
    t3.setTime ();
    cout<<"The Resultant time is :\n" ;
    t3=t3.addTime(t2);
    t3.displaysetTime();
}

Time Time ::addTime(Time t2)
{
    Time result;
    result.sec=sec+t2.sec;
    result.minute=result.sec%60;
    result.sec=result.sec%60;
    result .minute =+t2.minute ;
    result.hour=result.minute%60;
    result.minute=result.minute %60;
    result.hour=hour +t2.hour;
    return result;
    
}

