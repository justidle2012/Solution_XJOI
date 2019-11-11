//倍数
//http://dev.xjoi.net/problem/9209
#include <cstdio>
#include <cmath>

int main() {
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);

    int i;
    int ans = 0;
    for (i=1; i<n; i++) {
        if (i%a==0) {
            ans++;
        }
        if (i%b==0) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}