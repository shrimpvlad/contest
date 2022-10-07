#include <vector>
#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node* parent;
    Node* left_child;
    Node* right_child;
};

void Swap(vector<Node> &tree, int leaf)
{
    if (tree[leaf].parent == nullptr)
        return;
    
    if (tree[leaf].parent->parent != nullptr && tree[leaf].parent->parent->left_child == tree[leaf].parent)
    {
        tree[leaf].parent->parent->left_child = &tree[leaf];
    }
    else if (tree[leaf].parent->parent != nullptr && tree[leaf].parent->parent->right_child == tree[leaf].parent)
    {
        tree[leaf].parent->parent->right_child = &tree[leaf];
    }
    
    
    if (&tree[leaf] == tree[leaf].parent->left_child)
    {
        if (tree[leaf].left_child != nullptr)
            tree[leaf].left_child->parent = tree[leaf].parent;
        tree[leaf].parent->left_child = tree[leaf].left_child;
        tree[leaf].left_child = tree[leaf].parent;
        tree[leaf].parent = tree[leaf].left_child->parent;
        tree[leaf].left_child->parent = &tree[leaf];
    }
    else if (&tree[leaf] == tree[leaf].parent->right_child)
    {

        if (tree[leaf].right_child != nullptr)
            tree[leaf].right_child->parent = tree[leaf].parent;
        tree[leaf].parent->right_child = tree[leaf].right_child;
        tree[leaf].right_child = tree[leaf].parent;
        tree[leaf].parent = tree[leaf].right_child->parent;
        tree[leaf].right_child->parent = &tree[leaf];
    }

}
void Show(Node *&tree)
{
    if (NULL==tree)
        return;
    Show(tree->left_child);
    cout<<tree->value<<" ";
    Show(tree->right_child);
}
int main()
{
    int n,q;
    cin>>n>>q;
    vector<Node> tree(n);
    Node *node = new Node;
    node->value = 1;
    node->parent = nullptr;
    node->left_child = nullptr;
    node->right_child = nullptr;
    tree[0] = *node;
    delete node;
//    int k = 2;
    for (int i = 2; i <= n; ++i)
    {
        if (i%2 == 0)
        {
            Node *node = new Node;
            node->value = i;
            node->parent = &tree[i/2 - 1];
            node->left_child = nullptr;
            node->right_child = nullptr;
            tree[i-1] = *node;
            tree[i/2 - 1].left_child = &tree[i-1];
            delete node;
        }
        else
        {
            Node *node = new Node;
            node->value = i;
            node->parent = &tree[i/2 - 1];
            node->left_child = nullptr;
            node->right_child = nullptr;
            tree[i-1] = *node;
            tree[i/2 - 1].right_child = &tree[i-1];
            delete node;
        }
    }
    int v;
    for (int i = 0; i < q; ++i)
    {
        cin>>v;
        Swap(tree, v-1);
    }
    Node *ptr;
    for (auto &l:tree)
    {
        if (l.parent == nullptr)
        {
            ptr=&l;
        }
    }
    Show(ptr);
    cout<<"\n";
}

