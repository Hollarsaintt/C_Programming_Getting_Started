#include <stdio.h>
int main(void) {
    /*
    Input:
123
7.0
Output:
131
*/

    int currentPopulation; double percentageGrowth;
    scanf("%d %lf", &currentPopulation, &percentageGrowth);

    printf("%d", (int) (((100 + percentageGrowth) / 100) * currentPopulation));
    return 0;
}
