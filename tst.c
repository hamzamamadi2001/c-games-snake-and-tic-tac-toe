#include <stdio.h>
void carre2(int f,int r){
int i,j;

for(i=1;i<=f;i++){
for(j=1;j<=r;j++){
if(i==1||i==f||j==1||j==r)printf("*");

else
printf(" ");

}

printf("\n");

}

}

void carre(int f,int r){
int i,j;
if(r==2) return ;
for(i=1;i<=f;i++){
for(j=1;j<=r;j++){
if(i==1||i==f||j==1||j==r)printf("*");

else if(i==4&&j==4){
 
carre2(5,5);
printf(" ");
}
else
printf(" ");
}

printf("\n");

}

}
void main(){
carre(10,10);
a:;


}