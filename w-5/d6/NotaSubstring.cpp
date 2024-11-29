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
    string ss;
    cin>>ss;

    n=ss.size();

    if(ss=="()"){
        no;
        return;
    }

    int flag = 0;

    for(i=0;i<n-1;i++){
        if(ss[i]=='('&&ss[i+1]=='(' || ss[i]=='('&&ss[i+1]==')'){
            flag=1;
        }
    }

    string st="";

    if(flag==1){
        for(i=0;i<n-1;i++){
            st+="()";
        }
    }else{
        for(i=0;i<n-1;i++){
            st+='(';
        }

        for(i=0;i<n-1;i++){
            st+=')';
        }
    }
    yes;
    cout<<st;
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


