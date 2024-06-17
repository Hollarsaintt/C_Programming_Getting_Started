#include <stdio.h>
int main(void) {

    /*
    Input:
4
10
8
16
9
Output:
10.75
*/

    int i, numberOfGrades, grade, totalGrades = 0;
    scanf("%d", &numberOfGrades);
    for(i=0; i < numberOfGrades; i++)
    {
        scanf("%d", &grade);
        totalGrades = totalGrades + grade;
    }

    printf("%.2lf", (double) totalGrades / numberOfGrades);

    return 0;
}
