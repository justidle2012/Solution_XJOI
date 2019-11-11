//切比雪夫距离
//http://dev.xjoi.net/problem/8360
#include <cstdio>
#include <cmath>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int x, y;
    if (a>c) {
        x = a-c;
    } else {
        x = c-a;
    }
    if (b>d) {
        y = b-d;
    } else {
        y = d-b;
    }

    printf("%d\n", x>y?x:y);

    return 0;
}