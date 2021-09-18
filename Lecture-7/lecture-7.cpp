#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        //discard the left part
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        //discard the right part
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int firstOccurence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            ans = mid;
            high = mid - 1;
        }
        //discard the left part
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        //discard the right part
        else {
            high = mid - 1;
        }
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            ans = mid;
            low = mid + 1;
        }
        //discard the left part
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        //discard the right part
        else {
            high = mid - 1;
        }
    }
    return ans;
}
int bubbleSort(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
                count++;
            }
        }
    }
    return count;
}

bool compare(pair<string, int>a, pair<string, int>b) {
    return a.second > b.second;
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
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // int key;
    // cin >> key;
    // cout << binarySearch(arr, n, key) << endl;

    // cout << firstOccurence(arr, n, key) << endl;
    // cout << lastOccurence(arr, n, key) << endl;
    // int first = firstOccurence(arr, n, key);
    // int last = lastOccurence(arr, n, key);
    // if (first == -1) {
    //     cout << "ELement not found";
    // }
    // else {
    //     cout << last - first + 1 << endl;
    // }

    // sort(arr, arr + n);

    // cout << bubbleSort(arr, n) << endl;

    // for (int i = 0; i < n ; i++) {
    //     cout << arr[i] << " ";
    // }

    vector<pair<string, int>>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n ; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }


    return 0;
}