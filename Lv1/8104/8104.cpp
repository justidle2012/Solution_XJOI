//收购牛奶
//http://dev.xjoi.net/problem/8104
#include <cstdio>
#include <algorithm>

struct MILK {
    int pi;
    int ai;
};

const int MAXN = 2e6;
MILK arr[MAXN];

bool mycmp(const MILK &x, const MILK &y) {
    return x.pi<y.pi;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int i;
    for (i=0; i<m; i++) {
        scanf("%d %d", &arr[i].pi, &arr[i].ai);
    }

    std::sort(arr, arr+m, mycmp);

    unsigned long long ans = 0;
    for (i=0; i<m; i++) {
        if (n>=arr[i].ai) {
            ans += arr[i].ai * arr[i].pi;
            n -= arr[i].ai;
        } else if (n>0) {
            ans += arr[i].pi * n;
            break;
        } else {
            break;
        }
    }

    printf("%llu\n", ans);

    return 0;
}