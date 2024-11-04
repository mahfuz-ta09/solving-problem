#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , x = 0 , y = 0 , flag = 1;
    cin >> n;
    string ss,sd;
    cin >> ss >> sd;

    while(x<n || y<n){
        if(ss[x]==sd[y]){
            x++;
            y++;
        }else{
            if(ss[x]=='R' && ss[x]!=sd[y]){
                x++;
                y++;
                flag = 0;
            }else if(sd[y]=='R' && ss[x]!=sd[y]){
                x++;
                y++;
                flag = 0;
            }else{
                x++;
                y++;
            }
        }
    }

    if(flag==0){
        no;
    }else{
        yes;
    }
}

int main(){
    ll t;
    //t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
