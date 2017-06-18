#include<iostream>
using namespace std;
#include<map>

int main(){
	string s;
	cin>>s;
	map<char,int> mp;
	
	for(int i=-0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	int ans=0;
	char x;
	
	for(auto &el:mp){
		if(ans<el.second){
			ans=el.second;
			x=el.first;
		}
		if(ans==el.second){
			int a=100;
			int b=100;
			for(int i=0;i<s.size();i++){
				
	}
	
	int sz=s.size();
	int j=0;
	
	while(sz>j+ans){
		for(int i=0;i<s.size()-1;i++){
			if(s[i+1]==x&&s[i]!=x){
				s[i]=x;
				ans++;
				i++;
			}
		}
		j++;
	}
	
	cout<<j<<endl;
	
	return 0;
}