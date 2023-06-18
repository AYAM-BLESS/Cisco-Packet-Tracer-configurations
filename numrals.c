#include <stdio.h>

void print_roman_numerals(int num) {
    int decimal_value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* roman_numeral[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int i = 0;
    while (num > 0) {
        if (num >= decimal_value[i]) {
            printf("%s", roman_numeral[i]);
            num -= decimal_value[i];
        } else {
            i++;
        }
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Roman numeral: ");
    print_roman_numerals(num);
    printf("\n");

    return 0;
}