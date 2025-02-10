#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);

    long long k = rnd.next(1, 10);
    cout << k << endl;
    for (int i = 0; i < k; ++i) {
        long long ai = rnd.next(1LL, 1000000000000LL);
        cout << ai << endl;
    }

    return 0;
}