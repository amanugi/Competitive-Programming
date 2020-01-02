#include<iostream>
using namespace std;

class B;
class A
{
  private:
      int a;
  public:
    void set_data(int x)
    {  a = x; }

    friend void fun(A,B);
};

class B
{
  private:
      int b;
  public:
    void set_data(int y)
    { b = y; }

    friend void fun(A,B);
};

void fun(A o1,B o2)
{
    cout<<"Sum is "<<o1.a + o2.b;
}

int main()
{
  A obj1;
  B obj2;
  obj1.set_data(5);
  obj2.set_data(6);
  fun(obj1,obj2);
}
