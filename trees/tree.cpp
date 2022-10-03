#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *left, *right;
  Node(int data)
  {
    this->data = data;
    left = right = NULL;
  }
};

void pre_order(Node *root)
{
  if (root == NULL)
    return;
  cout << root->data << " ";
  pre_order(root->left);
  pre_order(root->right);
}

void postorder(Node *root)
{
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}
void inorder(Node *root)
{
  if (root == NULL)
    return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

int main()
{
  Node *node = new Node(1);
  node->left = new Node(2);
  node->right = new Node(3);
  node->left->left = new Node(4);
  node->left->right = new Node(5);
  inorder(node);
}