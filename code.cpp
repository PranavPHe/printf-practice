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

    cout << "Enter your name: " << endl;
    scanf("%s", &name);

    cout << "Enter your age: " << endl;
    scanf("%d", &age);

    cout << "Enter your last initial: " << endl;
    scanf(" %c", &initial);

    cout << "Enter your grade average: " << endl;
    scanf("%f", &gradeAvg);

    cout << "What grade are you in?: " << endl;
    scanf("%d", &gradeLvl);

    printf("Your name is %s.%c. You are %d years old, and you have a grade average of %.2f. You are in grade %d. Nice to meet you! 😎", name, initial, age, gradeAvg, gradeLvl);

    return 0;
}
