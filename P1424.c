#include <stdio.h>

int main(void) {
    int x, n;
    scanf("%d %d", &x, &n);

    long long total = 0;          /* 累计里程 */
    int day = x;                  /* 当天是星期几 */

    for (int i = 0; i < n; i++) {
        int is_weekend = (day == 6 || day == 7);   /* 周末标志 */
        if (!is_weekend) {
            total += 250;
        }

        day++;                    /* 进入下一天 */
        if (day > 7) {
            day = 1;              /* 周日之后回到周一 */
        }
    }

    printf("%lld\n", total);
    return 0;
}