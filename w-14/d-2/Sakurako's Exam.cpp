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

void solve(){
    int num1, num2;
    cin>>num1>>num2;

    bool condition1 = (num1%2==0);
    bool condition2 = (num2%2==0);
    bool condition3 = (num1!=0);

    if (condition1 && (condition2||condition3)) {
        yes;
    } else {
        no;
    }
}

int main(){
    iOS
    ll t;
    t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


