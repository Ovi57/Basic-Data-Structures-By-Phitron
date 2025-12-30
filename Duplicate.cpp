
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    set<long long> seen;
    bool duplicate_found = false;

    for (int i = 0; i < N; i++) {
        if (seen.count(A[i])) {
            duplicate_found = true;
            break;
        }
        seen.insert(A[i]);
    }

    if (duplicate_found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
