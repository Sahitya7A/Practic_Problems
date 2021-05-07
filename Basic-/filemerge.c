#include<stdio.h>
void main()
{
FILE*fp=fopen("er.txt","r");
FILE*fp1=fopen("r.txt","r");
FILE*fp2=fopen("w.txt","w");
char ch;
while((ch=fgetc(fp))!=EOF)
{
fputc(ch,fp2);
}
while((ch=fgetc(fp1))!=EOF)
{
fputc(ch,fp2);
}
fclose(fp);
fclose(fp1);
fclose(fp2);
}
