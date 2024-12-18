#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll i,j,n,m,p,ans=0;
    string s;
    cin>>s;

    vector<ll> val(2,0);

    for(auto a:s){
        val[a-'0']++;
    }

    for(i=0;i<=s.size();i++) {
        if (i== s.size() || val[1 - (s[i] - '0')] == 0) {
            cout << s.length() - i;
            nl;
            break;
        }
        val[1-(s[i]-'0')]--;
    }
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


