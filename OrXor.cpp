#include <iostream>
using namespace std;
#define fori(n) for(int i = 0;i<n;i++)
signed  main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int arr[n];
	int res = 1<<30;
	fori(n) cin >> arr[i];
	//Try all the 2^(n-1) possibilities to divide arr
	for(int j=0;j < 1 << (n-1);j++) { 
		int ored = 0; int xored=0;
		fori(n+1) {
			if(i<n) ored |= arr[i];
			if(j >> i & 1 || i==n) xored ^= ored, ored=0;
		}
		res = min(res, xored);
	}
	cout << res;
	return 0;
}
