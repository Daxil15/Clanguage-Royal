#include <stdio.h>

void main()
{
    int no=0;
    int positivenumbercount=0;
    int  negativenumbercount=0;

    printf("Enter the positive and nagetive number and enter 0 to stop : \n");
    for(;;)
    {
        scanf(" %d", &no);
    
        if  (no==0)
            {
                break;
            }


            if (no>0)
            {
                positivenumbercount++;
            }else
            {
                negativenumbercount++;
            }
    }

printf(" \n positive no is  : %d", positivenumbercount);
printf(" \n nagetive no is  : %d", negativenumbercount);
  
}