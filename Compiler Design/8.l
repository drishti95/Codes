%%
"scanf" {fprintf(yyout,"readf");}
"printf" {fprintf(yyout,"writef");}
%%
int main()
{
yyin=fopen("abc.c","r");
yyout=fopen("out.c","w");
yylex();
return 0;
}
int yywrap()
{
return 1;
}
