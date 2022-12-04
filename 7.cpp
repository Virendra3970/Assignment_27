/*Define a cpp class fraction 
class fraction
{
  long numerator;
  long denominator;
 public:
  fraction(long n=o, long d=0);
}
Overload the following operators as member or friend 
a. Unary ++(pre and post both )
b. Overload as friend functions : operators << and >>.
*/

#include<iostream>
using namespace std;
class fraction
{
  private:
  long int numerator;
  long int denominator;
  public:
  fraction(long int n=0, long int d=0)
  {
    cout<<"PC called"<<endl;
    numerator=n; denominator=d;
    //cout<<"f1  :  "<<numerator<<"/"<<denominator<<endl;
  }
  fraction operator ++(int love)
  {
    fraction temp;
    cout<<"Operator post ++ called"<<endl;
    temp.numerator=numerator++;
    temp.denominator=denominator++;
    return temp;
  }
  fraction operator ++()
  {
    fraction temp;
    cout<<"Operator pre ++ called"<<endl;
    temp.numerator=++numerator;
    temp.denominator=++denominator;
    return temp;
  }
  friend void operator<<(ostream &os, fraction &f);
  friend void operator>>(istream &is, fraction &f);
};

void operator<<( ostream &os, fraction &f)
{
  if(f.numerator==0)
    os<<"Fraction: 0"<<endl;
  else
    os<<"Fraction: "<<f.numerator<<"/"<<f.denominator<<endl;
}
void operator>>(istream &is, fraction &f)
{
  cin>>f.numerator>>f.denominator;
  if(f.denominator<=0)
  {
    cout<<"Denominator can never be 0 or negative!!\nPlease enter other than 0 for denominator."<<endl;
    exit(0);
  }
  cout<<"Numerator   :   "<<f.numerator<<endl;
  cout<<"Denominator   :   "<<f.denominator<<endl;
}
int main()
{
 fraction f1;
 fraction f2;
 cout<<"Enter the first fraction: "<<endl;
 cin>>f1;
 f1++;
 cout<<f1;
 ++f1;
 cout<<f1;
 cout<<"Enter the second fraction: "<<endl;
 cin>>f2;
 f2++;
 cout<<f2;
 ++f2;
 cout<<f2;
 return 0;
}
