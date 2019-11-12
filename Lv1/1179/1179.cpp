//约会
//http://dev.xjoi.net/problem/1179
#include <cstdio>
#include <cmath>

int main() {
    int a, b, step;
    scanf("%d %d %d", &a, &b, &step);

    if (a<0) {
        a = 0-a;
    }
    if (b<0) {
        b = 0-b;
    }
    int c = a+b;
    if (c>step) {
        printf("No\n");
    } else if (c==step) {
        printf("Yes\n");
    } else {
        if (0==(step-c)%2) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}