//9. WAP to show difference between Structure and Union.

#include <stdio.h>
#include <string.h>

int main(){

struct Student {
    char name[50];
    int roll_number;
    float marks;
};


union student {
    int r_n;
    float mark;
};


    struct Student s1;
    strcpy(s1.name, "John Doe");
    s1.roll_number = 101;
    s1.marks = 85.5;

    printf("\n Structure Example:");
    printf("\n Name: %s", s1.name);
    printf("\n Roll Number: %d", s1.roll_number);
    printf("\n Marks: %f", s1.marks);

    
    union student S1;
    S1.r_n=42;
	S1.mark=39.59;
    printf("\n Union Example:");
    printf("\n Student roll no : %d",S1.r_n);
    printf("\n Student mark %f",S1.mark);

    return 0;
}
