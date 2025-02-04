#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n>>m;

    vector<ll> ba(n),bo(m);

    for(i=0;i<n;i++)cin>>ba[i];
    for(i=0;i<m;i++)cin>>bo[i];


    if(n < 4 || m < 4 || n + m < 11){
        cout<<-1;
    }else{
        sort(ba.rbegin(),ba.rend());
        sort(bo.rbegin(),bo.rend());

        ll total = 0;
        for(i=0;i<4;i++)total+=ba[i];
        for(i=0;i<4;i++)total+=bo[i];


        ll cnt=0;
        i=4,j=4;

        while(cnt<3 && (i<n||j<m)) {
            if(i<n&& j<m) {
                if(ba[i]>bo[j]){
                    total+=ba[i++];
                }else{
                    total+=bo[j++];
                }
            }else if(i<n){
                total+=ba[i++];
            }else if(j<m) {
                total+=bo[j++];
            }
            cnt++;
        }
        cout << total;
    }

    nl;
}

int main(){
    iOS
    ll t;
    //t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


