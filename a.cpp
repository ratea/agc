#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){
    long long int n,a,b;
    cin>>n>>a>>b;

    long long int ans = -(a*(n-1)+b)+(b*(n-1)+a)+1;
    if(ans<0)ans=0;
    cout<<ans<<endl;
}
