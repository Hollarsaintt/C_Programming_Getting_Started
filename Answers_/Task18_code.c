#include <stdio.h>

int main(void)
{
    // Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0

    double celsiusTemp;
    scanf("%lf", &celsiusTemp);

    printf("%.1lf",  celsiusTemp * 9.0/5.0 + 32.0);

    return 0;
}
