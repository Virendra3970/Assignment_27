//Write a cpp program to add two complex number using operator overloaded by a friend function.

#include<iostream>
using namespace std;
class Complex
{
  private:
   int real;
   int imag;
  public:
   void setData(int x, int y)
   {
     real=x; 
     imag=y;
   }
   void showData()
   {
     cout<<real<<"+"<<imag<<"i"<<endl;
   }
   Complex() { }
   Complex(int a,int b)
   {
     real=a; imag=b;
   }
   friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex c,Complex C)
{
  Complex temp;
  temp.real=C.real+c.real;
  temp.imag=C.imag+c.imag;
  return temp;
}

int main()
{
  Complex c1,c2,c3(12,14);
  int a,b;
  cout<<"\nEnter 1st complex number: "<<endl;
  cin>>a>>b;
  c1.setData(a,b);
  cout<<"\nEnter 2nd complex number: "<<endl;
  cin>>a>>b;
  c2.setData(a,b);
  c3=c1+c2;
  c1.showData();
  c2.showData();
  c3.showData();
  return 0;
}
