// Pranav Pramod
// 10/15/2024
// Printf Practice
// Extra: Greating message using emojis. Also added a new input

#include<iostream>
using namespace std;

int main()
{
    char name[100];
    int age;
    char initial;
    float gradeAvg;
    int gradeLvl;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your last initial: ");
    scanf(" %c", &initial);

    printf("Enter your grade average: ");
    scanf("%f", &gradeAvg);

    printf("What grade are you in?: ");
    scanf("%d", &gradeLvl);

    printf("Your name is %s.%c. You are %d years old, and you have a grade average of %.2f. You are in grade %d. Nice to meet you! 😎", name, initial, age, gradeAvg, gradeLvl);

    return 0;
}
