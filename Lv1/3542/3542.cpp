//摄氏温度转换
//http://dev.xjoi.net/problem/3542
#include <cstdio>
#include <cmath>

int main() {
    double f;
    scanf("%lf", &f);

    printf("%.3lf\n", 5.0/9*(f-32));

    return 0;
}