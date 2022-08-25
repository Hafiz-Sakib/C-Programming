/* for input 5 ,output will be :

    *
   **
  ***
 ****
*****

*/

#include <stdio.h>
int main()
{

    int i, j, rows, n;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if ((i + j) <= rows)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}