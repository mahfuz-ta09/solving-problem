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
    string s;
    cin>>s;

    stack<char> st;

    for(auto a:s){
        if(!st.empty() && st.top()!= a){
            st.pop();
            ans++;
        }else{
            st.push(a);
        }
    }

    if(ans%2==1){
        cout<<"Zlatan";
    }else{
        cout<<"Ramos";
    }
    nl;
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


