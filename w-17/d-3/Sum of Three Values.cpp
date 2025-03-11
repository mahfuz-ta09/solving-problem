#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    ll i,j,n,m,x,p,ans=0;
    cin>>n>>x;

    vector<ll>arr(n);

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<ll> > vec(n, vector<ll>(2));
    for(i=0;i<n;i++) {
        vec[i][0]=arr[i];
        vec[i][1]=i+1;
    }

    sort(vec.begin(), vec.end());

    for (ll ptr1=0;ptr1<n-2;ptr1++) {
        ll ptr2 = ptr1+1;
        ll ptr3 = n-1;

        while (ptr2 < ptr3) {
            ll currentSum = vec[ptr1][0] + vec[ptr2][0]+vec[ptr3][0];
            if (currentSum==x) {
                cout << vec[ptr1][1] << " " << vec[ptr2][1]<< " " << vec[ptr3][1] << "\n";
                return;
            }else if(currentSum>x){
                ptr3--;
            }else if (currentSum < x) {
                ptr2++;
            }
        }
    }

    cout<<"IMPOSSIBLE";
}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}

