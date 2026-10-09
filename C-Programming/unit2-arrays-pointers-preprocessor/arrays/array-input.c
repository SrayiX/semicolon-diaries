#include<stdio.h>
#include<conio.h>

int main()
{
    int marks[5];
    int i;

    for(i=0;i<5;i++){
        printf("enter marks of student %d: ",i+1);
        scanf("%d", &marks[i]);
    }

  return 0;
}    