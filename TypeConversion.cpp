#include<iostream>

using namespace std;

//Primitive to Class Type

class Computer
{
private:
    int a,b;
public:
    Computer()
    {   }
    Computer(int k)
    { a = k; b = 0; }
   // void set_data(int x,int y)
    //{ a=x;  b=y; }
    void show_data()
    {  cout<<"\na="<<a<<"\t"<<"b="<<b ;  }
};

int main()
{
    Computer c1;
    int x=5;
    c1 = x;
    c1.show_data();
}

// Class Type to Primitive

class Computer
{
private:
    int a,b;
public:
    Computer()
    {   }
    operator int()
    {  return(a);  }
   void set_data(int x,int y)
    { a=x;  b=y; }
    void show_data()
    {  cout<<"\na="<<a<<"\t"<<"b="<<b ;  }
};

int main()
{
    Computer c1;
    c1.set_data(5,6);
    c1.show_data();
    int x;
    x=c1;
    cout<<"\nx = "<<x;
} */

//One Class Type to another Class Type

class Mobile
{
private:
    int m,n;
public:
    int getM()
    {  return(m); }
    int getN()
    {  return(n); }
    void set_data(int p,int q)
    {  m=p ;  n=q ;  }
    void show_data()
    { cout<<"\nm = "<<m<<"\t"<<"n = "<<n; }
};

class Computer
{
private:
    int a,b;
public:
    Computer()
    {     }
    Computer(Mobile M)
    {
        a = M.getM();
        b = M.getN();
    }
    void set_data(int x,int y)
    {  a=x ;  b=y ;  }
    void show_data()
    {    cout<<"\na = "<<a<<"\t"<<"b = "<<b;  }
};

int main()
{
    Computer c1;
    c1.set_data(3,6);
    c1.show_data();
    Mobile m1;
    m1.set_data(5,9);
    m1.show_data();

    c1 = m1;
    c1.show_data();
}



