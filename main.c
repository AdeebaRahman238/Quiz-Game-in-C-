#include <stdio.h>

int main() {
    int i, totalScore = 0;
    int points[10] = {0}; // Array to store points for each question
    char answers[10];     // Array to store answers for each question

    printf("WELCOME TO THE QUIZ GAME (⁠｡⁠◕⁠‿⁠◕⁠｡)\n");
    printf("---------------------------------\n\n");

    printf("> Press 1 To Start The Game\n");
    printf("---------------------------\n");
    printf("> Press 0 To Quit The Game\n");
    printf("---------------------------\n");
    scanf("%d", &i);
    printf("\n");

    if (i == 1) {
        printf("The Game Has Started (⁠◠⁠‿⁠◕⁠)\n\n");
        printf("----------------------------\n\n");

        // Question 1
        printf("# Question 1:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n    int a = 5;\n    printf(\"%%d\\n\", a);\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 5\n");
        printf("(B) 0\n");
        printf("(C) Garbage value\n");
        printf("(D) Compiler error\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[0]);

        if (answers[0] == 'A' || answers[0] == 'a') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The code initializes an integer variable 'a' with the value 5 and prints it. Hence, the output is 5.\n\n");
            points[0] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (A)\n\n");
            printf("Explanation: The code initializes an integer variable 'a' with the value 5 and prints it. Hence, the output is 5.\n\n");
        }

        // Question 2
        printf("# Question 2:~ What does the following code print?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n     printf(\"Hello, World!\\n\");\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) Hello, World!\n");
        printf("(B) Hello, World! (without newline)\n");
        printf("(C) Compiler error\n");
        printf("(D) Segmentation fault\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[1]);

        if (answers[1] == 'A' || answers[1] == 'a') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The code prints the string 'Hello, World!' followed by a newline character. Hence, the output is 'Hello, World!'.\n\n");
            points[1] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (A)\n\n");
            printf("Explanation: The code prints the string 'Hello, World!' followed by a newline character. Hence, the output is 'Hello, World!'.\n\n");
        }

        // Question 3
        printf("# Question 3:~ What is the size of int in C on a 32-bit system?\n\n");
        printf("\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 2 bytes\n");
        printf("(B) 8 bytes\n");
        printf("(C) 1 byte\n");
        printf("(D) 4 bytes\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[2]);

        if (answers[2] == 'D' || answers[2] == 'd') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: On a 32-bit system, the size of an int is 4 bytes.\n\n");
            points[2] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (D)\n\n");
            printf("Explanation: On a 32-bit system, the size of an int is 4 bytes.\n\n");
        }

        // Question 4
        printf("# Question 4:~ What does the '&&' operator represent in C?\n\n");
        printf("\nOptions:~ \n");
        printf("--------\n");
        printf("(A) Bitwise AND\n");
        printf("(B) Logical AND\n");
        printf("(C) Logical OR\n");
        printf("(D) Bitwise OR\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[3]);

        if (answers[3] == 'B' || answers[3] == 'b') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The '&&' operator represents the logical AND operation in C.\n\n");
            points[3] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (B)\n\n");
            printf("Explanation: The '&&' operator represents the logical AND operation in C.\n\n");
        }

        // Question 5
        printf("# Question 5:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n    int a = 10, b = 20;\n    printf(\"%%d\\n\", a + b);\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 10\n");
        printf("(B) 20\n");
        printf("(C) 30\n");
        printf("(D) Compiler error\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[4]);

        if (answers[4] == 'C' || answers[4] == 'c') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The code prints the sum of 'a' and 'b', which is 10 + 20 = 30.\n\n");
            points[4] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (C)\n\n");
            printf("Explanation: The code prints the sum of 'a' and 'b', which is 10 + 20 = 30.\n\n");
        }

        // Question 6
        printf("# Question 6:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n    int arr[] = {1, 2, 3, 4, 5};\n    int *p = arr;\n    printf(\"%%d\\n\", *(p + 3));\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 4\n");
        printf("(B) 1\n");
        printf("(C) 3\n");
        printf("(D) 5\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[5]);

        if (answers[5] == 'A' || answers[5] == 'a') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The code accesses the 4th element of the array 'arr', which is 4 (indexing starts from 0).\n\n");
            points[5] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (A)\n\n");
            printf("Explanation: The code accesses the 4th element of the array 'arr', which is 4 (indexing starts from 0).\n\n");
        }

        // Question 7
        printf("# Question 7:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nvoid func(int *x) {\n    *x = 20;\n}\n\nint main() {\n    int a = 10;\n    func(&a);\n    printf(\"%%d\\n\", a);\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 10\n");
        printf("(B) 20\n");
        printf("(C) 0\n");
        printf("(D) Compiler error\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[6]);

        if (answers[6] == 'B' || answers[6] == 'b') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The function 'func' modifies the value of 'a' to 20 through the pointer 'x'.\n\n");
            points[6] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (B)\n\n");
            printf("Explanation: The function 'func' modifies the value of 'a' to 20 through the pointer 'x'.\n\n");
        }

        // Question 8
        printf("# Question 8:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n    int a = 5;\n    printf(\"%%d\\n\", a++);\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 6\n");
        printf("(B) 5\n");
        printf("(C) Compiler error\n");
        printf("(D) Undefined\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[7]);

        if (answers[7] == 'B' || answers[7] == 'b') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The post-increment operator 'a++' returns the value before incrementing, which is 5.\n\n");
            points[7] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (B)\n\n");
         printf("Explanation: The post-increment operator 'a++' returns the value before incrementing, which is 5.\n\n");
        }

        // Question 9
        printf("# Question 9:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n    int a = 5;\n    int b = 10;\n    printf(\"%%d\\n\", a > b ? a : b);\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 5\n");
        printf("(B) 10\n");
        printf("(C) Compiler error\n");
        printf("(D) 0\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[8]);

        if (answers[8] == 'B' || answers[8] == 'b') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The ternary operator evaluates 'a > b', which is false, so it returns 'b', which is 10.\n\n");
            points[8] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (B)\n\n");
            printf("Explanation: The ternary operator evaluates 'a > b', which is false, so it returns 'b', which is 10.\n\n");
        }

        // Question 10
        printf("# Question 10:~ What will be the output of the following code?\n\n");
        printf("#include <stdio.h>\n\nint main() {\n    int i;\n    for (i = 0; i < 5; i++) {\n        if (i == 3) {\n            continue;\n        }\n        printf(\"%%d\\n\", i);\n    }\n    return 0;\n}");
        printf("\n\nOptions:~ \n");
        printf("--------\n");
        printf("(A) 0 1 2 3 4\n");
        printf("(B) 0 1 2 4\n");
        printf("(C) 0 1 2 4 5\n");
        printf("(D) Compiler error\n\n");
        printf("Enter your answer:~ \n");
        scanf(" %c", &answers[9]);

        if (answers[9] == 'B' || answers[9] == 'b') {
            printf("Correct Answer (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)\n\n");
            printf("Explanation: The 'continue' statement skips the iteration when 'i' is 3, so 3 is not printed.\n\n");
            points[9] = 1;
        } else {
            printf("Wrong answer (⁠╥⁠﹏⁠╥⁠)\n\n");
            printf(" The correct answer is (B)\n\n");
            printf("Explanation: The 'continue' statement skips the iteration when 'i' is 3, so 3 is not printed.\n\n");
        }

        // Calculate total score
        for (i = 0; i < 10; i++) {
            totalScore += points[i];
        }

        // Display total score
        printf("\n\nGame Over! (⁠ ⁠╹⁠▽⁠╹⁠ ⁠)\n\n");
        printf("Your total score is: %d out of 10 (⁠｡⁠•̀⁠ᴗ⁠-⁠)⁠✧\n", totalScore);

    } else if (i == 0) {
        printf("Quit The Game ʕ⁠´⁠•⁠ᴥ⁠•⁠`⁠ʔ\n");
    } else {
        printf("Invalid Choice\n");
    }

    return 0;
}
