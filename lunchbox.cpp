#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n, m; cin >> n >> m;
    int k[m];
    for(int i = 0; i<m; i++) cin >> k[i];
    sort(k, k+m);
    int ans = 0;
    for(int i = 0; i<m; i++) {
      n -= k[i];
      if(n<0) break;
      ans++;
    }
    cout << ans;
    return 0;
}
