//WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc)of an educational institute using structure and display all the data.
#include<stdio.h>
int main(){
    struct stdinfo
    {
        int rollno;
        char name[1000];
        char gender;
        int marks;
    }student;
    printf("Enter the students data\n");
    printf("Roll Number: ");
    scanf("%d",&student.rollno);
    printf("Name: ");
    scanf(" %[^\n]s", student.name);
    printf("Gender: ");
    scanf(" %c",&student.gender);
    printf("Marks: ");
    scanf("%d",&student.marks);
    printf("\nThe students detail are :\n");
    printf("Roll Number: %d\n",student.rollno);
    printf("Name: %s\n",student.name);
    printf("Gender: %c\n",student.gender);
    printf("Marks: %d\n",student.marks);
    return 0;
}