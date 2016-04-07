%{
int i;
%}
keyword main|int|scanf|printf
%%
{keyword} {for(i=0;i<yyleng;i++) printf("%c",(yytext[i]));}
. {for(i=0;i<yyleng;i++) printf("%c",toupper(yytext[i]));}

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
