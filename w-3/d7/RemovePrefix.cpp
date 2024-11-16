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
    cin>>n;

    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    set<ll> st;
    ll ansL = n;

    for(i=n-1;i>=0;i--){
        if(st.count(v[i])){
            break;
        }
        st.insert(v[i]);
        ansL--;
    }

    cout<<ansL;
    nl;
}

//war
//problem

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


