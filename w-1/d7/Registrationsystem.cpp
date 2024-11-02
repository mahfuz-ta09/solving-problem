#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n,i;
    cin >> n;

    map<string,int> lists;

    for(i=0 ; i<n ; i++){
        string s;
        cin >> s;
        lists[s]+=1;

        if(lists[s]==1){
            cout<<"OK\n";
        }else{
            cout<<s<<lists[s]-1<<"\n";
        }
    }


}


int main(){
    solve();
    return 0;
}
