#include <stdio.h>

int main(void) {
    int a, b;              /* 当天两节课的时间 */
    int bestday = 0;       /* 最不高兴的那一天（1~7），0 表示不会不高兴 */
    int besttime = 8;      /* 只有超过 8 小时才会不高兴，所以从 8 开始比 */
    int i;

    for (i = 1; i <= 7; i++) {
        scanf("%d %d", &a, &b);
        if (a + b > besttime) {      /* 严格大于：时间相同时保留更早的那天 */
            besttime = a + b;
            bestday = i;
        }
    }

    printf("%d\n", bestday);
    return 0;
}
