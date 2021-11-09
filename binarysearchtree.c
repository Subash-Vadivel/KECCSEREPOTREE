#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node *create(int n,struct node *L,struct node *R)
{
    struct node *t1;
    t1=(struct node *)malloc(sizeof(struct node));
    t1->data=n;
    t1->left=L;
    t1->right=R;
    return t1;
}
struct node *insert(int n,struct node *t1)
{
    if(t1==NULL)
         return (create(n,NULL,NULL));
    else if(n<t1->data)
         t1->left= insert(n,t1->left);
    else
          t1->right=insert(n,t1->right);
    return t1;
}
//It is Inorder
void inorder(struct node *t1)
{
    if(t1==NULL)
    {
        return;
    }
    else
    {
        inorder(t1->left);
        printf("%d ",t1->data);
        inorder(t1->right);
    }
}
//It is a min function
int findmin(struct node *t1)
{
    if(t1==NULL)
    {
        return -1;
    }
    while(t1->left!=NULL)
    {
        t1=t1->left;
    }
    return (t1->data);
}
//It is a max function
int findmax(struct node *t1)
{
    if(t1==NULL)
    {
        return -1;
    }
    while(t1->right!=NULL)
    {
        t1=t1->right;
    }
    return (t1->data);
}

int main()
{
    struct node *root=NULL;
    int ch,n,loop=1,num;
    while(loop==1)
    {
        printf("\n\t\t--------------TREE-----------------");
        printf("\n\t\t1.INSERT");
        printf("\n\t\t2.DISPLAY");
        printf("\n\t\t3.MAX");
        printf("\n\t\t4.MIN");
        printf("\n\t\t6.EXIT");
        printf("\n\t\t-----------------------------------");
        printf("\n\t\tENTER YOUR CHOSE : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n\t\tENTER THE NUMBER OF TERMS TO BE INSERTED : ");
                scanf("%d",&n);
                while(n>0)
                {
                     printf("\n\t\tENTER THE VALUE TO BE INSERTED : ");    
                     scanf("%d",&num);
                     root=insert(num,root);
                     n--;
                }
                break;
            case 2:
                printf("\n\t\t");
                inorder(root);
                break;
            case 3:
                printf("\n\t\tMAX :%d",findmax(root));
                break;
            case 4:
                printf("\n\t\tMIN :%d",findmin(root));
                break;
            case 6:
                loop=0;
                break;
            default:
                printf("\n\t\tINVALID CHOSE");
               
        }
       
    }
   
   
   
}
