#include<bits/stdc++.h>
using namespace std;

class Stack {
    vector<int>v;
public:
    void push(int x) {
        v.push_back(x);
    }

    int pop() {
        int x = v.back();
        v.pop_back();
        return x;
    }

    int top() {
        int x = v.back();
        return x;
    }

    int size() {
        return v.size();
    }

    bool isEmpty() {
        return v.size() == 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Stack s;

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;

}
// bool isValid(string s) {
//     stack<char>st;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
//             st.push(s[i]);
//         }
//         else {
//             if (s[i] == ')') {
//                 if (!st.empty() and st.top() == '(' ) {
//                     st.pop();
//                 }
//                 else {
//                     st.push(s[i]);
//                 }
//             }
//             else if (s[i] == ']') {
//                 if (!st.empty() and st.top() == '[' ) {
//                     st.pop();
//                 }
//                 else {
//                     st.push(s[i]);
//                 }
//             }
//             else if (s[i] == '}') {
//                 if (!st.empty() and st.top() == '{' ) {
//                     st.pop();
//                 }
//                 else {
//                     st.push(s[i]);
//                 }
//             }

//         }

//     }


//     return st.empty();



// }


