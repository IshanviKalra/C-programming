#include <stdio.h>
int main(){
    int age;
    float gpa;
    char grade;
    char name[30];
    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Enter Your GPA: ");
    scanf("%f", &gpa);

    printf("Enter Your Grade: ");
    scanf(" %c", &grade);

    printf("Enter Your Name: ");
    scanf("%s", &name); //we can use a differnt way as well which is in new copy
    
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s", name);
    return 0;
}