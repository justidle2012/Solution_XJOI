//食物
//http://dev.xjoi.net/problem/8370
#include <cstdio>
#include <cmath>

bool judge(int n) {
    double x = sqrt(n);
    if (floor(x)==x) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int i;
    int ans = 0;
    for (i=1; i<=n; i++) {
        if (false == judge(i)) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}