/* This problem can be found at: https://neps.academy/exercise/497 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 1e5+10;

int n;
int cont;
bool mark[MAXN];

vector <int> adj[MAXN];

void dfs (int x){ // get the number of components
    cont++;
    mark[x] = true;

    for (auto u: adj[x]){
        if (!mark[u])
            dfs(u);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 1; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if (c == 0){ // if they do not have a good path
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }

    ll result = (ll)n * (n-1) / 2;    

    for (int i = 1; i <= n; i++){
        if (!mark[i]){
            cont = 0;
            dfs(i);
            result -= (ll)cont * (cont-1) / 2;
        }
    }

    cout << result;

    return 0;
}