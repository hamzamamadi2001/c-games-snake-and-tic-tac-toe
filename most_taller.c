#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void most_taller(char table[],int longtext,int *star_max,int *long_max){
    *long_max=1;
    printf("la longeur de la texte est %d \n",longtext);
int i=0,longword,start;
while(i<longtext){//&&
   longword=0;
while(table[i]!=' ' &&table[i]!='.' &&table[i]!=';'&&table[i]!=','&&table[i]!=':'&&table[i]!='\0'){
    if(longword==0)
        start=i;
i++;
longword++;
}
if(longword>= *long_max){
*(long_max)=longword;
*(star_max)=start;
}
i++;
}
}
void main(){    int start_max=0,long_max,i=0,n;
char text[100];
gets(text);
text[strlen(text)]='\0';
    most_taller(text,strlen(text),&start_max,&long_max);
 i=0;
 while(i<long_max){
putchar(text[start_max+i]);
i++;
 }
}