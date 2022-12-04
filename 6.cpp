/* Create a Cstring class to represent a string 
a. Overload the + operator to concatenate two strings.
b. == to compare two strings
*/

#include<iostream>
#include<cstring>
using namespace std;
class CString
{
  private:
    char ch[10000];
  public:
    void display()
    { 
      cout<<"Display() called."<<endl;
      cout<<ch<<endl;
    }
    CString(){ cout<<"DC called."<<endl;};
    CString(const char c[])
    {
      cout<<"PC called."<<endl;
      strcpy(ch,c);
    }
    CString operator +(CString s)
    {
      cout<<"Operator + called."<<endl;
      CString temp;
      temp=strcat(ch,s.ch);
      return temp;
    }
    bool operator==(CString s)
    {
      int i,j;
      for(i=0,j=0;i<strlen(ch) && i<strlen(s.ch);i++,j++)
      {
        if(ch[i]!=s.ch[j])
           return false;
      }
      if(i==j)
        return true;
      else
        return false;
    }
    
    friend void operator>>(istream &is, CString &s);
    
};
void operator>>(istream &is, CString &s)
{
  cout<<"Operator >> called."<<endl;
  is>>s.ch;
}
int main()
{
  CString s1,s3;
  CString s2;
  cout<<"Enter the first string: "<<endl;
  cin>>s1;
  cout<<"Enter the second string: "<<endl;
  cin>>s2;
  s1.display();
  s2.display();
  s3=s1+s2;
  s3.display();
  if(s1==s2)
    cout<<"Yes, both are same."<<endl;
  else
    cout<<"No, both are not same."<<endl;
  return 0;
}
