#include <stdio.h>

int main() {
    // Basic data types
    int age = 25;
    float salary = 55000.50;
    double pi = 3.141592653589793;
    char grade = 'A';
    const float PI = 3.149343

    // Derived data types
    int numbers[5] = {1, 2, 3, 4, 5};
    char name[10] = "John Doe";
    int *p = &age;

    // Structure
    struct Student {
        int id;
        char name[50];
        float marks;
    };
    struct Student s1 = {1, "John", 92.5};

    // Union
    union Data {
        int i;
        float f;
        char str[20];
    };
    union Data data;
    data.i = 10;

    // Enumerated type
    enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum Weekday today = Wednesday;

    // Output the values
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Pi: %.15f\n", pi);
    printf("Grade: %c\n", grade);
    printf("First number: %d\n", numbers[0]);
    printf("Name: %s\n", name);
    printf("Pointer to age: %p\n", p);
    printf("Student ID: %d, Name: %s, Marks: %.2f\n", s1.id, s1.name, s1.marks);
    printf("Union Data int: %d\n", data.i);
    printf("Today is: %d\n", today);

    return 0;
}
