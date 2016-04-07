#include<bits/stdc++.h>
using namespace std;
class tree
{
    int data;
    tree *left;
    tree *right;
    public:
        tree *root,*t1,*t2;
        tree()
        {
            root=NULL;
            t1=root;
        }
        tree* insert_node(tree *,int);
        void search_node(tree *,int);
        void inorder(tree *);
        void search_to_delete(tree *,int);
        void delete_node(tree *);
};
tree* tree::insert_node(tree *temp,int n)
{
    if(temp==NULL)
    {
        tree *ptr=new tree;
        ptr->data=n;
        ptr->right=NULL;
        ptr->left=NULL;
        return ptr;
    }
    else
    {
        if(n>temp->data)
            temp->right=insert_node(temp->right,n);
        else if(n<temp->data)
            temp->left=insert_node(temp->left,n);
        return temp;
    }
}

void tree::search_node(tree *temp,int n)
{
    if(temp==NULL)
        cout<<"Element not found!";
    else
    {
        if(n>temp->data)
            search_node(temp->right,n);
        else if(n<temp->data)
            search_node(temp->left,n);
        else
            cout<<"Element found!!";
    }
}
void tree::inorder(tree *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
}
void tree::search_to_delete(tree *temp,int n)
{
    if(temp==NULL)
    {
        printf("Element not in the tree!!");
        return;
    }
    if(n<temp->data)
    {
        t1=temp;
        search_to_delete(temp->left,n);
    }
    else if(n>temp->data)
    {
        t1=temp;
        search_to_delete(temp->right,n);
    }
    else if(n==temp->data)
        delete_node(temp);
}
void tree::delete_node(tree *temp)
{
    if(temp->right==NULL && temp->left==NULL)
    {
        if(t1==temp)
            delete t1;
        else
        {
                if(temp==t1->left)
                    t1->left=NULL;
                else
                    t1->right=NULL;
                delete temp;
        }
    }
    else if(temp->right==NULL && temp->left!=NULL)
    {
        if(temp==t1)
        {
            t1=t1->left;
            delete temp;
        }
        else
        {
            if(temp==t1->right)
                t1->right=temp->left;
            else
                t1->left=temp->left;
            delete temp;
        }
    }
    else if(temp->right!=NULL && temp->left==NULL)
    {
        if(temp==t1)
        {
            t1=t1->right;
            delete temp;
        }
        else
        {
            if(temp==t1->right)
                t1->right=temp->right;
            else
                t1->left=temp->right;
            delete temp;
        }
    }
    else if(temp->right!=NULL && temp->left!=NULL)
    {
        tree *save;
        save=temp->right;
        t1=temp;
        while(save->left!=NULL)
        {
            t1=save;
            save=save->left;
        }
        temp->data=save->data;
        delete_node(save);

    }

}

int main()
{
    tree t;
    t.root=t.insert_node(t.root,10);
    t.root=t.insert_node(t.root,6);
    t.root=t.insert_node(t.root,4);
    t.root=t.insert_node(t.root,12);
    t.root=t.insert_node(t.root,13);
    t.root=t.insert_node(t.root,9);
    t.inorder(t.root);
    t.search_node(t.root,7);
    t.t1=t.root;
    t.search_to_delete(t.root,6);
    //t.root=t.t1;
    t.inorder(t.root);
    return 0;
}
