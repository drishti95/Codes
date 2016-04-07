%%
"\n"[\t]* {printf("\n");}
%%
int main()
{
yyin=fopen("abc.c","r");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
