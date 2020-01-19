#include<unordered_map>
#include<cstring>
using namespace std;

int main()
{
    string s;
	getline(cin,s);
	string word="";
unordered_map<string,int>m;
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			m[word]+=1;
			word="";
		}
		else{
			word=word+s[i];
		}
	}
    
m[word]++;
	int flag=0;
	unordered_map<string,int> :: iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if(it->second>1){
        cout << it->first << " " << it->second << endl; 
			 flag=1;
        }
     }
          if(flag==0){
			 	cout<<"-1"<<endl;
			 }
	return 0;
}
