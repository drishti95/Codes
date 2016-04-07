#include<iostream>
#include<iomanip>
using namespace std;
typedef class tree
{
  private:             
      int data;
      tree *l;
      tree *r;
  public:
      void insert(int x);
      void indisplay(tree *root);
       void predisplay(tree *root);
        void postdisplay(tree *root);
}T;
T *h=NULL;
T *c;
void tree::insert(int x)
{
     
       T *t=new T;
     t->l=t->r=NULL;
     t->data=x;
     if(h==NULL)
     {             
     h=t;
     c=h;
     }
     else
     {
         int d;
         T *temp;
   
         c=h;
         while(c!=NULL)
         {
             if(x>c->data)
             {
                temp=c;
                d=1;
                c=c->r;
             }
             else
             {
                 temp=c;
                 d=0;
                 c=c->l;
             }
         }
         if(d==1)
          temp->r=t;
         else
          temp->l=t;                                     
     }
}
void tree::indisplay(tree *root)
{
   if(root)
   {
       
         
           indisplay(root->l);
          cout<<root->data<<"   ";
         
         indisplay(root->r);
          
   }
}     
void tree::predisplay(tree *root)
{
     if(root)
   {
       
          cout<<root->data<<"   ";
           predisplay(root->l);
         
         
         predisplay(root->r);
          
   }
} 
void tree::postdisplay(tree *root)
{
     if(root)
   {
       
         
           postdisplay(root->l);
         
         
         postdisplay(root->r);
          cout<<root->data<<"   ";
          
   }
}     
int main()
{
    T y;
    int x,m;
    cout<<"enter the no. of elements :";
    cin>>m;
    for(int i=0;i<m;i++)
    {
     cin>>x;        
     y.insert(x);
     }
     cout<<"inorder :";
    y.indisplay(h);
    cout<<endl;
    cout<<"preorder :";
    y.predisplay(h);
    cout<<endl;
    cout<<"post order :";
    y.postdisplay(h);
    
    cin.get();
    return 0;
}  
    
           
           
           
           
           
           
           
           
           
 
     
      