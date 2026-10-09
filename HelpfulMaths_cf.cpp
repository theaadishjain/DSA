#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<char>ans;
    string s;
    string temp="";
    cin>>s;
    for(char c:s){
        if(isalnum(c)){
            ans.push_back(c);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        temp+=ans[i];
        if(i!=ans.size()-1){
            temp+='+';
        }

    }
    cout<<temp;
    return 0;
}