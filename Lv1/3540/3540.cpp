//优美数
//http://dev.xjoi.net/problem/3540
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    if (0==n%2 && n>=50) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}