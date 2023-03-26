//salting of password

#include<stdio.h>
#include<string.h>

void salt(char password[]);

int main(){
char password[100];
printf("enter a password:");
scanf("%s",password);
salt(password);//calling function
}

void salt(char str[]){
char salt[]="123";
char newPassword[200];

strcpy(newPassword,str);
strcat(newPassword,salt);
puts(newPassword);
}