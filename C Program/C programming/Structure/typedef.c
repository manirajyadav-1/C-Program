#include<stdio.h>

typedef struct student{
    char name[100];
    int roll;
    float cgpa;
}std;

int main(){
    std s1;
    s1.roll=522;
    printf("%d",s1.roll);
}