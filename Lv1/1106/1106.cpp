//整数邻居
//http://dev.xjoi.net/problem/1106
#include <cstdio>
#include <cmath>

int main() {
    double a;
    scanf("%lf", &a);
    printf("%d %d\n", (int)floor(a), (int)ceil(a));

    return 0;
}