//判断直角三角形
//http://dev.xjoi.net/problem/3538
#include <cstdio>
#include <cmath>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);

    if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}