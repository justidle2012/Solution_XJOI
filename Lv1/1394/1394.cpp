//求逆序对
//http://dev.xjoi.net/problem/1394
#include <cstdio>
#include <algorithm>

const int MAXN = 100002;
int arr[MAXN];
int aux[MAXN];
unsigned long long ans = 0;

void merge_sort(int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = (left+right)/2;
    merge_sort(left, mid);
    merge_sort(mid+1, right);

    //归并
    int i = left;
    int j = mid+1;
    int t = left;
    while (i<=mid && j<=right) {
        if (arr[i]>arr[j]) {
            ans+= mid-i+1;
            aux[t++] = arr[j++];
        } else {
            aux[t++] = arr[i++];
        }
    }
    while (i<=mid) {
        aux[t++] = arr[i++];
    }
    while (j<=right) {
        aux[t++] = arr[j++];
    }

    for (i=left; i<=right; i++) {
        arr[i] = aux[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    //归并排序
    merge_sort(0, n-1);

    printf("%llu\n", ans);

    return 0;
}