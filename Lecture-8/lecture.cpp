#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int factorial(int n) {
    //base case
    if (n <= 1) {
        return 1;
    }

    //recursive case
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    //base case
    if (n <= 1) {
        return n;
    }

    //recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int linearSearch(int a[], int start, int n, int key) {
    //base case
    //element not found
    // cout << start << "\n";
    if (start == n) {
        return -1;
    }

    //element found at this index
    if (a[start] == key) {
        return start;
    }

    return linearSearch(a, start + 1, n, key);
}
int linearSearchLastOccurence(int a[], int start, int key) {
    //base case
    //element not found
    cout << start << "\n";
    if (start < 0) {
        return -1;
    }

    //element found at this index
    if (a[start] == key) {
        return start;
    }

    return linearSearchLastOccurence(a, start - 1, key);
}

int binarySearch(int a[], int start, int end, int key) {
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;

    if (a[mid] == key) {
        return mid;
    }
    else if (key > a[mid]) {
        return binarySearch(a, mid + 1, end, key);
    }
    else {
        return binarySearch(a, start, mid - 1, key);
    }
}

int binarySearchFirstOccurence(int a[], int start, int end, int key, int&ans) {
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;

    if (a[mid] == key) {
        ans = mid;
        return binarySearchFirstOccurence(a, start, mid - 1, key, ans);
    }
    else if (key > a[mid]) {
        return binarySearchFirstOccurence(a, mid + 1, end, key, ans);
    }
    else {
        return binarySearchFirstOccurence(a, start, mid - 1, key, ans);
    }
}
// int binarySearchFirstOccurence(int a[], int start, int end, int key, int&ans) {
//     if (start > end) {
//         return -1;
//     }

//     int mid = (start + end) / 2;

//     if (a[mid] == key) {
//         ans = mid;
//         return binarySearchFirstOccurence(a, start, mid - 1, key, ans);
//     }
//     else if (key > a[mid]) {
//         return binarySearchFirstOccurence(a, mid + 1, end, key, ans);
//     }
//     else {
//         return binarySearchFirstOccurence(a, start, mid - 1, key, ans);
//     }
// }

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    // cout << factorial(n) << endl;
    // int x = 10;
    // for (int i = 0; i <= n; i++) {
    //     cout << fibonacci(i) << " ";
    // }

    int a[n];
    for (int i = 0; i < n ; i++) {
        cin >> a[i];
    }

    int key;
    cin >> key;
    // cout << linearSearch(a, 0, n, key) << endl;
    // cout << endl;
    // cout << linearSearchLastOccurence(a, n - 1, key) << endl;
    // int ans;
    // binarySearchFirstOccurence(a, 0, n - 1, key, ans);
    // cout << ans;
    // cout << power(2, 3) << endl;



    return 0;
}
