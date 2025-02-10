#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);

    int k = rnd.next(1, 1000000);
    cout << k << endl;
    for (int i = 0; i < k; ++i) {
        long long ai = rnd.next(0LL, 1000000000000000000LL);
        cout << ai << endl;
    }

    return 0;
}
