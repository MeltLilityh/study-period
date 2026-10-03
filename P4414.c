#include <stdio.h>

int main(void){
    int a[3];
    for(int i=0; i<3; i++){
        scanf("%d",&a[i]);
    }


    char s[4];
    scanf("%s", s);

    int t;
    if (a[0] > a[1]) { t = a[0]; a[0] = a[1]; a[1] = t; }
    if (a[0] > a[2]) { t = a[0]; a[0] = a[2]; a[2] = t; }
    if (a[1] > a[2]) { t = a[1]; a[1] = a[2]; a[2] = t; }

    for (int i = 0; i < 3; i++) {
        if (s[i] == 'A')      printf("%d", a[0]);
        else if (s[i] == 'B') printf("%d", a[1]);
        else                  printf("%d", a[2]);

        if (i < 2) printf(" ");
    }
    printf("\n");

    return 0;
}