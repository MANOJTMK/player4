#include<stdio.h>
void main()
{
    int a[100][100],i,j,n,k=0,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
            if(a[i][j+1]==0&&a[i+1][j]==0&&a[i-1][j]==0&&a[i][j-1]==0)
            {
                k++;
            }
            }
        }
    }
    printf("%d",k);
    getch();
    
}
