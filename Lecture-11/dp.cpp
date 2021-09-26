#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//top down dp
int fibonaccidp(int dp[], int n) {
	if (n <= 1) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	return dp[n] = fibonaccidp(dp, n - 1) + fibonaccidp(dp, n - 2);
}
int fibonaccidpbottomUp(int n) {
	int dp[n + 1];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}


int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int longestIncSubseq(int arr[], int n) {
	int dp[n] = {0};
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max(ans, dp[i]);
	}
	return ans;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int n;
	// cin >> n;
	// // cout << fibonacci(n) << endl;
	// int dp[n + 1];
	// //memset accepts only 0 and -1
	// memset(dp, -1, sizeof dp);
	// cout << fibonaccidp(dp, n) << endl;
	// cout << fibonaccidpbottomUp(n) << endl;
	int arr[] = {1, 2, 4, 3, 5, 6, 8};
	int n = sizeof(arr) / sizeof(int);
	cout << longestIncSubseq(arr, n) << endl;


	return 0;
}