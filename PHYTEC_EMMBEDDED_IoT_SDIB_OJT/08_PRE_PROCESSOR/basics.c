#include<stdio.h>
#define MAX 10
#define MIN 20
void main()
{
    #if MAX
        #if defined MIN
            #if (MAX>0 && MIN>0)
                printf("\nPOSITIVE NUMBER\n");
            #else
                printf("\nNEGETIVE NUMBER\n");
            #endif
        #else
            printf("\nERROR:MIN not defined\n");
        #endif
    #else
        printf("\nERROR: MAX not defined\n");
    #endif
}