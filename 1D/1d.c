#include <stdio.h>
#include <stdlib.h>
#define FAIL 1
#define TRUE 0
int main(int argc, char *argv[])
{
    int *piBuffer = NULL; 
    int numbBlock = 0; 
    int iLoop = 0; 
    printf("\nEnter the number of block = ");
    scanf("%d",&numbBlock); 
    piBuffer = (int *)malloc(numbBlock * sizeof(int));
    
    if(piBuffer == NULL)
    {
        return FAIL;
    }
    
    for (iLoop =0; iLoop < numbBlock; iLoop++)
    {
        piBuffer[iLoop] = iLoop;
    }
    
    for (iLoop =0; iLoop < numbBlock; iLoop++)
    {
        printf("\npcBuffer[%d] = %d\n", iLoop,piBuffer[iLoop]);
    }
    
    free(piBuffer);
    return TRUE;
}
