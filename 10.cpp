/*Class Matrix
{
  int a[3][3];
 public:
  //methods
};
Let m1 and m2 are two matrices, find out m3=m1+m2(use operator overloading)
*/

#include<iostream>
using namespace std;
class Matrix
{
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
     cout<<"\n\n";
   }
   Matrix operator +(Matrix &m)
   {
     Matrix t;
     for(int i=0; i<9; i++)
      for(int j=0; j<9; j++)
        t.a[i][j]=a[i][j]+m.a[i][j];
     return t;
   }
};


int main()
{
  Matrix m1,m2,m3;
  cout<<"Enter 1st Matrix Element (3*3)"<<endl<<endl;
  m1.setData();
  m1.display();
  cout<<"Enter 2nd Matrix Element (3*3)"<<endl<<endl;
  m2.setData();
  m2.display();
  m3=m1+m2;
  cout<<"The Sum of 1st & 2nd matrices: "<<endl;
  m3.display(); 
 return 0;
}
