//program to print two D arrey for 3 by 3
#include <stdio.h>
int main() 
{
  int r=0,c=0,i=0;
int marks [3][3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(r=0;r<3;r++)
    {for(c=0;c<3;c++)
  {for(i=0;i<3;i++)
    {
printf("%d",marks[r][c][i]);
      }
    }
      }
    return 0;
}