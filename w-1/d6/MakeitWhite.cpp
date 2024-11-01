#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n , st , ed , i , j , k=0;
    cin>>n;
    string s;
    cin>>s;

    i=0;

    while(s[i]!='B'){
        i++;
        k++;
    }


    j=n-1;

    while(s[j]!='B'){
        j--;
        k++;

    }

    cout<<n-k<<"\n";

}


int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
