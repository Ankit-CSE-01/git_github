#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    char name[50];
    int age;
    float gpa;
};

// Union definition
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Structure example
    struct Student student1;
    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.8;
    
    printf("Student Info:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    
    // Union example
    union Data data;
    data.i = 10;
    printf("\ndata.i: %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data.str: %s\n", data.str);
    
    // The union can only hold one value at a time
    printf("\nMemory size occupied by data: %lu\n", sizeof(data));
    
    return 0;
}