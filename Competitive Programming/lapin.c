#include <stdio.h>
#include <string.h>
int main()
{
    int t,l,i,h,k,c=0;
    char ar[1000];
    int num[26];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&ar);
        l=strlen(ar);
          h=l/2;

            k=26;
            for(i=0;i<26;i++)
                num[i]=0;
            for(i=0;i<l;i++)
            {
               switch(ar[i])
                {

                case 'a':
                case 'A':k=0;break;
                case 'b':
                case 'B':k=1;break;
                case 'c':
                case 'C':k=2;break;
                case 'd':
                case 'D':k=3;break;
                case 'e':
                case 'E':k=4;break;
                case 'f':
                case 'F':k=5;break;
                case 'g':
                case 'G':k=6;break;
                case 'h':
                case 'H':k=7;break;
                 case 'i':
                case 'I':k=8;break;
                 case 'j':
                case 'J':k=9;break;
                 case 'k':
                case 'K':k=10;break;
                 case 'l':
                case 'L':k=11;break;
                 case 'm':
                case 'M':k=12;break;
                 case 'n':
                case 'N':k=13;break;
                 case 'o':
                case 'O':k=14;break;
                 case 'p':
                case 'P':k=15;break;
                 case 'q':
                case 'Q':k=16;break;
                 case 'r':
                case 'R':k=17;break;
                 case 's':
                case 'S':k=18;break;
                 case 't':
                case 'T':k=19;break;
                 case 'u':
                case 'U':k=20;break;
                 case 'v':
                case 'V':k=21;break;
                 case 'w':
                case 'W':k=22;break;
                 case 'x':
                case 'X':k=23;break;
                 case 'y':
                case 'Y':k=24;break;
                 case 'z':
                case 'Z':k=25;break;

                }
                if(i<h)
                    num[k]++;
                else if(i>h)
                    num[k]--;
                    else if(i==h && l%2==0)
                        num[k]--;

            }
            for(i=0;i<26;i++)
            {
                if(num[i]!=0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
                printf("\nYES");
            else
                printf("\nNO");
            c=0;
    }
   return 0;
}
