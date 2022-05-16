#include <stdio.h>
#include <string.h>

int main() {
    int num_of_inputs;
    char num[123457];
    scanf("%d\n", &num_of_inputs);
    for (int input = 1; input <= num_of_inputs; input++) {
        scanf("%s\n", num);
        int digit_sum = 0, len = strlen(num);
        for (int index = 0; index < len; index++) {
            digit_sum += num[index] - '0';
        }
        digit_sum = 9 - (digit_sum % 9);
        if (digit_sum == 9) {
            printf("Case #%d: %s\n", input, num);
        }
        else {
            char digit_to_add = digit_sum + '0';
            int index = 0;
            printf("Case #%d: ", input);
            while (digit_to_add >= num[index]) {
                printf("%c", num[index]);
                index++;
            }
            printf("%c", digit_to_add);
            while (index < len) {
                printf("%c", num[index++]);
            }
            printf("\n");
        }
    }
    return 0;
}