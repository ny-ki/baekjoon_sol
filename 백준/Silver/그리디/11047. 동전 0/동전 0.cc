#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k, num;
  int answer=0;
  vector <int> v;

  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>num;
    if(num>k)
      continue;
    v.push_back(num);
  }
  int i=v.size()-1;
  while(k!=0){
    if(i<0)
      break;
    answer+=k/v[i];
    k%=v[i];
    i--;
  }
  cout<<answer;
  return 0;
}
