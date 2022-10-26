#include<stdio.h>
#include<string.h>
struct stu 
{
    int id;
    char name[20];
    float height;
};
int main()
{
    struct stu s;
    s.id=19;
    strcpy(s.name,"BISWAJEET");
    s.height=5.7;
    printf(" student ID is : %d\n", s.id);
    printf(" student name is : %s\n", s.name);
    printf(" student ID is : %.2f", s.height);
    return 0;
}