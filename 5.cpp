/* Consider the following class Numbers
 class Numbers
 {
   int x,y,z;
   public:
    // methods
 }
 Overload the operator unary (-) to negate the numbers.
*/

#include<iostream>
using namespace std;
class Numbers
{
  private:
   int x,y,z;
  public:
   Numbers()
   {}
   Numbers(int a,int b, int c)
   {
     x=a; y=b; z=c;
   }
   Numbers(const Numbers &n)
   {
     x=n.x; y=n.y; z=n.z;
   }
   void operator=(const Numbers &n)
   {
     x=n.x; y=n.y; z=n.z;
   }
   void setData(int a,int b, int c)
   { x=a; y=b; z=c; }
   void showData()
   { cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl; }
   Numbers operator-()
   {
     Numbers temp;
     temp.x=-x;
     temp.y=-y;
     temp.z=-z;
     return temp;
   }
   
};

int main()
{
  Numbers n1,n2;
  n1.setData(12,2,13);
  n1=-n1;
  n1.showData();
}
