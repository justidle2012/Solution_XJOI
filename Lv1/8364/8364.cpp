//平方和
//http://dev.xjoi.net/problem/8364
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long ans = 0;
    for (int i=1; i<=n; i++) {
        ans += i*i;
    }

    printf("%llu\n", ans);

    return 0;
}