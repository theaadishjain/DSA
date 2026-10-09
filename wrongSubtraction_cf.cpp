#include <bits/stdc++.h>
using namespace std;
int main(){
    long long val;
    int n;
    cin>>val>>n;
    for(int i=0;i<n;i++){
        int temp=val%10;
        if(temp!=0){
            val--;
        }
        else{
            val=val/10;
        }
    }
    cout<<val;
    return 0;
}