#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    string line;
    int n, a = 0, b = 1;
    if (!getline(cin, line))
        return 0;
    n = stoi(line);
    if (!getline(cin, line))
        return 0;
    stringstream ss(line); 
    for (int i = 0; i < n; i++) {
        int x, y, d;
        ss >> x;
        ss.ignore(1, '/'); 
        ss >> y;
        d = gcd(abs(x), abs(y));
        x /= d;
        y /= d;
        b = b * y / gcd(b, y);
        a = a * (b / y) + x * (b / y);
    }
    int d = gcd(a, b);
    a /= d;
    b /= d;
    if (b == 1)
        cout << a << endl;
    else
        cout << a << '/' << b << endl;
    return 0;
}
