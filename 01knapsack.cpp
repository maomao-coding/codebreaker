#include <iostream>
#include <algorithm>
using namespace std;
#define fori(n) for(int i=1;i<=n;i++)
#define ll long long

int main() {
    int n,w; cin >> n >> w;
    int wt,v;
    ll arr[n+1][w+1]; 
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=w;j++) arr[i][j]=0;
    }
    for(int i=1;i<=n;i++) {
        cin >> wt >> v;
        for(int j=1;j<=w;j++) {
            //not take item i 
            arr[i][j] = arr[i-1][j]; 
            //take item i 
            if(j>=wt) {
                arr[i][j] = max(arr[i][j],arr[i-1][j-wt]+v);
            }
        }
    }
    
    ll ans = 0;
    fori(w) ans = max(ans,arr[n][i]);
    cout << ans;
    return 0;
}
