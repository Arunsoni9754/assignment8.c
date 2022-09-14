#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {int k='A';
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j<=n-i+1||j>=n+i-1)
            {
                printf("%c",k);
                j<n?k++:k--;
            }
            else
            {
                printf(" ");
                 if(j==(i+3)&&i>1)
                k--;
            }
        }
        printf("\n");
    }
}
