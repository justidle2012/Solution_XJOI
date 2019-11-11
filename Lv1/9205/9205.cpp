//长方体表面积与体积
//http://dev.xjoi.net/problem/9205
#include <cstdio>
#include <cmath>

int main() {
    int l,w,h;
    scanf("%d %d %d", &l, &w, &h);

    printf("%d %d\n", 2*(l*w+w*h+h*l), l*w*h);

    return 0;
}