#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int id;
    char branch[20];
};
struct student s;
 

void main()
{
    FILE *ptr;
    student s;
    ptr = fopen("student_record.bin", "r");
    if (ptr == NULL)
    {
        printf("\n\tERROR 404...\n");
        return;
    }
    printf("\n\t---View Record---\n\n");
    while (fread(&s, sizeof(s), 1, ptr) == 1)
    {
        printf("Name    : %s\nId      : %d\nBranch  : %s\n-----------------------\n", s.name, s.id, s.branch);
        found = 1;
    }
    if (found == 0)
    {
        printf("no record found...");
    }
 
    fclose(ptr);
}


