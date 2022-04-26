#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin>>n;

  stack<pair<int,int>>s;
  s.push(make_pair(100000001,0));
  int k;
  for(int i=1;i<=n;i++){
    cin>>k;
    while(s.top().first<k)
      s.pop();
    cout<<s.top().second<<' ';
    s.push(make_pair(k,i));
  }
  
  return 0;
}