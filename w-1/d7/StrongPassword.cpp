#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;

    while(n--){
        string s , ans;
        cin>>s;
        int i , ln ,counter = 0;
        ln = s.size();

        for(i=0 ; i<ln-1 ; i++){
            if(ln>1){
                if(s[i]==s[i+1] && counter==0){
                    ans = ans+s[i];
                    char ch = ' ';
                    if(s[i]+1>'z'){
                        ch = s[i]-1;
                    }else{
                        ch = s[i]+1;
                    }

                    ans = ans+ch;
                    counter++;
                }else{
                    ans = ans+s[i];
                }
            }
        }

        if(ln==1){
            char ch = ' ';
            if(s[0]+1>'z'){
                ch = s[0]-1;
            }else{
                ch = s[0]+1;
            }
            ans = ans+ch;
            counter++;
        }

        ans=ans+s[ln-1];

        if(counter==0){
            char ch = ' ';
            if(s[0]+1>'z'){
                ch = s[0]-1;
            }else{
                ch = s[0]+1;
            }
            ans = ans+ch;
        }
        cout<<ans<<"\n";
    }


}

int main(){
    solve();
    return 0;
}
