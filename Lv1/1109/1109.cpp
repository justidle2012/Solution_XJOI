//行李托运
//http://dev.xjoi.net/problem/1109
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    if (n>60) {
        printf("NO\n");
    } else if (n<=30) {
        printf("%.2lf\n", 0.2*n);
    } else {
        printf("%.2lf\n", 0.2*30+(n-30)*0.6);
    }

    return 0;
}