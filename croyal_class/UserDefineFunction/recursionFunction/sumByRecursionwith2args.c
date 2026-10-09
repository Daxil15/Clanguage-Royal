#include<stdio.h>

int sum(int amt, int stu)
{
    if(stu==0)
    {
        return 0;
    }
    return amt+sum(amt, stu-1);
}// sum end

void main()
{
    int total;
    total = sum(10,3);
    printf("%d", total);

}//end of main