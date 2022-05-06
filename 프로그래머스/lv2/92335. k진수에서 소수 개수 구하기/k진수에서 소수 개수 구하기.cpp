#include <string>
#include <sstream>
#include <cmath>
using namespace std;

bool is_prime(long long num){
    if(num<2)
        return false;
    if(num==2)
        return true;
    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0)
            return false;
    return true;
}

int solution(int n, int k) {
    int answer = -1;
    string a="";

    while(n!=0){
        a.insert(0,to_string(n%k));
        n/=k;
    }
    
    if(a.empty())
        return answer;
    istringstream ss(a);
    string temp;
    while(getline(ss,temp,'0')){
        if(temp.empty())
            continue;
        if(temp!="1")
            if(is_prime(stoll(temp))==true)
                answer++;
    }
    answer++;
    return answer;
}