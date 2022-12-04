/*Create a class Time which cpntains: Hours, Minutes and Seconds
  Write a cpp program using operator overloading for the following:
1. ==: To check whether two Times are the same or not.
2. >>: To accept the time.
3. <<: To display the time.*/ 

#include<iostream>
using namespace std;
class Time
{
  private:
    int Hours;
    int Minutes;
    int Seconds;
  public:
    Time()     //default constructor
    {
     //cout<<"DC called"<<endl;
     Hours=0;
     Minutes=0;
     Seconds=0; 
    }
    Time(int a,int b, int c)   //Parameterized Constructor
    { 
      //cout<<"PC called"<<endl;
      Hours=a;
      if(c>=60)
      {
        b=b+c/60;
        Seconds=c%60;
      }
      if(b>=60)
      { 
        Hours=Hours+b/60;
        Minutes=b%60;
      }
    }
    Time(const Time &t)   //Copy Constructor
    {
      //cout<<"CC called"<<endl;
      Hours=t.Hours;
      Minutes=t.Minutes;
      Seconds=t.Seconds;
    }
    
   int operator==(Time t)   // overloading of Equal-to operator
    {
      if(Hours==t.Hours && Minutes==t.Minutes && Seconds==t.Seconds)
        return 1;
      else
        return 0;
    }
    void operator=(const Time &t)  //overloading of assignment operator
    {
      cout<<"\nEqual-to operator called."<<endl;
      Hours=t.Hours;
      Minutes=t.Minutes;
      Seconds=t.Seconds;
    }
    friend ostream& operator<<(ostream&, Time);  //Declaration of << operator 
    friend void operator>>(istream&, Time&);     //Declaration of >> operator
    
};

ostream& operator<<(ostream &os, Time t)        //Definition of << operator
{
 Time temp=t;
 temp.Hours=t.Hours;
 if(t.Seconds>=60)
 {
   t.Minutes=t.Minutes+t.Seconds/60;
   temp.Seconds=t.Seconds%60;
 }
 if(t.Minutes>=60)
 { 
   temp.Hours=temp.Hours+t.Minutes/60;
   temp.Minutes=t.Minutes%60;
 }
 cout<<"Hours : "<<temp.Hours<<endl;
 cout<<"Minutes : "<<temp.Minutes<<endl;
 cout<<"Seconds : "<<temp.Seconds<<endl;
 return os;
}
void operator>>(istream &is, Time &H)  		//Definition of >> operator
{
  cout<<"\nEnter Hours: ";
  is>>H.Hours;
  cout<<"\nEnter Minutes: ";
  is>>H.Minutes;
  cout<<"\nEnter Seconds: ";
  is>>H.Seconds;
}

int main()
{
  Time t1,t2;
  Time t3;
  cout<<"\nEnter First Time: "<<endl;
  cout<<"--------------------------"<<endl;
  cin>>t1;
  cout<<"\nFirst Time"<<endl;
  cout<<t1;
  cout<<"\nEnter Second Time: "<<endl;
  cout<<"--------------------------"<<endl;
  cin>>t2;
  cout<<"\nSecond Time"<<endl;
  cout<<t2;
  if(t1==t2)
    cout<<"\nYes, Times are same."<<endl;
  else
    cout<<"\nNO, Times are not same."<<endl;
  return 0; 
}
