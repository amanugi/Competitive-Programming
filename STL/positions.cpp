#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;

 struct triple {
  string first;
  int second;
  int third;
};

bool sortbysec(const triple &a, const triple &b)
{
    if(a.second > b.second)  {
      return true;
    }
    else if(a.second == b.second) {
      return (a.third < b.third);
    }
    else  {
      return false;
    }
}

int main()  {
  std::vector <triple> v;
  int n;
  cin>>n;
  int i=1;
  while(n--)  {
    string name;
    int m1,m2,m3;
    cin>>name;
    cin>>m1>>m2>>m3;
    int sum = m1+m2+m3;
    v.push_back({name, sum, i});
    i++;
  }
    
  std::vector<triple>:: iterator it;
  sort(v.begin(), v.end(), sortbysec);
    
  i=1;
  for(it=v.begin();it!=v.end();it++)  {
      cout<<i<<" "<<it->first<<endl;
      i++;
  }
  return 0;
}
