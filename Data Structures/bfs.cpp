#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;
class Node
{
	public:
	int key;
	Node *left;
	Node *right;
		Node()
		{
			key=-1;
			left=NULL;
			right=NULL;
			
		};
		void setkey(int akey)
		{
			key=akey;
		};
		void setleft(Node* aleft)
		{
			left=aleft;
		};
		void setright(Node* aright)
		{
			right=aright;
		};
		int Key()
		{
			return key;
			
		};
		Node *Left()
		{
			return left;
			
		};
		Node *Right(){
			return right;
		};
		
};
class Tree
{
	Node* root;
	public:
		Tree();
		~Tree();
		Node* Root(){
			return root;
		};
		void addnode(int key);
		void levelorder(Node* n);
	private:
		void addnode(int key,Node* leaf);
		void freenode(Node* leaf);
			
};
Tree::Tree()
{
	root=NULL;
}
Tree::~Tree()
{
	freenode(root);
}
void Tree::freenode(Node* leaf)
{
	if(leaf!=NULL)
	{
		freenode(leaf->Left());
		freenode(leaf->Right());
		delete leaf;
		
	}
}
void Tree::addnode(int key)
{
	if(root==NULL){
		cout<<"add root node "<<key<<endl;
		Node* n=new Node();
		n->setkey(key);
		root=n;
		
	}
	else
	{
		cout<<"add other node"<<key<<endl;
		addnode(key,root);
		
	}
}
void Tree::addnode(int key,Node* leaf)
{
	if(key<=leaf->Key())
	{
		if(leaf->Left()!=NULL)
		addnode(key,leaf->Left());
		else
		{
			Node *n=new Node();
			n->setkey(key);
			leaf->setleft(n);
			
		}
	}
	else
	{
		if(leaf->right!=NULL)
		addnode(key,leaf->Right());
		else
		{
			Node *n=new Node();
			n->setkey(key);
			leaf->setright(n);
			
		}
	}	
	
}
void Tree::levelorder(Node* n)
{
	queue<Node*> q;
	q.push(n);
	while(!q.empty())
	{
		Node *v=q.front();
		cout<<v->key<<" ";
		if(v->Left()!=NULL)
		q.push(v->Left());
		
			if(v->Right()!=NULL)
		q.push(v->Right());
		
		q.pop();

	}
}

int main()
{
	char c;
		int j;
	Tree* tree=new Tree();
	cout<<"enter the nodes "<<endl;
	do 
	{
		
		cout<<"enter value"<<endl;
		cin>>j;
		tree->addnode(j);
		cout<<"do u want to enter more node?(y/n)"<<endl;
		cin>>c;
		
	}while(c=='y'||c=='Y');
	
	cout<<"level order traversal"<<endl;
	tree->levelorder(tree->Root());
	delete tree;
	return 0;
	
}
