#include <bits/stdc++.h>
using namespace std;

vector<int> tree;

int sum(int i) {
    int res = 0;
    while (i >= 1) {
        res += tree[i - 1];
        i -= (i & -i);
    }
    return res;
}

void update(int i, int val) {
    while (i <= tree.size()) {
        tree[i - 1] += val;
        i += (i & -i);
    }
}

int main() {
    cout << "This is fenwik tree";
    return 0;
}