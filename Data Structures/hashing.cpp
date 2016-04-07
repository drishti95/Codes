#include<iostream>
#include<cstdlib>

using namespace std;

int s,collision=0;
int probe(int i,int c)
{

         return (i+c)%s;
}
template <class T>
class slot
{
      public:
      T k;
      char tag;
};

template <class H>
class hash
{
      public:
      slot<H> ht[s];
      hash(void)
      {
	      int i;
	      for(i=0;i<s;i++)
                      ht[i].tag='E';
      }
      int insert(H key)
      {
               int i=probe(key,0),c=1;
               if(ht[i].tag!='O')
               {
                                 ht[i].tag='O';
                                 ht[i].k=key;
                                 return 1;
               }
               collision++;
               while(ht[i].tag=='O' && c<s)
               {
                                      i=probe(key,c) ;
                                      c++;
               }
               if(ht[i].tag!='O')
               {
                                   ht[i].tag='O';
                                   ht[i].k=key;
                                   return 1;
               }
               else
               return 0;
      }
      int search(H key)
      {
               int i=probe(key,0);
               if((ht[i].k==key)&&ht[i].tag=='O')
               {
                                                 return i;
               }
               int c=1;
               do{
                   i=probe(i,c);
                   c++;
                   if((ht[i].k==key)&&ht[i].tag=='O')
                                                     return i;
               }while(c<s);
               return -1;
      }
      int del(H key)
      {
               int x=search(key);
               if(x>=0)
               {
                       ht[x].tag='D';
                       return 1;
               }
               return -1;
      }

      void disp()
      {
           int x=0;
           while(x<s)
           {
                     x++;
                     cout<<x<<"th element: ";
                     if(ht[x-1].tag=='O')
                     cout<<ht[x-1].k;
                     cout<<"\n";
           }
      }
      int maxcluster()
	  {
		int m=0,t=0,cs=0;
		for(int i=0;i<s;i++)
		{
			if(ht[i].tag=='O')
				t++;
			else
			{
				if(t>m) m=t;
				t=0;
			}
		}
		for(int i=s-1;ht[i].tag=='O';i--)
		{
			cs++;
		}
		for(int i=0;ht[i].tag=='O';i++)
		{
			cs++;
		}
		if(cs<=s && cs>m) m=cs;
		return m;
	}


};

int main()
{
	int c,m;

	hash<int> H;
    int k;
	cout<<"Enter max no. of elements";
	cin>>s;
	cout<<"\n\nMenu:\n\n1.Insert\n2.Search\n3.Delete\n4.Max cluster size\n5.Number of collisions\n6.Display\n0.Exit\n\nEnter choice:";
	cin>>c;
	while(c)
	{
    if(c<=3)
    {
	cout<<"enter element:";
	cin>>k;
    }
	switch(c)
	{
		case 1:
		m=H.insert(k);
		if(m)
			cout<<"element inserted";
		else
			cout<<"element not inserted. insufficent space";
		break;

		case 2:
		m=H.search(k);
		if(m>-1)
			cout<<"element found at "<<m;
		else
			cout<<"element not found";
		break;

		case 3:
		m=H.del(k);
		if(m==1)
			cout<<"element deleted";
		else
			cout<<"element not present.";
		break;

		case 4:
             cout<<"\nmax cluster size is:"<<H.maxcluster();
             break;
        case 5:
             cout<<"\nnumber of collisions till now are:"<<collision;
             break;
        case 6:
             H.disp();
             break;

	}
	cout<<"\nMenu:\n\n1.Insert\n2.Search\n3.Delete\n4.Max cluster size\n5.Number of collisions\n6.Display\n0.Exit\n\nEnter choice:";
	cin>>c;
    }
	return 0;
}
