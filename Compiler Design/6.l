%{
int i=0,x;
%}

%%
"//"[A-Za-z0-9\t ]* {i++;}
"/*"[A-Za-z0-9\t\n ]*"*/" {for(x=0;x<yyleng;x++){if(yytext[x ]=='\n') i++;}i++;}
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
