#include<stdio.h>
#include<conio.h>
int main()
{int a[3][3],i,j,k[3][3];
 printf("enter the first matrix=");
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
  }
printf("enter second matrix");
for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
    scanf("%d",&k[i][j]);
  }
printf("\n sum of the matrix\n");
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
      printf("%d",(a[i][j]+k[i][j]));
    printf("\n");
   }
getch();

}
