#include <stdio.h>
#include <stdlib.h>
#define FAIL 1
int main(int argc, char *argv[])
{
    int *piBuffer = NULL; 
    int nRow = 0; 
    int nColumn = 0; 
    int iRow = 0; 
    int iCol = 0; 
    printf("\nEnter the number of Row = ");
    scanf("%d",&nRow); 
    printf("\nEnter the number of Column = ");
    scanf("%d",&nColumn); 
    
    piBuffer = (int *)malloc(nRow * nColumn * sizeof(int));
    //Check memory validity
    if(piBuffer == NULL)
    {
        return FAIL;
    }
    //Copy 5 in 2d Array
    for (iRow =0 ; iRow < nRow ; iRow++)
    {
        for (iCol =0 ; iCol < nColumn ; iCol++)
        {
            piBuffer[iRow * nColumn + iCol] = 5;
        }
    }
    //Print the content of 2D array
    for (iRow =0 ; iRow < nRow ; iRow++)
    {
        for (iCol =0 ; iCol < nColumn ; iCol++)
        {
            printf("\npiBuffer[%d][%d] = %d\n",iRow, iCol,piBuffer[iRow * nColumn + iCol]);
        }
    }
    
    //free the allocated memory
    free(piBuffer);
    
    return 0;
}