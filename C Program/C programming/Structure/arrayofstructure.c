//Array of structure
#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"mani", 522, 8.2};
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%.1f",s1.cgpa);
    return 0;

}