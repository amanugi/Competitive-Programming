#include<iostream>
using namespace std;

class Integer
{
    private:
        int x,y;
    public:
        void set_data(int a,int b)
        {  x=a;  y=b; }
        void show_data()
        {  cout << "x=" << x <<"\t"<<"y=" << y;  }

        Integer operator-()
        {
            Integer temp;
            temp.x = -x;
            temp.y = -y;
            return(temp);
        }
};

 int main()
 {
     Integer c1,c2;
     int a,b;
     cin >> a >> b;
     c1.set_data(a,b);
     c2 = -c1;              // c2 = c1.operator-()
     c2.show_data();
 }

/*
 class Integer
 {
    private:
        int x;
    public:

        void set_data(int k)
        {  x=k;  }

        void show_data()
        {  cout<<"x="<<x;  }

        Integer operator++()      // Pre-Increment
        {
            Integer i;
            i.x = ++x;
            return(i);
        }

        Integer operator++(int)   // Post-Increment
        {
            Integer i;
            i.x = x++;
            return(i);
        }
 };

int main()
  {
      Integer i1,i2;
      i1.set_data(5);
      i1.show_data();
      i2 = i1++;
      i1.show_data();
      i2.show_data();
  } */








