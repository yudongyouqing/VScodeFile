#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    for (int i = 1; i <= 3; ++i) {
        long long ai = rnd.next(-100000LL, 100000LL);
        cout << ai << endl;
    }

    return 0;
}