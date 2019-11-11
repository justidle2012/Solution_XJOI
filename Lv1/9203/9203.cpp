//逆序输出
//http://dev.xjoi.net/problem/9203
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", n%10*100+n/10%10*10+n/100%10);

    return 0;
}