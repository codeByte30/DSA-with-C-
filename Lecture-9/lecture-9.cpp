#include<bits/stdc++.h>
using namespace std;
template<typename T>
class QueueUsingStack {
public:
    stack<T>s1, s2;
    void push(T x) {
        s1.push(x);
    }

    T pop() {
        if (s1.size() == 0) {
            return -1;
        }
        while (s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        T x = s1.top();
        s1.pop();

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }

        return x;
    }

    T front() {
        if (s1.size() == 0) {
            return -1;
        }
        while (s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        T x = s1.top();
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }

        return x;
    }

    T size() {
        return s1.size();
    }

    bool empty() {
        return s1.size() == 0;
    }
};

void reverseFirstKElements(QueueUsingStack<int>&q, int k) {
    deque<int>Q;
    for (int i = 0; i < k; i++) {
        Q.push_back(q.front());
        q.pop();
    }
    while (!Q.empty()) {
        q.push(Q.back());
        Q.pop_back();
    }
    // while (!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;
    int left = (q.size() - k);
    while (left--) {
        q.push(q.front());
        q.pop();
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
string removeConsecutiveDuplicates(string s) {
    stack<char>st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty()) {
            st.push(s[i]);
        }
        else {
            //if current element matches with stack ka top
            if (s[i] == st.top()) {
                continue;
            }
            else {
                st.push(s[i]);
            }
        }
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
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
    // QueueUsingStack<int> q;
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     q.push(x);
    // }
    // reverseFirstKElements(q, 2);
    string s = "aabbbccddeee";
    cout << removeConsecutiveDuplicates(s) << endl;
    // while (!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // deque<int>Q;
    // Q.push_back(5);
    // Q.push_back(4);
    // Q.push_back(3);
    // Q.push_front(1);
    // while (!Q.empty()) {
    //     cout << Q.front() << " ";
    //     Q.pop_front();
    // }


    return 0;


}