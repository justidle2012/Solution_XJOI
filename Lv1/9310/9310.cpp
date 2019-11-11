//检查是否偶数
//http://dev.xjoi.net/problem/9310
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    printf("This is an integer.");
    if (0==n%2) {
        printf(" It's even.");
    }
    printf("\n");

    return 0;
}