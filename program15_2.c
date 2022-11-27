#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int i = 0;
    int Diff = 0;
    int count = 0;
    int Odd = 0;
  for(i = 0; i < iLength; i++)
  {
    if(Arr[i] % 2 == 0 )
    {
      count++;
    }
    else 
    {
        Odd++;
    }
    Diff = count - Odd;
  }
  return Diff;
  
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int *p = NULL;
    int iCnt = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
     printf("Enter elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements: %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet =  CountEven(p, iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}