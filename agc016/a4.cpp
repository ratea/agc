#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	for(int i=0;i<26;i++){
		string s2=s;
		char x='a'+i;
		while(1){
			for(int j=0;j<s.size();j++){
				vector<int> a(s.size()-1,0);
				
	}