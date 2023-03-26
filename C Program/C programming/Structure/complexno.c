#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex number1={2,3};
    struct complex *ptr=&number1;
    printf("real part:%d\n",ptr->real);
    printf("img part:%d",ptr->img);
}