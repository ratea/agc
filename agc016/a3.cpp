#include<iostream>
using namespace std;
#include<map>
#include<vector>

int main(){
	string s;
	cin>>s;
	map<char,int> mp;
	
	int b;
	int c;
	int m=0;
	int ans=101;
	
	
	for(int i=-0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	int bb=0;
	for(auto &el:mp){
		if(bb<el.second){
			bb=el.second;
		}
	}
	if(bb==1){
		int anss=s.size()/3;
		if(s.size()%3!=0)anss++;
		cout<<anss+1<<endl;
		return 0;
	}
	if(bb==0){
		cout<<0<<endl;
		return 0;
	}
	
	for(int i=0;i<s.size();i++){
		char x=s[i];
		b=0;
		c=0;
		int j;
		for(j=0;j<s.size();j++){
			if(b=0&&s[j]==x){
				b=j;
			}else if(s[j]==x){
				c=j;
				m=max(m,c-b-1);
				b=c;
			}
		}
		ans=min(ans,m);
	}
	int ansa=m/3;
	if(m%3!=0)ansa++;
	cout<<ansa<<endl;
	return 0;
}