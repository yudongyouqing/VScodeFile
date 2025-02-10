#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    long long k = rnd.next(1LL, 100LL);
    cout << k << '\n';
    
    for (int i = 0; i < k; ++i) {
        long long t = rnd.next(2LL, 500LL);
        cout << t << '\n';
        for (int j = 0; j < t - 1; j++) {
            long long ai = rnd.next(1LL, 1000000000LL);
            cout << ai << ' ';
        }
        long long bi = rnd.next(1LL, 1000000000LL);
        cout << bi << '\n'; // 确保最后一个数后换行
    }
    return 0;
}
