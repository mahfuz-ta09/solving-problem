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
    int i,j,x, y;
    cin >> x >> y;

    int mm = (y + 1) / 2;
    x -= (mm * 5 * 3 - y * 2 * 2);
    x = max(x, 0);
    mm += (x + 5 * 3 - 1) / (5 * 3);

    cout << mm;
    nl;
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


