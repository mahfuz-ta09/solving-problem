#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int min_divisor(int n) {
    for (int d = 2; d <= sqrt((double)n); ++d) {
        if (n % d == 0) {
            return d;
        }
    }
    return n;
}

void solve() {
    int l, r;
    cin >> l >> r;

    bool found = false;
    for (int x = l; x <= r; ++x) {
        int md = min_divisor(x);
        if (md != x) {
            cout << md << " " << x - md << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << -1 << endl;
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
