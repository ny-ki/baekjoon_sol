#include <bits/stdc++.h>
using namespace std;

int main() {  
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, num;
  int answer=0;
  vector <int> v;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num;
    v.push_back(num);
  }
  sort(v.begin(),v.end());

  for(int i=1;i<=n;i++)
    answer=max(answer, v[n-i]*i);

  cout<<answer;
  return 0;
}
