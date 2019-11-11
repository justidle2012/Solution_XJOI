//奇偶判断
//http://dev.xjoi.net/problem/8354
#include <cstdio>
#include <cmath>
int main() {
    int n;
    scanf("%d", &n);

    if (0==n%2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}