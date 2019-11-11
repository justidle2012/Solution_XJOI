//大小的序
//http://dev.xjoi.net/problem/1112
#include <cstdio>
#include <cmath>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    if (a>b) {
        printf("%d\n%d\n", a, b);
    } else {
        printf("%d\n%d\n", b, a);
    }

    return 0;
}