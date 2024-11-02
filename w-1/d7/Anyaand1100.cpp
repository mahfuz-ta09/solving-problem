#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    string ss , s1 = "1100" , testSS;
    cin >> ss;

    ll n;
    cin >> n;

    while(n--){
        ll i , v;
        char p;
        cin>> i >> v;

        if(v == 1){
            p = '1';
        }else{
            p = '0';
        }

        if (i > 0 && i <= ss.size()) {
            ss[i-1] = p;
            bool isFnd = (ss.find(s1) != string::npos);

            //cout<<ss.size()<<" "<<isFnd<<" "<<ss<<" ans \n";

            if(isFnd){
                cout<<"yes\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }


    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
