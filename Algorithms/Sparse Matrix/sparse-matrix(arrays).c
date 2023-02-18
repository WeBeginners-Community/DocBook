#include <stdio.h>

int main()
{
     int m, n, rows, columns, a[10][10], Total= 0; 
     printf("\n\t\t\t**SPARSE MATRIX**\n");
     printf("\t\t\t-----------------");
     printf("\n Please Enter Number of rows and column:\n");
     scanf("%d%d",&m,&n);
     printf("\n Please Enter the Matrix Elements\n");
      for (rows=0; rows < m; rows++)
     {
           for (columns= 0; columns < n;columns++){
           scanf("%d", &a[rows][columns]);
        }
     }
     printf("\n The Matrix Elements \n");
    for (rows=0; rows < m; rows++)
    {

          for (columns= 0; columns < n;columns++){
            printf("%d\t", a[rows][columns]);
          }
           printf("\n");
    }
    for (rows=0; rows < m; rows++){
         for (columns= 0; columns < n; columns++){
           if(a[rows][columns] == 0)
                Total++;    
        }
    }

       if (Total> (rows *columns)/2)
        {
           printf("\n The Matrix that you entered is a Sparse Matrix\n ");
          printf("rows\t\t coloumns\t\tvalues\t\t\n");
           printf("\t%d\t\t\t%d\t\t\t%d\n",m,n,((m*n)-Total));
      for (rows=0; rows < m; rows++){
         for (columns= 0; columns < n; columns++){
           if(a[rows][columns] != 0)
                printf("\t%d\t\t\t%d\t\t\t%d\t\t\n",rows,columns,a[rows][columns]) ;  
        }
    } 
       }
       else
           printf("\n The Matrix that you entered is Not a Sparse Matrix\n ");
  
return 0;
}