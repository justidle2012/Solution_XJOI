//跳几跳
//http://dev.xjoi.net/problem/8357
#include <cstdio>
#include <cmath>
int main() {
    int n;
    scanf("%d", &n);

    int ans = ceil(1.0*n/5);
    printf("%d\n", ans);
    return 0;
}