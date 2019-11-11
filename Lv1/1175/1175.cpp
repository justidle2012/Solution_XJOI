//分西瓜
//http://dev.xjoi.net/problem/1175
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    if (0==n%2){
        if (2==n) {
            printf("NO, you can't divide the watermelon into two even parts.\n");
        } else {
            printf("YES, you can divide the watermelon into two even parts.\n");
        }
    } else {
        printf("NO, you can't divide the watermelon into two even parts.\n");
    }

    return 0;
}