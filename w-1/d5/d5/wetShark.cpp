#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n , i , sum = 0;
    int min_ODD = 1e9+1;

    cin>>n;

    vector<int>v(n);

    for(i=0 ; i<n ; i++){
        cin>>v[i];

        sum+=v[i];

        if(v[i]%2 != 0){
            min_ODD = (min_ODD,v[i]);
        }
    }


    if(sum%2==0){
        cout<<sum;
    }else{
        cout<<sum-min_ODD;
    }

    return 0;
}
