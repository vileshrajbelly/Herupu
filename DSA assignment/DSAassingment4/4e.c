#include <stdio.h>
#include <stdlib.h>

struct node
{
   struct node *left;
   struct node *right;
   int data;
};

struct node *New(int data)
{
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   temp->left = NULL;
   temp->right = NULL;
   return temp;
}

void leaf(struct node *root, int level)
{
   if (root == NULL)
      return;
   if (level == 1)
   {
      if (root->left == NULL && root->right == NULL)
         printf("%d\n", root->data);
   }
   else if (level > 1)
   {
      leaf(root->left, level - 1);
      leaf(root->right, level - 1);
   }
}

int main()
{
	printf("NAME: Vilesh\nUSN: 1BG19EE050\n");
   printf("leaf nodes are: ");
   struct node *root = New(11);
   root->left = New(22);
   root->right = New(33);
   root->left->left = New(66);
   root->right->right = New(44);
   root->left->left->left = New(88);
   root->left->left->right = New(77);
   int level = 4;
   leaf(root, level);
   return 0;
}