
#include<stdio.h>
int main ()
{
    int r,c,f=1,a[100][100],b[100][100],ans[100][100],lft_d[100],rgt_d[100],k=0,idx=0,loop=0;
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
                loop++;
            }
            if((i+j) == (r-1))
            {
                rgt_d[idx] = a[i][j];
                idx++;
            }
        }
    }
    int lsum=0,rsum=0;
    k=0,idx=0;
    for(int i = 0; i<loop; i++)
    {
        lsum += lft_d[k];
        rsum += rgt_d[idx];
        k++;
        idx++;
    }
    printf("The Sum of Left Top Diagonal = %d\n",lsum);
    printf("The Sum of Right Top Diagonal = %d",rsum);



    return 0;
}
