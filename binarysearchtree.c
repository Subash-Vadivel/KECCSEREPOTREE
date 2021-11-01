#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left,*right;
};
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