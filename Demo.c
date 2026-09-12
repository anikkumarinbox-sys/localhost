#include <stdio.h>
int main() {

    int marks;

    printf("Enter value of marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {

        case 10:
            printf("O grade!");
            break;

        case 9:
            printf("O grade!");
            break;

        case 8:
            printf("A Grade");
            break;

        case 7:
            printf("B Grade");
            break;

        case 6:
            printf("C Grade");
            break;

        case 5:
            printf("D Grade!!");
            break;

        default:
            printf("Fail");
    }

    return 0;
}
