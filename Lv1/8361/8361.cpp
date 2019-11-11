//早中晚饭
//http://dev.xjoi.net/problem/8361
#include <cstdio>
#include <cmath>

int min(int x, int y) {
    return x>y?y:x;
}

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", min(min(a+b, a+c), b+c));

    return 0;
}