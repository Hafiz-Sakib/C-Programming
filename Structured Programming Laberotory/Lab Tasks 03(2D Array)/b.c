
#include<stdio.h>
int main ()
{
    int r,c,f=1,a[100][100],b[100][100],ans[100][100],lft_d[100],rgt_d[100],k=0,idx=0;
    scanf("%d",&r);

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            if(i == j)
            {
                lft_d[k] = a[i][j];
                k++;
            }
            if((i+j) == (r-1))
            {
                rgt_d[idx] = a[i][j];
                idx++;
            }
        }
    }
    k = 0;
    idx = 0;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            if(i == j)
            {
                a[i][j] = rgt_d[k];
                k++;
            }
            if((i+j) == (r-1))
            {
                a[i][j] = lft_d[idx];
                idx++;
            }
        }
    }
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }



    return 0;
}
