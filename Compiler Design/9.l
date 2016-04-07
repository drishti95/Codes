%{
int i,coutn=0,max=0;
%}
%%
"\n"[\t]* {for(i=0;i<yyleng;i++) if(yytext[i]=='\t')coutn++; if(coutn>max) max=coutn;}
. {}
%%
int main()
{
yyin=fopen("abc.c","r");
yylex();
printf("max: %d", max);
return 0;
}
int yywrap()
{ 
return 1;
}
