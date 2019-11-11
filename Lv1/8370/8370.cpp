//??
//http://dev.xjoi.net/problem/8370
#include <cstdio>
#include <cmath>

//??????????????
int main() {
    int n;
    scanf("%d", &n);

    int ans = 0;
    int a,b,c,d,e,f,g,h;
    for (a=0; a<=n; a+=2) {//????????
        for (b=0; b<=1; b++) {//???0??1?
            for (c=0; c<=2; c++) {//???0??1??2?
                for (d=1; d<=n; d+=2) {//???????
                    for (e=0; e<=n; e+=4) {//???4????
                        for (f=0; f<=3; f++) {//???0??1??2??3?
                            for (g=0; g<=1; g++) {//???????????
                                //??
                                h = n-a-b-c-d-e-f-g;
                                if (h>=0 && h%3==0) {
                                    ans++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}