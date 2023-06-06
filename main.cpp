#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	cout << (x % n == 0 ? "YES" : "NO") << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}
