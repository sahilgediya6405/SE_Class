// 32.. Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {
    
    int x, y, sum;


    printf("Enter the first number: ");
    scanf("%d", &x);
    
    printf("Enter the second number: ");
    scanf("%d", &y);

    sum = x + y;    
    printf("Sum: %d\n", sum);

    printf("Size of the sum: %d ", sizeof(sum));

    return 0;
}
