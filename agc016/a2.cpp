#include<iostream>
using namespace std;
#include<map>
#include<vector>

int main(){
	string s;
	cin>>s;
	map<char,int> mp;
	
	for(int i=-0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	int ans=0;
	vector<char> x;
	
	for(auto &el:mp){
		if(ans<el.second){
			ans=el.second;
		}
	}
	
	for(auto &el:mp){
		if(ans==el.second)x.push_back(el.first);
	}
	
	int sz=s.size();
	int j=0;
	int l=100;
	
	string s2=s;
	int ans2=ans;
	
	for(int k=0;k<x.size();k++){
		s=s2;
		j=0;
		ans=ans2;
		while(sz>j+ans){
			for(int i=0;i<s.size()-1;i++){
				if(s[i+1]==x[k]&&s[i]!=x[k]){
					s[i]=x[k];
					ans++;
					i++;
				}
			}
			cout<<s<<endl;
			j++;
		}
		//cout<<j<<" "<<x[k]<<endl;
		l=min(l,j);
	}
	cout<<j<<endl;
	
	return 0;
}