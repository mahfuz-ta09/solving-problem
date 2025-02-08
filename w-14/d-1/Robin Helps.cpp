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
    int n,k;
    cin >> n >> k;

    int res = 0, gold = 0;
    for (int i=0;i<n;i++){
        int cur;
        cin >> cur;
        if (!cur && gold) gold--, res++;
        else if (cur >= k) gold += cur;
    }

    cout << res << '\n';
}

int main(){
    iOS
    ll t;
    t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


