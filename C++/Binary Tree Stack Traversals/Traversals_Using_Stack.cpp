// C++ program to print inorder traversal,postorder traversal,preorder traversal
// using stack.
#include <bits/stdc++.h>
using namespace std;
/*
A binary tree Node has data, pointer to left child
and a pointer to right child
*/
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
/* Iterative function for inorder tree traversal */
void inOrder(struct Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}
vector<int> postOrderIterative(struct Node *root)
{
    vector<int> postOrderList;
    // Check for empty tree
    if (root == NULL)
        return postOrderList;
    stack<Node *> S;
    S.push(root);
    Node *prev = NULL;
    while (!S.empty())
    {
        auto current = S.top();
        if (prev == NULL || prev->left == current || prev->right == current)
        {
            if (current->left)
                S.push(current->left);
            else if (current->right)
                S.push(current->right);
            else
            {
                S.pop();
                postOrderList.push_back(current->data);
            }
        }
        else if (current->left == prev)
        {
            if (current->right)
                S.push(current->right);
            else
            {
                S.pop();
                postOrderList.push_back(current->data);
            }
        }
        else if (current->right == prev)
        {
            S.pop();
            postOrderList.push_back(current->data);
        }
        prev = current;
    }
    return postOrderList;
}
void iterativePreorder(Node *root)
{
    // Base Case
    if (root == NULL)
        return;
    // Create an empty stack and push root to it
    stack<Node *> NodeStack;
    NodeStack.push(root);
    while (NodeStack.empty() == false)
    {
        struct Node *Node = NodeStack.top();
        printf("%d ", Node->data);
        NodeStack.pop();
        if (Node->right)
            NodeStack.push(Node->right);
        if (Node->left)
            NodeStack.push(Node->left);
    }
}
// Testing all the functions
int main()
{
    /*
    Constructed binary tree is
              5
            /   \
          9      77
        /  \
      4     21
    */
    struct Node *root = new Node(5);
    root->left = new Node(9);
    root->right = new Node(77);
    root->left->left = new Node(4);
    root->left->right = new Node(21);
    cout << "Inorder Traversal" << endl;
    inOrder(root);
    cout << endl;
    cout << "Preorder Traversal" << endl;
    iterativePreorder(root);
    cout << endl;
    cout << "Postorder Traversal" << endl;
    vector<int> v = postOrderIterative(root);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
