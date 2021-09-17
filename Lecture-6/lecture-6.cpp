#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool checkForAnagram(string s1, string s2) {
    // int freq[256] = {0};
    vector<int>freq(256, 0);

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++) {
        freq[s2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0) {
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

    // char arr[6] = "Hello";
    // int n = strlen(arr);
    // cout << n << endl;
    // for (int i = 0; arr[i] != '\0' ; i++) {
    //     cout << arr[i] << " ";
    // }

    // string s;
    // cin >> s;
    // cout << s << endl;
    // cout << s.length() << endl;
    // cout << s.size() << endl;

    // for (int i = 0; i < s.length(); i++) {
    //     cout << s[i] << " ";
    // }

    //palindrome

    // string temp = s;
    // //reverse
    // reverse(s.begin(), s.end());

    // if (temp == s) {
    //     cout << "Palindrome\n";
    // }
    // else {
    //     cout << "Not palindrome\n";
    // }
    // bool flag = true;
    // int i = 0, j = s.length() - 1;
    // while (i < j) {
    //     if (s[i] != s[j]) {
    //         flag = false;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }
    // if (flag) {
    //     cout << "Palindrome\n";
    // }
    // else {
    //     cout << "Not palindrome\n";
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         for (int k = i; k <= j; k++) {
    //             cout << s[k];
    //         }
    //         cout << endl;
    //     }
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         string substring = s.substr(i, j - i + 1);
    //         cout << substring << endl;
    //     }
    // }
    // string s;
    // cin >> s;
    // string stringToFind;
    // cin >> stringToFind;
    // int m = stringToFind.length();
    // int n = s.length();
    // bool flag = false;
    // for (int i = 0; i <= n - m; i++) {
    //     if (s.substr(i, m) == stringToFind) {
    //         cout << "Present\n";
    //         flag = true;
    //         break;
    //     }
    // }

    // if (!flag) {
    //     cout << "Absent\n";
    // }
    // string s1, s2;
    // cin >> s1 >> s2;
    // if (checkForAnagram(s1, s2)) {
    //     cout << "Anagrams";
    // }
    // else {
    //     cout << "Not Anagrams";
    // }

    int n;
    cin >> n;
    vector<string>v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    map<string, vector<string>>mp;
    for (int i = 0; i < n; i++) {
        string temp = v[i];
        sort(temp.begin(), temp.end());
        mp[temp].push_back(v[i]);
    }

    for (auto p : mp) {
        for (auto str : p.second) {
            cout << str << ",";
        }
        cout << endl;
    }

    return 0;
}