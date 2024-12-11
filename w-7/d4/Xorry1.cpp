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
    long long x;
    cin>>x;

    long long e=x,count=0;
    while(e>1)
    {
        e=e/2;
        count++;
    }
    long long temp=pow(2,count);
    cout<<x-temp<<" "<<temp<<endl;
}


int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


