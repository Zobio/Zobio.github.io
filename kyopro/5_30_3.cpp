#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

int main() {
	int n; 
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<pair<int, int>> dp(n + 1);
	dp[0].first = 0;
	dp[0].second = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] > dp[i].second) {
			dp[i + 1].first = dp[i].first + 1;
			dp[i + 1].second = a[i];
		}else{
			dp[i + 1].first = dp[i].first;
			dp[i + 1].second = dp[i].second;
		}
		cout << i + 1 << ": " << dp[i + 1].first << " " << dp[i + 1].second << endl;
	}
	cout << dp[n].first << endl;
}