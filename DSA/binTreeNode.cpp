#include<iostream>
#include<cstdlib>
using namespace std;

struct tree
{
    int val;
    tree *left, *right;
};

tree* root;

class binaryTree
{
    public:
        binaryTree();
        void insert1(int);
        tree* insert2(tree*, tree*);
        void deleteNode(int);
        void preTrav(tree*);
        void intrav(tree*);
        void postTrav(tree*);
};

binaryTree::binaryTree()
{
    root = NULL;
}


tree* binaryTree::insert2(tree *temp, tree *newnode)
{
    if(temp == NULL)
    {
        temp = newnode;
    }

    else if (temp->val < newnode->val) 
    {
        insert2(temp->right, newnode);
        if(temp->right == NULL)
        {
            temp->right = newnode;
        }
    }

    else
    {
        insert2(temp->left, newnode);
        if(temp->left == NULL)
        {
            temp->left = newnode;
        }
    }

    return temp;
}


void binaryTree::insert1(int n)
{
    tree *temp = root, *newnode;
    newnode = new tree;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->val = n;
    root = insert2(temp, newnode);
}

void binaryTree::preTrav(tree *t = root) // root, left, right
{
    if(t != NULL)
    {
        cout << t->val << " ";
        preTrav(t->left);
        preTrav(t->right);
    }  
}

void binaryTree::intrav(tree *t = root) // left, root, right
{
   
    if(t != NULL)
    {
        intrav(t->left);
        cout << t->val << " ";
        intrav(t->right);
    }
    
}


void binaryTree::postTrav(tree *t = root) // left, right, root
{
    if(t != NULL)
    {
        postTrav(t->left);
        postTrav(t->right);
        cout << t->val << " ";
    }    
}

void binaryTree::deleteNode(int n)
{

}

int main()
{
    binaryTree bt;

    bt.insert1(5);
    bt.insert1(2);
    bt.insert1(8);
    bt.insert1(3);
    bt.insert1(50);
    bt.insert1(1);
    bt.insert1(6);

    cout << "pre order traversal(R-L-Ri) - ";
    bt.preTrav();

    cout << endl << "in order traversal(L-R-Ri) - ";
    bt.intrav();

    cout << endl << "post order traversal(L-Ri-R) - ";
    bt.postTrav();

    return 0;
}