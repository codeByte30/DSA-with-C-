#include<iostream>
#include<climits>
using namespace std;
// int a = 5;

// int fun() {
// 	int b = 6;
// 	cout << "Inside fun\n";
// 	cout << a << endl;
// 	cout << b << endl;
// }
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	// int a;
	// cin >> a;
	// cout << a << '\n';

	// cout << sizeof(a) << endl;


	// float f;
	// cin >> f;
	// cout << f << endl;

	// cout << sizeof(f) << endl;

	// char ch;
	// cin >> ch;
	// cout << ch << endl;
	// cout << sizeof(ch) << endl;

	// fun();
	// cout << a << endl;

	// cout << b << endl;

	int n;
	cin >> n;

	// for (int i = 0; i < n; i++) {
	// 	if (i == 5) {
	// 		break;
	// 	}
	// 	cout << i << endl;
	// }


	// while (n > 0) {
	// 	cout << n << endl;
	// 	n--;
	// }

	// do {
	// 	cout << n << endl;
	// 	n--;
	// }
	// while (n > 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*' << " ";
		}
		cout << endl;
	}

	return INT_MAX;
}