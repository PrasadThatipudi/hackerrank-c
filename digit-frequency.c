#include <stdio.h>

int* findDigitFrequency(char string[]) {
    static int digitFrequency[10] = {0,0,0,0,0,0,0,0,0,0};

    int counter = 0;

    while (string[counter] != '\0') {
        int currentDigit = string[counter] - 48;

        digitFrequency[currentDigit] += 1;
        counter = counter + 1;
    }

    return digitFrequency;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char string[1000];
    scanf("%s", string);

    int *digitFrequency = findDigitFrequency(string);

    for (int index = 0; index < 10; index++) {
        printf("%d ", digitFrequency[index]);
    }
    
    return 0;
}
