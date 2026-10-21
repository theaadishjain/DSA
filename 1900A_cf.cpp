#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ans=false;
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
                if(count==3){
                    ans=true;
                    break;
                }
            }
            else{
                sum+=count;
                count=0;
            }
        }
        if(ans){
            cout<<"2"<<endl;
        }
        else{
            if(count!=0)sum+=count;
            cout<<sum<<endl;
        }
    }
    return 0;
}