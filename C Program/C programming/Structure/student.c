#include<stdio.h>
#include<string.h>
//user defined
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll = 522;
    s1.cgpa = 8.2;
    strcpy(s1.name, "Mani");
    printf("Student name = %s\n",s1.name);
    printf("Roll = %d\n",s1.roll);
    printf("CGPA = %.2f\n",s1.cgpa);
    printf("\n");

    struct student s2;
    s2.roll = 500;
    s2.cgpa = 8.7;
    strcpy(s2.name, "Raj");
    printf("Student name = %s\n",s2.name);
    printf("Roll = %d\n",s2.roll);
    printf("CGPA = %.2f\n",s2.cgpa);
    printf("\n");


    struct student s3;
    s3.roll = 502;
    s3.cgpa = 7.6;
    strcpy(s3.name, "Yadav");
    printf("Student name = %s\n",s3.name);
    printf("Roll = %d\n",s3.roll);
    printf("CGPA = %.2f\n",s3.cgpa);
    return 0;
}