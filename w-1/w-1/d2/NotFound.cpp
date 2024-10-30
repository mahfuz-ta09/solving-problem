#include<bits/stdc++.h>
using namespace std;


int main(){
    int n , i , k=0;

    string s;
    cin>>s;

    vector<int> arr(26,0);

    n = s.size();

    for(i=0 ; i<n ; i++){
        arr[s[i]-'a']++;
    }


    while(k<26 && arr[k]!=0){
        k++;
    }

    if(k>=26){
        cout<<"None";
    }else{
        char h = 'a'+k;
        cout<<h;
    }

    return 0;
}

