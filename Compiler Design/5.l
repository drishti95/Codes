%{
int i=0;
%}

%%
"//"[A-Za-z0-9\t ]* {i++;}
%%
int main()
{
yyin=fopen("abc.c","r");
yylex();
printf("%d",i);
return 0;
}
int yywrap()
{
return 1;
}
