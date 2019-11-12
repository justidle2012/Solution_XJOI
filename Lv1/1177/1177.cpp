//铺地砖
//http://dev.xjoi.net/problem/1117
#include <cstdio>
#include <cmath>

int main() {
    unsigned long long n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);

    printf("%llu\n", (unsigned long long)(ceil(1.0*n/a)*ceil(1.0*m/a)));

    return 0;
}