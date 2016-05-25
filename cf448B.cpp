#include <iostream>
#include <vector>
using namespace std;

vector<int> countChar(string s) {
    vector<int> res (256);
    for (int i = 0; i < (int) s.size(); ++i)
        ++res[(int) s[i]];
    return res;
}

bool isSubsequence(string p, string t) {
    for (int i = 0, j = 0; i < (int) p.size(); ++i) {
        while (j < (int) t.size() && p[i] != t[j])
            ++j;
        if (j == (int) t.size())
            return false;
        ++j;
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    vector<int> cs = countChar(s);
    vector<int> ct = countChar(t);
    if (isSubsequence(t, s)) {
        cout << "automaton";
    } else if (cs == ct) {
        cout << "array";
    } else {
        bool both = true;
        for (int i = 0; i < (int) cs.size(); ++i)
            both &= cs[i] >= ct[i];
        cout << (both ? "both" : "need tree");
    }
    return 0;
}
