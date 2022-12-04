/*Consider the following class mystring 
class mystring 
{
  char str[100];
  public:
  //methods
};
Overload operator "!" to reverse the case of each alphabet in the string
{Uppercase to LowerCase and vice versa}
*/

#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
  private:
   char str[100];
  public:
    void setString()
    {
      cout<<"Enter your string: "<<endl; 
      fgets(str,100,stdin);
    }
    void display()
    {
      cout<<str<<endl;      
    } 
    void operator !()   
    {
      for(int i=0; i<strlen(str); i++)
      {
        if(str[i]>=65 && str[i]<=90)
          str[i]=str[i]+32;
        else
        {  
          if(str[i]>=97 &&str[i]<=122)
          str[i]=str[i]-32;
        }
      }
    }
};

int main()
{
  mystring s1;
  s1.setString();
  cout<<"\nYour entered string is: "<<endl;
  s1.display();
  !s1;
  cout<<"Operated String is: "<<endl;
  s1.display();
  return 0;
}
