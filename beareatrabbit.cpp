#include <iostream>
using namespace std;
#define fori(n) for(int i = 0;i<n;i++)
#define int long long
signed  main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int arr[n];
	fori(n) cin >> arr[i];
	int dp[n][2]{};
	dp[0][1] = arr[0];
	for(int i = 1; i<n; i++) {
		dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
		dp[i][1] = dp[i-1][0] + arr[i];
	}
	cout << max(dp[n-1][0],dp[n-1][1]);
	return 0;
}
