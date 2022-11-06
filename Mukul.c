#include<stdio.h>

void main(){

    char name[100],branch[100],subject[100],startingDate[100],collegeName[100];
    int semester,year,branchNo,collegeNo,examinationNo;
    char temp;
    
    printf("Enter your name :");
    gets(name);

    printf("Enter your branch name :");
    gets(branch);

    printf("Enter your semester :");
    scanf("%d",&semester);

    printf("Enter your year :");
    scanf("%d",&year);

    printf("Enter your branch number :");
    scanf("%d",&branchNo);

    printf("Enter your College Number :");
    scanf("%d",&collegeNo);

    printf("Enter your Examination Number :");
    scanf("%d",&examinationNo); 
    
    getchar();

    printf("Enter your Subject :");
    gets(subject);

    printf("Enter your Starting Date :");
    gets(startingDate);

    printf("Enter your College Name :");
    gets(collegeName);
    
    printf("********************DONE********************\n");

    printf("Name: %s\nBranch: %s\nSemester: %d\nYear: %d\n",name,branch,semester,year);
    printf("Branch Number: %d\nCollege Number: %d\nExamination Number: %d\n",branchNo,collegeNo,examinationNo);
    printf("Subject: %s\nStarting Date: %s\nCollegeName: %s",subject,startingDate,collegeName);


    



}