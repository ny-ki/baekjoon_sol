#include <bits/stdc++.h>
using namespace std;

vector<string>v;

bool cmp(string & a, string & b){
  if(a.length()!=b.length())
    return a.length()<b.length();
  
  int c_a=0,c_b=0;
  for(int i=0;i<a.length();i++){
    if(a[i]>47&&a[i]<58)
      c_a+=(a[i]-'0');
  }
  for(int i=0;i<b.length();i++){
    if(b[i]>47&&b[i]<58)
      c_b+=(b[i]-'0');
  }
  if(c_a!=c_b)
    return c_a<c_b;

  return a<b;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
  }
  sort(v.begin(),v.end(), cmp);
  for(int i=0;i<n;i++)
    cout<<v[i]<<'\n';

  return 0;
}