#include <stdio.h>
typedef struct {
    int roll_no;
    char name[50];
    char gender;
    int marks[3];
    int total;
} studentinfo;
int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    studentinfo students[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter the student %d data:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Gender: ");
        scanf(" %c", &students[i].gender);
        printf("Mark in subject 1: ");
        scanf("%d", &students[i].marks[0]);
        printf("Mark in subject 2: ");
        scanf("%d", &students[i].marks[1]);
        printf("Mark in subject 3: ");
        scanf("%d", &students[i].marks[2]);
        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        printf("\n");
    }
    printf("\nRoll Number Name Gender Sub 1 Sub 2 Sub 3 Total\n\n");
    for (i = 0; i < n; i++) 
        printf("%d %s %c %d %d %d %d\n\n", students[i].roll_no, students[i].name, students[i].gender, students[i].marks[0], students[i].marks[1], students[i].marks[2], students[i].total);
    printf("\n");
    return 0;
}