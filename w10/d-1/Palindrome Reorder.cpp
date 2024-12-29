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

    n=s.size();
    ll l=0,r=n-1;

    vector<ll>frq(26,0);
    for(i=0;i<n;i++){
        frq[s[i]-'A']++;
    }

    p=0;
    for(i=0;i<n;i++){
        if(frq[i]%2!=0){
            p++;
        }
    }


    if(p>1){
        cout<<"NO SOLUTION";
    }else{
        string fin(n,' ');
        for(i=0;i<n;i++){
            if(frq[s[i]-'A']%2==1){
                fin[n/2]=s[i];
                frq[s[i]-'A']--;
            }
            while(frq[s[i]-'A']>0){
                fin[l++]=s[i];
                fin[r--]=s[i];
                frq[s[i]-'A']-=2;
            }
        }

        cout<<fin;
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

