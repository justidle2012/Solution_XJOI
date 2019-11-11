//学生分组
//http://dev.xjoi.net/problem/8106
//由于本题的数据量小，n≤50，直接模拟就可以
#include <cstdio>
#include <algorithm>

const int MAXN = 50;
int arr[MAXN];

int main() {
    //读入n
    int n;
    scanf("%d", &n);

    //读入当前区间
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    //读入左和右
    int left, right;
    scanf("%d %d", &left, &right);

    /*数据处理*/
    int over_right = 0;//超出上限
    int over_left = 0;//低于下限
    int total = 0;//总人数
    for (i=0; i<n; i++) {
        if (arr[i]>right) {
            //记录多出上限
            over_right += (arr[i]-right);
        } else if (arr[i]<left) {
            //记录低于下限
            over_left += (left-arr[i]);
        }
        total += arr[i];
    }

    /*输出*/
    if (total<n*left || total>n*right) {
        printf("-1\n");
    } else if (over_right>over_left) {
        printf("%d\n", over_right);
    } else {
        printf("%d\n", over_left);
    }

    return 0;
}