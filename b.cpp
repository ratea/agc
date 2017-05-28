#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){
  long long int ans=0;
  string s;
  cin>>s;
  for(int i = 0;i<s.size();i++){
    if(s[i]=='U'){
      ans+=(i*2)+(s.size()-i-1);
    }else{
      ans+=i+((s.size()-i-1)*2);
    }
  }
  cout<<ans<<endl;
  return 0;
}
