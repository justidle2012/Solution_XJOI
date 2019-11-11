//鸡兔同笼
//http://dev.xjoi.net/problem/1129
#include <cstdio>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n%d\n", 2*x-y/2, y/2-x);

    return 0;
}