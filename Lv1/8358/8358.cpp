//人民币
//http://dev.xjoi.net/problem/8358
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);

    //看能否用100组成
    const int money[] = {100, 50, 20, 10, 5, 1};
    int ans = 0;
    int t, i;
    for (int i=0; i<6 && n>0; i++) {
        t = n/money[i];
        ans += t;
        n -= t*money[i];
    }

    printf("%d\n", ans);

    return 0;
}