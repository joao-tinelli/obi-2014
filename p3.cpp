/* This problem can be found at: https://neps.academy/exercise/496 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll L, N;
    cin >> L >> N;

    ll A = L-(N-1);

    ll ans = N-1 +(A*A);

    cout << ans;

    return 0;
}