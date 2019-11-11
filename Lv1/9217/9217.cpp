//吃鸡腿
//http://dev.xjoi.net/problem/9217
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //有几个3*a的倍数
    int c = b/(3*a);
    long long ans = c*4+(b-3*a*c)/a;
    printf("%d\n", ans);

    return 0;
}