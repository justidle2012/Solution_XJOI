//曼哈顿距离
//http://dev.xjoi.net/problem/8359
#include <cstdio>

int main() {
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    unsigned long long ans;
    if (d>b) {
        ans = d-b;
    } else {
        ans = b-d;
    }
    if (a>c) {
        ans += (a-c);
    } else {
        ans += (c-a);
    }
    printf("%llu\n", ans);

    return 0;
}