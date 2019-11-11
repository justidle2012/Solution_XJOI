//时间差
//http://dev.xjoi.net/problem/9207
#include <cstdio>

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int ans = (c-a)*60+(d-b);
    printf("%d\n", ans);

    return 0;
}