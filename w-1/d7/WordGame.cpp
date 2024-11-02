#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int i , j;
    map<string,vector<int>> word;
    int n;
    cin >> n;

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<n ; j++){
            string s;
            cin >> s;
            word[s].push_back(i);
        }
    }

    vector<int> ans(3,0);

    for(auto [x,y]:word){
        int sz = y.size();
        if(sz==1){
            ans[y[0]]+=3;
        }else if(sz==2){
            for(auto k:y){
                ans[k]+=1;
            }
        }
    }

    for(auto an:ans){
        cout<<an<<" ";
    }
    cout<<"\n";
}


int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
