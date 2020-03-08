#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int INT_BIT_QUANTITY = 32;
const int UNDECIMAL_SYSTEM_BASE_VALUE = 11;

int main()
{
    char line[INT_BIT_QUANTITY];
    int decimal;

    printf("\nPodaj jedna liczbe dziesietna\n");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &decimal);

    printf("\nTwoja liczba w systemie 10-nym to: \n%d\n\n", decimal);

    int dividing_result = decimal;
    int rest;
    int index = 0;
    char result[INT_BIT_QUANTITY];

    for (int i = 0; i < sizeof(result); i++){
        result[i] = '0';
    }

    while(dividing_result != 0) {
        if ((rest = dividing_result % UNDECIMAL_SYSTEM_BASE_VALUE) > 9) {
            result[index] = 'A' + ((rest % 9)-1);
        } else {
            result[index] = '0' + rest;
        }
        dividing_result /= UNDECIMAL_SYSTEM_BASE_VALUE;
        index++;
    }

    printf("\nTwoja liczba w systemie %d to: \n", UNDECIMAL_SYSTEM_BASE_VALUE);

    bool has_number_started = false;

    for(int i = sizeof(result) - 1; i>=0; i--){
        if(!has_number_started)
            has_number_started = result[i] != '0';

        if(has_number_started)
            printf("%c", result[i]);
    }

    printf("\n\n");

    return 0;
}
