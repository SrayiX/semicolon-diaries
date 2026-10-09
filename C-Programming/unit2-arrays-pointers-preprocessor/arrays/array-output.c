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

    for(i=0;i<5;i++){
        printf("marks of student %d: %d\n",i+1, marks[i]);
    }

  return 0;
}   