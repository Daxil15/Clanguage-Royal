    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0)
            {
                temp = a[i][j];
                a[i][j] = a[2][j];
                a[2][j] = temp;
            }
        }
    }