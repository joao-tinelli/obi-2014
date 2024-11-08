/* This problem can be found at: https://neps.academy/exercise/495 */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 210;

int n;
int v[MAXN];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++){
        int value;
        cin >> value;

        v[value]++;
    }

    int quant = -1;
    int index = -1;

    for (int i = 0; i <= 100; i++){
        if (v[i] >= quant){
            quant = v[i];
            index = i;
        }
    }

    cout << index;

    return 0;
}