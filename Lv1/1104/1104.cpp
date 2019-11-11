//横式竖式计算
//http://dev.xjoi.net/problem/1104
#include <cstdio>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d+%d=%d\n", x, y, x+y);
    printf("%7d\n", x);
    printf("+%6d\n", y);
    printf("-------\n");
    printf("%7d\n", x+y);

    return 0;
}