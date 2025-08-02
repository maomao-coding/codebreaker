#include <iostream>
#include <queue>
using namespace std;
#define pii pair<int,int>
#define int long long
#define f first
#define s second
signed  main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q; cin >> q;
	int t, h, x;
	queue<pii> v; 
	while(q--) {
		cin >> t;
		if(t==1) {
			cin >> h >> x;
			v.push({h,x});
		} else {
			cin >> x;
			int sum=0;
			while(x>0) {
				pii &p=v.front();
				if(x>=p.s) {
					sum += p.f*p.s;
					x -= p.s;
					v.pop();
				} else {
					sum += x*p.f;
					p.s -= x; 
					x = 0;
				}
			}	
			cout <<sum << endl;
		}
	}
	return 0;
}
