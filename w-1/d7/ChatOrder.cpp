#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n,i;
    cin >> n;

    map<string,int> lists;
    vector<string> vs;

    for(i=0 ; i<n ; i++){
        string s;
        cin>>s;
        vs.push_back(s);
        lists[s]++;
    }

    for(i=n-1 ; i>=0 ; i--){
        string s = vs[i];
        if(lists[s]==1){
            cout<<s<<"\n";
        }else{
            if(lists[s]!=-1)cout<<s<<"\n";
            lists[s] = -1;
        }
    }

}


int main(){
    solve();
    return 0;
}

