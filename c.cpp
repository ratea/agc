#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int n,m,q;
vector<string> s;
int x1,x2,y1,y2;
vector<string> s2;

void dfs(int sx,int sy){
  vector<int> xmap(4);
  xmap[0]=-1;
  xmap[1]=0;
  xmap[2]=1;
  xmap[3]=0;
  vector<int> ymap(4);
  ymap[0]=0;
  ymap[1]=-1;
  ymap[2]=0;
  ymap[3]=1;
  s2[sx][sy]='0';
  for(int i = 0;i<4;i++){
    if(sx+xmap[i]>=x1&&sx+xmap[i]<x2&&sy+ymap[i]>=y1&&sy+ymap[i]<y2&&s2[sx+xmap[i]][sy+ymap[i]]=='1'){
      dfs(sx+xmap[i],sy+ymap[i]);
    }
  }
  return;
}

int main(){
  cin>>n>>m>>q;
  for(int i = 0;i<n;i++){
    string tmps;
    cin>>tmps;
    s.push_back (tmps);
  }

  for(int asd = 0;asd<q;asd++){
    s2=s;
    cin>>x1>>y1>>x2>>y2;
    x1--;
    y1--;
    int ans=0;
    for(int i=x1;i<x2;i++){
      for(int j=y1;j<y2;j++){
        if(s2[i][j]-'0'==1){
          dfs(i,j);
          ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
