#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n,i;
    string s;
    cin >> n >> s;


    set<char> nw(s.begin(),s.end());
    string s(nw.begin(),nw.end());

    int lr = r.size();

    map<char,char> mp;
    for(i=0 ; i<lr ; l++){
        mp[s[i]] = r[ln-i-1];
    }

    string ans;
    for(auto s: )
}


int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}



