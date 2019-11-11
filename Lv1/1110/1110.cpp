//某年某月有几天
//http://dev.xjoi.net/problem/1110
#include <cstdio>
#include <cmath>

bool leapYear(int n) {
    if ((0==n%4 && 0!=n%100) || (0==n%400)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year, month;
    scanf("%d %d", &year, &month);

    const int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};//一年每月有几天
    int ans = days[month];
    if (2==month && true == leapYear(year)) {
        ans++;
    }

    printf("%d\n", ans);

    return 0;
}