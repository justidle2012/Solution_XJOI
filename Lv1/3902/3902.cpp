//分数求和
//http://dev.xjoi.net/problem/3902
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    double ans = 0;
    int i;
    for (i=1; i<=n; i++) {
        ans += 1.0/(i*(i+1));
    }

    printf("%.2lf\n", ans);

    return 0;
}