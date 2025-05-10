#include <stdio.h>
struct student{
    int id;
    char name[100];
};

void printStudentDetails(struct student *students){
    printf("\n%d The number of the student", students->id);
    printf("\n%s The Name of the student ", students->name);
}

int main() {
    struct student students;
    scanf("%d", &students.id);
    scanf(" %[^
]", students.name);
    printStudentDetails(&students);
    return 0;
}