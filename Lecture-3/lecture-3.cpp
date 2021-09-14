#include<bits/stdc++.h>
using namespace std;

// class Student {
// public:
//     int rollNumber;
//     string name;
//     Student(int rollNo, string s) {
//         rollNumber = rollNo;
//         name = s;
//     }
// };

// class Car {
// public:
//     int price;
//     string name;
//     Car(int price, string name) {
//         if (price < 0) {
//             price = 1000;
//         }
//         this->price = price;
//         this->name = name;
//     }
// };

// int area(int radius) {
//     return 3.14 * radius * radius;
// }

// int area(int length, int breadth) {
//     return length * breadth;
// }

bool prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


string decimalToBinary_my(int n) {
    string ans = "";
    int count = 0;
    while (n > 0) {
        int lastDigit = (n % 2);
        if (lastDigit) {
            ans += "1";
        }
        else {
            ans += "0";
        }
        n /= 2;
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


    // Student s(10, "Aman");
    // cout << s.rollNumber << " " << s.name << endl;

    // string name;
    // cin >> name;
    // int rollNumber;
    // cin >> rollNumber;
    // Student s(rollNumber, name);
    // cout << s.rollNumber << " " << s.name << endl;

    // cin >> name;
    // cin >> rollNumber;
    // Student s1(rollNumber, name);
    // cout << s1.rollNumber << " " << s1.name << endl;

    // Car c(-1000, "Audi");
    // cout << c.name << " " << c.price << endl;

    //Function overloading
    // cout << "Area of circle " << area(7) << endl;
    // cout << "Area of rectangle " << area(3, 4) << endl;

    //operator overloading

    // int a = 5 + 6;
    // cout << a << endl;

    // string firstName = "Virat";
    // string lastName = "Kohli";
    // cout << firstName + lastName << endl;
    int n;
    cin >> n;

    int size = (n * (n + 1)) / 2;
    int arr[size];
    int k = 0;
    for (int i = 2;; i++) {
        if (k == size) {
            break;
        }
        if (prime(i)) {
            arr[k] = i;
            k++;
        }
    }

    k = 0;
    for (int i = 1; i <= n; i++) {
        int rowSize = i;
        while (rowSize--) {
            cout << arr[k] << " ";
            k++;
        }
        cout << endl;
    }



    cout << decimalToBinary_my(9) << endl;

    return 0;
}