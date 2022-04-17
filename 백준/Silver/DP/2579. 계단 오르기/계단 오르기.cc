#include <bits/stdc++.h>
using namespace std;

int d[301][3];
vector<int>s;


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,s_n;
  cin>>n;

  s.push_back(0);
  for(int i=0;i<n;i++){
    cin>>s_n;
    s.push_back(s_n);
  }
  if(n==1){
    cout<<s[1]<<'\n';
    return 0;
  }
  d[1][1]=s[1];
  d[1][2]=0;
  d[2][1]=s[2];
  d[2][2]=s[1]+s[2];
  for(int i=3;i<n+1;i++){
    d[i][1]=max(d[i-2][1],d[i-2][2])+s[i];
    d[i][2]=d[i-1][1]+s[i];
  }
  cout<<max(d[n][1],d[n][2])<<'\n';
  return 0;
}
