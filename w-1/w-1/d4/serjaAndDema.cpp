#include<bits/stdc++.h>
using namespace std;


int main() {
    int n , i;
    cin >> n;
    vector<int> cards(n);

    for (i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int srSC = 0, dmSC = 0, lt = 0, rt = n - 1;
    bool srTRN = true;


    while (lt <= rt) {

        if (cards[lt] > cards[rt]) {
            if (srTRN) {
                srSC += cards[lt];
            } else {
                dmSC += cards[lt];
            }
            lt++;
        } else {
            if (srTRN) {
                srSC += cards[rt];
            } else {
                dmSC += cards[rt];
            }
            rt--;
        }
        srTRN = !srTRN;
    }

    cout << srSC << " " << dmSC << endl;

    return 0;
}

