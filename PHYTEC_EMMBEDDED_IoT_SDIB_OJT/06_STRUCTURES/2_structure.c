#include<stdio.h>
#include<string.h>
struct stud
{
    int id;
    char name[30];
}std;
struct marks
{
    int maths;
    int phy;
    int chem;
    float avg;
    int total;
}m;
int main()
{
    struct stud std;
    strcpy(std.name,"biswajeet");
    std.id=19;
    std.m.maths=90;
    std.m.phy=70;
    std.m.chem=45;
    std.m.avg=(std.m.maths+std.m.phy+std.m.chem)/3;
    std.m.total=(std.m.maths+std.m.phy+std.m.chem);
     printf("student name  is : %s", std.name);
     printf("student id  is : %d", std.id);
    printf("score in maths is : %d", std.m.maths);
    printf("score in phy is : %d", std.m.phy);
    printf("score in chem is : %d", std.m.chem);
    printf("average  is : %.2f", std.m.avg);
    printf("total score is : %d", std.m.total);
    return 0;
}