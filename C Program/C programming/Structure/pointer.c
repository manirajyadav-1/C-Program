//pointer of structure
#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Mani",522,8.2};
    struct student *ptr=&s1;
    printf("%s",(*ptr).name);


}
