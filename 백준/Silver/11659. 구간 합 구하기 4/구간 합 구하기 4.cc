#include <bits/stdc++.h>
using namespace std;

int d[100001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  cin>>n>>m;

  int num,x,y;

  d[0]=0;
  for(int i=1;i<=n;i++){
    cin>>num;
    d[i]=d[i-1]+num;
  }

  for(int i=0;i<m;i++){
    cin>>x>>y;
    cout<<d[y]-d[x-1]<<'\n';
  }

  return 0;
}