#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n;
    cin>>n;

    map<string,string> ans,hold;
    while(n--){
        string a,b;
        cin>> a >> b;

        if(hold.find(a)!=hold.end()){
            string s = hold[a];
            ans[s] = b;
            hold.erase(a);
            hold[b]=s;
        }else{
            ans[a] = b;
            hold[b] = a;
        }
    }

    cout<<ans.size()<<"\n";
    for(auto [x,y]:ans){
        cout<<x<<" "<<y<<"\n";
    }
}


int main(){
    solve();
    return 0;
}
