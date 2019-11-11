//自然数之和
//http://dev.xjoi.net/problem/8353
#include <cstdio>

int main() {
    unsigned long long n;
    scanf("%llu", &n);

    unsigned long long ans = n*(n+1)/2;
    printf("%llu\n", ans);

    return 0;
}