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
    cin>>n>>m;

    ll a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    ll mx = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            ll cur = 0;
            ll ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				cur+=a[ci][cj];
				ci--;
				cj--;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				cur+=a[ci][cj];
				ci++;
				cj--;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				cur+=a[ci][cj];
				ci--;
				cj++;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				cur+=a[ci][cj];
				ci++;
				cj++;
			}
			cur-=a[i][j]*3;
			mx = max(mx, cur);
        }
    }

    cout<<mx;
    nl;

}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}


