#include<iostream>
using namespace std;

int n=arr.size();
vector<int>left(n), right(n);
stack<pair<int,int>>s1,s2;

for(int i=0;i<n;i++){
    int cnt=1;

    while(!s1.empty()&&s1.top().first>arr[i]){
        cnt+=s1.top().second;
        s1.pop();
    }
    s1.push({arr[i],cnt});
    left[i]=cnt;
}