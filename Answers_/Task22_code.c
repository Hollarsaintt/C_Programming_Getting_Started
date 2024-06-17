#include <stdio.h>
int main(void) {
    /*
    Input
48.0
3.50
Output
13
*/

    double amount, unitPrice;
    scanf("%lf%lf", &amount, &unitPrice);

    printf("%d", (int) (amount/unitPrice));
    return 0;
}
