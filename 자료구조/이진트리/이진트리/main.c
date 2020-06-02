#include <stdio.h>
typedef struct TreeNode {
	int data;
	struct TreeNode *left, *right;
}TreeNode;
//			  15
//		4			 20
//	1		3	 16		 25
TreeNode n7 = { 3,NULL,NULL };
TreeNode n1={ 1,NULL,NULL };
TreeNode n2={ 4, &n1, &n7 };
TreeNode n3={ 16,NULL,NULL };
TreeNode n4={ 25,NULL,NULL };
TreeNode n5={ 20, &n3, &n4 };
TreeNode n6={ 15, &n2, &n5 };

TreeNode* root = &n6;
//중위순회
inorder(TreeNode* root) {
	if (root)
	{
		inorder(root->left);
		printf("%d\t", root->data);
		inorder(root->right);
	}
}
preorder(TreeNode* root) {
	if (root)
	{
		printf("%d\t", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
postorder(TreeNode* root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t", root->data);
	}
}
void main()
{
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
}