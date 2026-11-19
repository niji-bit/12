#include <string.h>
#include <stdio.h>

struct student {
    int id;
    char name[20];
    double grade;
};

int main(void) {
    struct student s1 = {100, "Juyeop", 4.3};

    s1.id = 101;
    strcpy(s1.name, "Juyeop2");
    s1.grade = 2.2;

    printf("ID: %d\n", s1.id);
    printf("name: %s\n", s1.name);
    printf("grade: %.1f\n", s1.grade);

    return 0;
}
