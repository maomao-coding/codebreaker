#include <iostream>
using namespace std;
#define fori(n) for(int i = 0; i<n ;i++)
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int lim = 1e6+5;
	//precompute
	int divsum[lim]{};
	for(int i = 1; i<= lim; i++) {
		for(int j = i; j <= lim; j+=i) divsum[j]+=i;
	}
	int pre[lim]{}; 
	for(int i =1; i<= lim; i++) pre[i] = max(pre[i-1], divsum[i]);
	
	int t; cin >> t;
	int n;
	fori(t) {
		cin  >> n;
		cout << pre[n] << endl;
	}
	return 0;
}
