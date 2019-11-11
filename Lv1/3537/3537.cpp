//判断闰年
//http://dev.xjoi.net/problem/3537
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    if ((0==n%4 && 0!=n%100) || (0==n%400)){
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}