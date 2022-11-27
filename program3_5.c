+#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkVowel(char Cvalue)
{
    if((Cvalue=='a' || Cvalue=='e' || Cvalue=='i' || Cvalue=='o' || Cvalue=='u') || (Cvalue=='A' || Cvalue=='E' || Cvalue=='I' || Cvalue=='O' || Cvalue=='U'))
    {
      return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cvalue ='\0';
    BOOL bRet = FALSE;

    printf("Enter the charecter\n");
    scanf("%c",&cvalue);
    bRet = chkVowel(cvalue);
    if (bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("it is not vowel\n");
    }
    
    return 0;
}