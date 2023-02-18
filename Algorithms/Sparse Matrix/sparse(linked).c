#include <stdio.h>
#include <stdlib.h>

struct node{
     int value;
     int row;
     int col;
     struct node *rlink;
     struct node *dlink;
};
typedef struct node* NODE;

void insert_matrix(NODE rowhead[],NODE colhead[],int value ,int row,int col)
{
  NODE temp,cur,prev,head;
  temp=(NODE)malloc(sizeof(struct node));
  temp->value=value;
  temp->row=row;
  temp->col=col;
  
  //Insert into approriate coloumn
  head=rowhead[row];
  prev=head;
  cur=head->rlink;
  while(cur!=head && cur->col<col)
    {
      prev=cur;
      cur=cur->rlink;
    }
  prev->rlink=temp;
  temp->rlink=cur;

  //Insert into appropriate row
  head=colhead[col];
  prev=head;
  cur=head->dlink;
  while(cur!=head && cur->row<row)
    {
      prev=cur;
      cur=cur->dlink;
    }
  prev->dlink=temp;
  temp->dlink=cur;
}

void read_matrix(NODE rowhead[],NODE colhead[],int m,int n)
{
  int value,i,j;
  printf("\n\nEnter the elements of the matrix\n");
  for (i=0;i<m;i++)
    {
      for (j=0;j<n;j++)
        {
          scanf("%d",&value);
          if (value != 0)
          {
            insert_matrix(rowhead,colhead,value,i,j);
          }
        }
    }
}

void display(NODE rowhead[],int m)
{
  int i;
  NODE head,cur;
  for (i=0;i<m;i++)
    {
      head=rowhead[i];
      cur=head->rlink;
      while(cur !=head)
        {
          printf("(%d,%d)=%d\n",cur->row,cur->col,cur->value);
          cur=cur->rlink;
        }
    }
}

void search(int key, NODE rowhead[],int m)
{
  int i;
  NODE head,cur;
  for (i=0;i<m;i++)
    {
      head=rowhead[i];
      cur=head->rlink;
      while(cur!=head)
        {
          if (key==cur->value)
          {
            printf("Successful Search\n");
            printf("Element found at row %d and column %d\n",cur->row,cur->col);
            return;
          }
          cur=cur->rlink;
        }
    }
  printf("Unsuccessful Search element not found\n");
}

void main()
{
  int m,n,i,key;
  NODE rowhead[20],colhead[20],temp;

  printf("Enter the number of rows\n");
  scanf("%d",&m);
  printf("Enter the number of columns\n");
  scanf("%d",&n);

  //Intialize row headers
  for (i=0;i<m;i++)
    {
      temp=(NODE)malloc(sizeof(struct node));
      temp->rlink=NULL;
      temp->dlink=temp;
      rowhead[i]=temp;
    }
  //Intialize column header
  for (i=0;i<n;i++)
    {
      temp=(NODE)malloc(sizeof(struct node));
      temp->rlink=NULL;
      temp->dlink=temp;
      colhead[i]=temp;
    }
  //Read the matrix elements
  read_matrix(rowhead,colhead,m,n);

  //Print the matrix
  display(rowhead,m);

  //Read the key elements to be searched
  printf("Enter the element to be searched\n");
  scanf("%d",&key);

  //Search for the key in the matrix
  search(key,rowhead,m);

}