#include <stdio.h>
int main(void) {
    /*
    Input:
stickNumbers: 666
boxSize: 13
Output:
boxNumbers: 51
leftOver: 3
    */

    int stickNumbers, boxSize;
    scanf("%d%d", &stickNumbers, &boxSize);

    printf("%d\n%d", stickNumbers/boxSize, stickNumbers%boxSize);


    return 0;
}
