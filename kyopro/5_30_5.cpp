#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define INF 20000000

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> dp(n, INF);
	for(int i = 0; i < n; i++) {
		auto it = lower_bound(dp.begin(), dp.end(), a[i]);
		*it = a[i];
	}
	auto it = lower_bound(dp.begin(), dp.end(), INF);
	cout << it - dp.begin() << endl;
}