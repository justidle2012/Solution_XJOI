//排序2
//http://dev.xjoi.net/problem/9165
#include <cstdio>
#include <algorithm>

struct SCORE {
    int chin;//语文成绩
    int math;//数学成绩
    int tot;//总分
};

const int MAXN = 1000;
SCORE arr[MAXN];

bool mycmp(const SCORE &x, const SCORE &y) {
    if (x.tot==y.tot) {
        return x.chin>=y.chin;
    } else {
        return x.tot>y.tot;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int i;
    for (i=0; i<n; i++) {
        scanf("%d %d", &arr[i].chin, &arr[i].math);
        arr[i].tot = arr[i].chin + arr[i].math;
    }

    std::sort(arr, arr+n, mycmp);

    for (i=0; i<n; i++) {
        printf("%d %d\n", arr[i].chin, arr[i].math);
    }

    return 0;
}