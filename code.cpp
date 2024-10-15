#include<iostream>
using namespace std;

int main()
{
    char name[100];
    int age;
    char initial;
    float gradeAvg;

    cout << "Enter your name: " << endl;
    scanf("%s", &name);

    cout << "Enter your age: " << endl;
    scanf("%d", &age);

    cout << "Enter your last initial: " << endl;
    scanf(" %c", &initial);

    cout << "Enter your grade average: " << endl;
    scanf("%f", &gradeAvg);

    printf("Your name is %s.%c. You are %d years old, and you have a grade average of %.2f. Nice to meet you!", name, initial, age, gradeAvg);

    return 0;
}