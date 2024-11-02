#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n,i;
    cin >> n;

    map<string,int> lst;

    for(i=0 ; i<n ; i++){
        string s;
        cin >> s;

        lst[s]++;

        if(lst[s]>1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

}


int main(){
    solve();
    return 0;
}


