//Write a cpp program to overload the unary operators that is increament and decrement.
#include<iostream>
using namespace std;
class Student
{
  private:
    int age;
    int rank;
  public:
    Student()
    {
      cout<<"DC is called!!"<<endl;
    }
    Student(int x, int y)
    {
      cout<<"PC is called!!"<<endl;
      age=x; rank=y;
    }
    Student(const Student &s)
    {
      cout<<"CC is called!!"<<endl;
      age=s.age;
      rank=s.rank;
    }
    void setData(int x, int y)
    { 
      cout<<"SetData Function is called!!"<<endl;
      age=x; rank=y;
    }
    void showData()
    { 
      cout<<"ShowData is called!!"<<endl;
      cout<<"Age= "<<age<<" Rank= "<<rank<<endl;
    }
    void operator++(int dummy)
    {
      cout<<"Post++ is called!!"<<endl;
      age++;
      rank++;
    }
    void operator++()
    {
      cout<<"Pre++ is called!!"<<endl;
      age++;
      rank++;
    }
    void operator--(int dummy)
    {
      cout<<"Post-- is called!!"<<endl;
      age--;
      rank--;
    }
    void operator--()
    {
      cout<<"Pre-- is called!!"<<endl;
      age--;
      rank--;
    }
};

int main()
{
  Student s1,s2(20,45);
  int x,y;
  Student s3=s2;
  cout<<"Enter the age and rank: "<<endl;
  cin>>x>>y;
  s1.setData(x,y);
  s1++;
  s1.showData();
  --s1;
  s1.showData();
  ++s2;
  s2.showData();
  s2--;
  s2.showData();
  s3.showData();
  return 0;
}
