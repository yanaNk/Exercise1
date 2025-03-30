#include <stdio.h>

int count_zero_bits(unsigned int value);

int main() {
    unsigned int input_number;
    printf("Please enter a number in decimal base: ");
    scanf("%u", &input_number);
    int zeroes = count_zero_bits(input_number);
    printf("The number that was entered is %u\n", input_number);
    printf("%d contains %d zeroes", input_number, zeroes);
}

int count_zero_bits(unsigned int value) {
    int num_zeroes = 0;
    for(int i = 0; i < value * sizeof value; i++)
    {
        if ((value & (1 << i)) == 0)
            num_zeroes++;
    }
    return num_zeroes;
}