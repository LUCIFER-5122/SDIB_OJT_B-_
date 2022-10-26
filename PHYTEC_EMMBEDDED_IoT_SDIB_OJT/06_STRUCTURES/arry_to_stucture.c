#include<stdio.h>
struct stud
{
    int roll;
    char *name;
}a[3];
void dis(struct stud a[]);
void main()
{
    a[0].roll=1;
    a[0].name="subham";
    a[1].roll=2;
    a[1].name="dibya";
    a[2].roll=3;
    a[2].name="sabya";
    dis(a);

}
void dis(struct stud a[])
{ int i;
    for(i=0;i<3;i++)
        printf(" roll is :%d\n name is: %s\n",a[i].roll,a[i].name);
}