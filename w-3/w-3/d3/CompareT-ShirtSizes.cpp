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
    ll i,n,m,p,ans=0;
    string s,t;
    cin>>s>>t;

    int x = s.size();
    int y = t.size();

    if(s==t) cout<<"="<<endl;
    else if(s[x-1]=='M'){
        if(t[y-1]=='S') cout<<">"<<endl;
        else cout<<"<"<<endl;
    }else if(t[y-1]=='M'){
        if(s[x-1]=='L') cout<<">"<<endl;
        else cout<<"<"<<endl;
    }else if(s[x-1]=='S' && t[y-1]=='L') cout<<"<"<<endl;
    else if(s[x-1]=='L' && t[y-1]=='S') cout<<">"<<endl;
    else if(s[x-1]==t[y-1]){
        if(s[x-1]=='S'){
            if(x>y) cout<<"<"<<endl;
            else cout<<">"<<endl;
        }else{
            if(x<y) cout<<"<"<<endl;
            else cout<<">"<<endl;
        }
    }
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}

