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



void solve() {
    ll i, n, p = 0;
    string s;
    cin >> s;

    n = s.size();
    ll l = 0, r = n - 1;


    vector<ll>frq(26,0);
    for(char a : s) {
        frq[a-'A']++;
    }


    for(i=0;i<26;i++) {
        if(frq[i]%2!=0) {
            p++;
        }
    }

    if(p>1) {
        cout<<"NO SOLUTION";
    } else {
        string fin(n,' ');
        for (i=0;i<26;i++) {
            if (frq[i]% 2==1) {
                fin[n/2]='A'+ i;
                frq[i]--;
            }

            while(frq[i]>0) {
                fin[l++]='A'+i;
                fin[r--]='A'+i;
                frq[i]-=2;
            }
        }

        cout << fin;
    }
    nl;
}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}
