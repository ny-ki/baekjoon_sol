#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector <long long> v;
  long long num;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num;
    v.push_back(num);
  }
  sort(v.begin(),v.end());

  long long max=v[0];
  int max_num=0, count=0;
  for(int i=0;i<n;i++){
    if(i==0||v[i-1]==v[i])
      count++;
    else{
      if(max_num<count){
        max_num=count;
        max=v[i-1];
      }
      count=1;
    }
  }
  if(max_num<count){
    max=v[n-1];
  }
  cout<<max;
  
  return 0;
}