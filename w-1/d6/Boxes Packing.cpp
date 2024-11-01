#include<bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
    ll n , i , sum=0;
    cin>>n;

    vector<int> v(n);
    for(i=0 ; i<n ; i++)cin>>v[i];


    map<ll,ll> mp;

    for(i=0 ; i<n ; i++){
        mp[v[i]]++;
    }



    for(auto a:mp){
        sum = max(a.second,sum);
    }

    cout<<sum;

}


int main(){

    solve();

    return 0;
}
