#include<stdio.h>
#include<string.h>

int main(){
  int i,j;
   char ch[10];
   printf("enter a string:");
   scanf("%s",ch);
  char temp;
  int n=strlen(ch);
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(ch[i]>ch[j]){
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
      }
    }
  }
  printf("sorted string:%s",ch);
  return 0;
}