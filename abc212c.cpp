#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#define INF 1e9
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define v2i vector<vector<int>>
#define v2b vector<vector<bool>>
#define v2ll vector<vector<long long>>
#define all(x) x.begin(),x.end()
using namespace std;
using ll = long long;


int main(){
    int n, m; cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(all(a));
    sort(all(b));

    int na = 0, nb = 0;
    int ans = INF;
    while(true){
        int p = a[na];
        int q = b[nb];

        ans = min(ans, abs(p-q));
        if(p>q) nb++;
        else na++;

        if(na==n || nb==m) break;
    }
    cout << ans << endl;
    return 0;
}