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
    int n, k;
    cin >> n >> k;
    vector<int>c(n);
    for(int i = 0; i < n; i++) cin >> c[i];

    int left = 0, right = 0, i = 0, j = n - 1;
    int k_left = k, k_right = k;

    if (c[0] == c[n - 1]){
        k_left = k / 2;
        k_right = k - k_left;
    }
    for(; i < n && left < k_left; i++){
        if(c[i] == c[0]) left++;
    }
    for(; j >= 0 && right < k_right; j--){
        if(c[j] == c[n - 1]) right++;
    }

    if((i-1)<(j+1)){
        yes;
    }else{
        no;
    }
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


