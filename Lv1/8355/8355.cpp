//欧几里德距离
//http://dev.xjoi.net/problem/8355
#include <cstdio>
#include <cmath>

int main() {
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%.2lf\n", sqrt((a-c)*(a-c)+(b-d)*(b-d)));

    return 0;
}