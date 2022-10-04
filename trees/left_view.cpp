#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
  T data;
  TreeNode<T> *left;
  TreeNode<T> *right;

  TreeNode(T data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

void left_view(TreeNode<int> *root)
{
  queue<TreeNode<int> *> q;
  q.push(root);
  q.push(NULL);
  bool ready = true;
  while (!q.empty())
  {
    TreeNode<int> *current = q.front();
    q.pop();
    if (current == NULL)
    {
      if (!ready)
      {
        ready = true;
      }

      if (q.size() == 0)
        break;
      else
        q.push(NULL);
    }
    else
    {
      if (ready)
      {
        cout << current->data << " ";
        ready = false;
      }

      if (current->left != NULL)
        q.push(current->left);
      if (current->right != NULL)
        q.push(current->right);
    }
  }
}

int main()
{
  TreeNode<int> *node = new TreeNode<int>(1);
  node->left = new TreeNode<int>(2);
  node->right = new TreeNode<int>(3);
  node->left->left = new TreeNode<int>(4);
  node->left->right = new TreeNode<int>(5);
  node->right->right = new TreeNode<int>(6);
  node->right->right->right = new TreeNode<int>(7);
  left_view(node);
  return 0;
}