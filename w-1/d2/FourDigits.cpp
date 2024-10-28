#include<bits/stdc++.h>

using namespace std;


int main(){
    int b,c,result;

    string a;
    cin>>a;

    b = a.size();

    while(b!=4){
        a = '0' + a;
        b++;
    }

    cout<<a;
  return 0;
}
