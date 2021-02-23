#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int max = 0, pos = 0, now = 0;
    s += ' ';
    int y = s.length();
    
    for (int i = 0; i < y; i++) {
        if (s[i] != ' ') {
            now++;
        }
        else {
            if (now > max) {
                max = now;
                pos = i - now;
            }
            now = 0;
        }
    }
    for (int i = pos; i <= pos + max; i++) {
        cout << s[i];
    }
    return 0;
}

