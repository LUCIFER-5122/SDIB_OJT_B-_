#include<stdio.h>
#include<string.h>
struct emp 
{
    int eid;
    char ename[20];
    char edesig[30];
    float esal;
};
int main()
{
    struct emp e;
    e.eid=5122;
    strcpy(e.ename, " BISWAJEET ");
    strcpy(e.edesig, " CEO ");
    e.esal=100000000;
    printf(" employee ID is : %d\n", e.eid);
    printf(" employee name is : %s\n", e.ename);
    printf(" employee designation is : %s\n", e.edesig);
    printf(" employee salary is : %.5f\n", e.esal);
    printf("size of e is :%d", sizeof(e));
    return 0;

}