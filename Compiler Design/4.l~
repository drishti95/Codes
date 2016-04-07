%{
int i;
%}
%%
[a-zA-Z0-9] {for(i=0;i<yyleng;i++) printf("%c",(yytext[i]));}
. {}
%%
int main()
{
yyin=fopen("abc.txt","r");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
