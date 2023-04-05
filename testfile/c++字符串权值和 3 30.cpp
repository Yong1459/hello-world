#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<int> count(26);
    for (char c : s) {
        count[c - 'a']++;
    }
    sort(count.rbegin(), count.rend());  
    int sum = 0;
    int weight = 26;
    for (int c : count) {
        if (c == 0) break; 
        sum += weight * c;
        weight--;
    }
    cout << sum << endl;
    return 0;
}

