/*Define a class Complex with appropriate instance variables and member functions. 
 Define following operators in the class:
  a. +  b. -  c. *  d. ==*/
#include<iostream>
using namespace std;

class Complex
{
  private: 
     int real;
     int imag;
  public:
     void setComplexNumber(int x, int y)
     {
       real=x; imag=y;
     }
     void displayComplexNumber()
     {
       cout<<real<<"+"<<imag<<"i"<<endl;
     }
     Complex operator+(Complex c)
     {
       Complex t;
       t.real=real+c.real;
       t.imag=imag+c.imag;
       return t;
     }
     Complex operator-(Complex c)
     {
       Complex t;
       t.real=real-c.real;
       t.imag=imag-c.imag;
       return t;
     }
     Complex operator*(Complex c)
     {
       Complex t;
       t.real=(real*c.real)-(imag*c.imag);
       t.imag=(real*c.imag)+(imag*c.real);
       return t;
     }
     int operator==(Complex c)
     {
       if(real==c.real && imag==c.imag)
           return 1;
       return 0;
     }

};


int main()
{
  Complex c1,c2,c3,c4,c5;
  c1.setComplexNumber(1,-1);
  c2.setComplexNumber(-1,2);
  //c3=c1.operator+(c2);
  c3=c1+c2;
  c4=c1-c2;
  c5=c1*c2;
  Complex c6;
  if(c1==c2)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
    
  c3.displayComplexNumber();
  c4.displayComplexNumber();
  c5.displayComplexNumber();
  return 0;
  
}
