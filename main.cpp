#include<iostream>
#include<string>

using namespace std;

int main() {
    string  s;
    cin >> s;

    int idx = 0;
    char c;
    while(idx < s.length()) {
        c = s[idx++];
        if (c == '.') {
            cout << '0';
        } else if (c == '-') {
            c = s[idx++];
            if (c == '.') {
                cout << '1';
            } else if (c == '-') {
                cout << '2';
            }
        }
    }
    return 0;
}