//三数中最大和最小
//http://dev.xjoi.net/problem/1111
#include <cstdio>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);

    int max = a;
    if (max<b) {
        max=b;
    }
    if (max<c) {
        max=c;
    }
    printf("The maximum number is : %d\n", max);

    int min = a;
    if (min>b) {
        min=b;
    }
    if (min>c) {
        min=c;
    }
    printf("The minimum number is : %d\n", min);

    return 0;
}