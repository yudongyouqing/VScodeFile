#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);

    long long testcount = inf.readInt(1, 1000000, "testcount"); // 测试用例个数
    inf.readEoln();

    long long sum = 0; // 存放所有测试用例的和
    for (int i = 0; i < testcount; i++) {
        long long n = inf.readLong(0LL, 1000000000000000000LL, "n"); 
        inf.readEoln();
        //sum += n;
    }
   // ensuref(sum <= 1000000000, "sum is too large"); // 总和不能超过1000000000
    inf.readEof();
    return 0;
}