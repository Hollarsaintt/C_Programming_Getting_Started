#include <stdio.h>
int main() {

    int i, numberOfRobots, height, weight, enginePower, resistance, totalPower = 0;
    scanf("%d", &numberOfRobots);

    for(i=0; i < numberOfRobots; i++)
    {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        totalPower = totalPower + ((enginePower + resistance) * (weight - height));
    }

    printf("%d", totalPower);
    return 0;
}
