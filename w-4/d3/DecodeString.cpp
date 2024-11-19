#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve() {
    ll n;
    cin >> n;

    string ss, ans;
    cin >> ss;

    while (n>0) {
        if (n>2 && ss[n-1]=='0') {
            string sub = ss.substr(n-3,2);
            char ch = char(stoi(sub)+96);
            ans = ch+ans;
            n -= 3;
        } else {
            char ch = char((ss[n-1]-'0')+96);
            ans = ch+ans;
            n--;
        }
    }

    cout << ans;
    nl;
}



int main(){
    iOS
    ll t;
    cin >> t;

    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


