#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
signed  main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, t, x; 
	cin >> n >> t;
	int arr[31]{};
	while(n--) {
		cin >> x;
		arr[(int)log2(x)]++;
	}
	ll e = 0; int p=31;
	while(t--) {
		if(arr[p]==0) {
			if(p==0) break;
			p--; t++;
			continue;
		}
		e+=pow(2, p);
		arr[p]--; 
		if(p>0) arr[p-1]+=2;
		
	}
	cout << e;
	return 0;
}
