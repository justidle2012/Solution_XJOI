//合并队列
//http://dev.xjoi.net/problem/1166
#include <cstdio>
#include <algorithm>

const int MAXN = 1000;
int arr_a[MAXN];
int arr_b[MAXN];
int ans[2*MAXN];

int main() {
    int n;
    scanf("%d", &n);

    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr_a[i]);
    }

    int m;
    scanf("%d", &m);

    for (i=0; i<m; i++) {
        scanf("%d", &arr_b[i]);
    }

    int idx_a = 0;//a数组索引
    int idx_b = 0;//b数组索引
    int idx_c = 0;//c数组索引
    while (idx_a<n && idx_b<m) {
        if (arr_a[idx_a]<arr_b[idx_b]) {
            ans[idx_c++] = arr_a[idx_a++];
        } else {
            ans[idx_c++] = arr_b[idx_b++];
        }
    }
    while (idx_a<n) {
        ans[idx_c++] = arr_a[idx_a++];
    }
    while (idx_b<m) {
        ans[idx_c++] = arr_b[idx_b++];
    }

    for (i=0; i<idx_c; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}