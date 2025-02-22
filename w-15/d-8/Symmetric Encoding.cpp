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
    cin >> n;
    string b;
    cin >> b;

    vector<int> cnt(26, 0);
    for (char c : b) {
        cnt[c - 'a'] = 1;
    }

    string tmp = "";
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            tmp += char('a' + i);
        }
    }

    string a = "";
    for (char c : b) {
        a += tmp[tmp.size() - 1 - tmp.find(c)];
    }

    cout << a;
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


