#include <stdio.h>
int main() {
    int i, userInput;
    scanf("%d", &userInput);
    for(i=0; i<11; i++)
    {
        printf("%dx%d = %d\n", i, userInput, i*userInput);
    }
    return 0;
}
