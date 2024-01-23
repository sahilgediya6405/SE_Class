//10.WAP to perform Palindrome number using for loop and function

 #include <stdio.h>    

int Palindrome(int num);
int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (Palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}


int Palindrome(int a) {
    int i = a, revers_num = 0,digit;
    

    
    while (a > 0) {
    	digit = a % 10;
        revers_num = revers_num * 10 + digit;
        a /= 10;
    }

   
    if (revers_num == i) {
        return 1; 
    } else {
        return 0; 
    }
}

