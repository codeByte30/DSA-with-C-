#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int>v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // cout << v.front() << endl;
    // cout << v.back() << endl;
    // cout << v.size() << endl;

    // v.pop_back();
    // cout << v.back() << endl;

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    //     cout << *it << endl;
    // }


    // for (auto it = v.begin(); it != v.end(); it++) {
    //     cout << *it << endl;
    // }

    // for (auto it : v) {
    //     cout << it << " ";
    // }

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    sort(v.begin(), v.begin() + 4);

    // for (auto x : v) {
    //     cout << x << " ";
    // }

    // if (binary_search(v.begin(), v.end(), 2)) {
    //     cout << "Present\n";
    // }
    // else {
    //     cout << "Not present\n";
    // }

    map<int, int>m;

    for (int i = 0; i < v.size(); i++) {
        m[v[i]]++;
    }

    for (auto p : m) {
        cout << p.first << "--->" << p.second << endl;
    }


    return 0;
}