#include <bits/stdc++.h>
using namespace std;

int main() {  
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, num;
  int answer=0;
  vector <int> a,b;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num;
    a.push_back(num);
  }
  for(int i=0;i<n;i++){
    cin>>num;
    b.push_back(num);
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  for(int i=1;i<=n;i++){
    answer+=a[n-i]*b[i-1];
  }

  cout<<answer;
  return 0;
}
