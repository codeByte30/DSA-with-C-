#include<bits/stdc++.h>
using namespace std;

bool reverse_sorted(vector<int>&v, int n)
{
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            return false;
        }
    }
    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    // int a, b;
    // cin >> a >> b;
    // cout << min(a, b) << endl;
    // cout << max(a, b) << endl;
    // cout << __gcd(a, b) << endl;
    // swap(a, b);
    // cout << a << " " << b << endl;


    //stack
    // stack<int>s;
    // s.push(1);
    // s.push(2);
    // s.pop();
    // cout << s.top() << endl;
    // int n;
    // cin >> n;
    // vector<int>v(n);
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     s.push(x);
    //     v[i] = x;
    // }
    // for (int i = 0; i < n ; i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // int i = 0;
    // while (!s.empty()) {
    //     v[i] = s.top();
    //     s.pop();
    //     i++;
    // }

    // cout << endl;
    // for (int i = 0; i < n ; i++) {
    //     cout << v[i] << " ";
    // }

    // int n;
    // cin >> n;
    // queue<int>q;
    // vector<int>v(n);
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     q.push(x);
    //     v[i] = x;
    // }
    // // for (int i = 0; i < n ; i++) {
    // //     cout << v[i] << " ";
    // // }
    // // cout << endl;

    // while (!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // int n;
    // cin >> n;

    // maxheap
    // priority_queue<int>pq;

    //minheap
    // priority_queue<int, vector<int>, greater<int>>pq;

    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     pq.push(x);
    // }

    // while (!pq.empty()) {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    // int a, b;
    // cin >> a >> b;
    // cout << a << " " << b << endl;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // cout << a << " " << b << endl;

    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    if (reverse_sorted(v, n)) {
        sort(v.begin(), v.end());
    }
    else {
        next_permutation(v.begin(), v.end());
    }

    for (int i = 0; i < n ; i++) {
        cout << v[i] << " ";
    }



    return 0;
}