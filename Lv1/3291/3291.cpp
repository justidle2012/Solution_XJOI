//四舍五入
//http://dev.xjoi.net/problem/3291
#include <cstdio>
#include <cmath>

int main() {
    long long n;
    scanf("%lld", &n);

    double x = round(1.0*n/10);
    n = x*10;
    printf("%lld\n", n);

    return 0;
}