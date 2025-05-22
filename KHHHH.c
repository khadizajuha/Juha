#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int score = 0;

void askQuestion(const char *question, const char *options[], int correctOption) {
    int answer;
    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, options[i]);
    }
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == correctOption) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
}

void level1() {
    printf("\n--- Level 1: Variables & Data Types ---\n");
    const char *q1[] = {"2 bytes", "4 bytes", "8 bytes", "Depends on system"};
    askQuestion("What is the size of int in C (typical system)?", q1, 2);
    const char *q2[] = {"double", "char", "float", "int"};
    askQuestion("Which data type is used for decimal numbers with more precision?", q2, 1);
}

void level2() {
    printf("\n--- Level 2: if-else ---\n");
    const char *q1[] = {"=", "==", "!=", ">="};
    askQuestion("Which operator checks equality in C?", q1, 2);
    const char *q2[] = {"if (a = b)", "if a == b", "if (a == b)", "if (a := b)"};
    askQuestion("Correct syntax for if condition?", q2, 3);
}

void level3() {
    printf("\n--- Level 3: Loops & Switch ---\n");
    const char *q1[] = {"for", "switch", "goto", "break"};
    askQuestion("Which is a looping statement in C?", q1, 1);
    const char *q2[] = {"if", "case", "select", "repeat"};
    askQuestion("Which keyword is used in switch case?", q2, 2);
}

void level4() {
    printf("\n--- Level 4: Arrays & Strings ---\n");
    const char *q1[] = {"int a[5];", "int a(5);", "array a[5];", "int a = 5[];"};
    askQuestion("Correct way to declare an integer array of 5 elements?", q1, 1);
    const char *q2[] = {"%s", "%d", "%c", "%f"};
    askQuestion("Which format specifier is used to print a string?", q2, 1);
}

void level5() {
    printf("\n--- Level 5: Functions & Pointers ---\n");
    const char *q1[] = {"void", "main", "int", "return"};
    askQuestion("Which keyword is used to define a function that returns nothing?", q1, 1);
    const char q2[] = {"&", "", "%", "#"};
    askQuestion("Which symbol is used to declare a pointer?", q2, 2);
}

void level6() {
    printf("\n--- Level 6: Structures & Files ---\n");
    const char *q1[] = {"struct", "array", "object", "package"};
    askQuestion("Which keyword defines a structure in C?", q1, 1);
    const char *q2[] = {"fopen()", "openfile()", "start()", "createfile()"};
    askQuestion("Which function is used to open a file in C?", q2, 1);
}

int main() {
    printf("\n==== Welcome to the C Programming Quiz Game! ====");

    level1();
    level2();
    level3();
    level4();
    level5();
    level6();

    printf("\n==== Quiz Finished! ====\n");
    printf("Your total score: %d out of 12\n", score);

    if (score >= 10) {
        printf("Excellent! You have a great command of C .\n");
    } else if (score >= 6) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("You need more practice. Try again!\n");
    }

    return 0;
}
