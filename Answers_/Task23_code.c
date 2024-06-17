#include <stdio.h>

int main(void)
{

    /*
    Input:
295.8
Output:
135
*/
    double cementNeeded; int units;
    scanf("%lf", &cementNeeded);

    units = (cementNeeded / 120) + 1;

    printf("%d", units * 45);
    return 0;
}
