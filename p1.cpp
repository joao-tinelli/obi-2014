/* This problem can be found at: https://neps.academy/exercise/306 */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
const int INF = 1e9+10;

int main(){  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int v[MAXN], dp[MAXN], opt[MAXN]; // [ opt[i], i ] = dp[i]

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dp[0] = v[0];
    opt[0] = 0;

    for (int i = 1; i < n; i++){

        if (v[i] >= dp[i-1] + v[i])
            opt[i] = i;
        else
            opt[i] = opt[i-1];

        dp[i] = max (v[i], dp[i-1] + v[i]);
    }

    int ans = -INF;
    int index;

    for (int i = 0; i < n; i++){

        if (dp[i] > ans){
            ans = dp[i];
            index = i;
        }
    }

    cout << ans; 
        
    return 0;
}