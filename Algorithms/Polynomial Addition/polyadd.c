#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int px;
    struct node *link;
};
typedef struct node * NODE;

NODE insert_rear(int coeff,int px,NODE head)
{
    NODE temp,cur;
    temp=(NODE)malloc(sizeof(struct node));
    temp->coeff=coeff;
    temp->px=px;
    temp->link=NULL;
    cur=head->link;
    while(cur->link!=head)
    {
        cur=cur->link;
    }
    cur->link=temp;
    temp->link=head;
    return head;
}
NODE readpoly(NODE head)
{
    int n,coeff,i,px;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the coefficient and power of x of %d term is\n",i);
        scanf("%d%d",&coeff,&px);
        head=insert_rear(coeff,px,head);
    }
    return head;
}
int compare(int x,int y)
    {
        if(x<y)
            return -1;
        else if(x==y)
            return 0;
        else 
            return 1;
    }
NODE addpoly(NODE head1,NODE head2,NODE head3)
    {
        NODE p1,p2;
        p1=head1->link;
        p2=head2->link;
        int sumcf;
        while(p1!=head1 &&p2!=head2)
        {
            switch(compare(p1->px,p2->px))
            {
                case 0:
                        sumcf=p1->coeff+p2->coeff;
                        if(sumcf!=0)
                        head3=insert_rear(sumcf,p1->px,head3);
                        p1=p1->link;
                        p2=p2->link;
                        break;
                case 1:
                        head3=insert_rear(p1->coeff,p1->px,head3);
                        p1=p1->link;
                        break;
                case -1:
                        head3=insert_rear(p2->coeff,p2->px,head3);
                        p2=p2->link;
                        break;
            }
        }
        while(p1!=head1)
        {
            head3=insert_rear(p1->coeff,p1->px,head3);
            p1=p1->link;
        }
        while(p2!=head2)
        {
            head3=insert_rear(p2->coeff,p2->px,head3);
            p2=p2->link;
        }
        return head3;
        
    }
void display(NODE head)
    {
        NODE cur;
        if(head->link==head)
        {
            printf("Polynomial does not exist\n");
            return;
        }
        cur=head->link;
        while(cur!=head)
        {
            if(cur->coeff>0)
                printf("+");
            printf("%dx^%d",cur->coeff,cur->px);
            cur=cur->link;
        }
    }
    
void main()
    {
        NODE head1,head2,head3;
        head1=(NODE)malloc(sizeof(struct node));
        head2=(NODE)malloc(sizeof(struct node));
        head3=(NODE)malloc(sizeof(struct node));
        head1->link=head1;
        head2->link=head2;
        head3->link=head3;
        printf("Enter the first polynomial\n");
        head1=readpoly(head1);
        printf("Enter the second polynomial\n");
        head2=readpoly(head2);
        head3=addpoly(head1,head2,head3);
        printf("The first polynomial is:");
        display(head1);
        printf("\n");
        printf("The second polynomial is:");
        display(head2);
        printf("\n");
        printf("The sum of two polynomials given is:");
        display(head3);     
    }
