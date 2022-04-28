#include <bits/stdc++.h>
using namespace std;

int main() {  
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, start, end;
  int answer=0;
  vector <pair<int,int>> v;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>start>>end;
    v.push_back(make_pair(end, start));
  }
  sort(v.begin(),v.end());

  int t=v[0].first;
  answer++;
  for(int i=1;i<n;i++){
    if(t<=v[i].second){
      t=v[i].first;
      answer++;
    }
  }

  cout<<answer;
  return 0;
}
