#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { int k=1;
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=i&&j<=(2*n)-i)
            {
                printf("%d",k);
                j<n?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
