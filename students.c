#include<stdio.h>
struct student
{
char name[20];
int rollno;
float mark;
};
void main()
{
 struct student S[10];
 int n,i;
 printf("enter the size");
 scanf("%d",&n);
 printf("enter the details- name ,roll number  and mark\n");
for(i=0;i<n;i++)
{
 scanf("%s",S[i].name);
 scanf("%d",&S[i].rollno);
 scanf("%f",&S[i].mark);
}
printf("Students List");
printf("\nName\tRoll no\tMark\n");
for(i=0;i<n;i++)
{
 printf("%s",S[i].name);
 printf("\t%d",S[i].rollno);
 printf("\t%f\n",S[i].mark);
 }
 }
  
 
