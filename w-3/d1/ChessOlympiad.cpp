#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll n,i,m,p;

    cin>>n>>m>>p;

    double xp = n+(m*0.5);

    ll total = n+m+p;
    double left = 4-total;

    if(left+n>p){
        yes
    }else{
        no
    }
}

int main(){
    iOS


    ll t;
    t=1;
    //cin >> t;

    while(t--)solve();

    return 0;
}


