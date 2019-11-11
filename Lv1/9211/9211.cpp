//直角三角形
//http://dev.xjoi.net/problem/9211
#include <cstdio>
#include <cmath>

int main() {
    long long a,b;
    scanf("%lld %lld", &a, &b);

    long long c = sqrt(a*a+b*b);
    printf("%lld\n", c);

    return 0;
}