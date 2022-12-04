/*Consider a class Matrix 
class Matrix
{
  int a[3][3];
 public:
  //methods
  
};
Overload the -(Unary) should negate the numbers stored in the object.
*/

#include<iostream>
using namespace std;
class Matrix
{
  private:
   int a[3][3];
  public:
   void setData()
   {
     cout<<"Enter the values of matrix: "<<endl;
     for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
        cin>>a[i][j];
   }
   void display()
   {
     for(int i=0;i<3;i++)
     {
       cout<<"\n\n";
       for(int j=0;j<3;j++)
        cout<<a[i][j]<<"\t";
     }
     cout<<"\n";
   }
   void operator -()
   {
     for(int i=0; i<3; i++)
      for(int j=0; j<3; j++)
        a[i][j]=-a[i][j];
   }
};

int main()
{
  Matrix m1;
  m1.setData();
  cout<<"Normal Matrix: "<<endl;
  m1.display();
  -m1;
  cout<<"Negate Matrix: "<<endl;
  m1.display();
  return 0;
}
