#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    int n;
    cin>>n;

    set<pair<string,string>> st;
    while(n--){
        string old , now;
        cin>>old>>now;
        st.insert({old,now});
    }

    cout<<st.size()<<"\n";

}


int main(){
    solve();
    return 0;
}
