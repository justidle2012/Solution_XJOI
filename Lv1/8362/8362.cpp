//MUL
//http://dev.xjoi.net/problem/8362
#include <cstdio>
#include <cmath>

//一道奥数题
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int real = a*c - b*d;
    int image = a*d + b*c;
    printf("%d %d\n", real, image);

    return 0;
}