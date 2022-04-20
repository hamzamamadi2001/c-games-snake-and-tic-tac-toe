#include<stdio.h>
#include<stdlib.h>

//here we will draw the table of the game 
void table_X_O(char choise,int place,char mat[]){
int i,j,k;
mat[place-1]=choise;
for(i=1;i<=19;i++){
for(j=1;j<=19;j++){

if(j==1||j==7||j==13||j==19||i==1||i==7||i==19||i==13){ printf("*");}
else if(i==4&&j==4) {
{
printf("%c",mat[i-4]);
}
}
else  if(i==4&&j==10) {
  printf("%c",mat[i-3]); 

}else if(i==4&&j==16){
        printf("%c",mat[i-2]);    

} 
else if(i==10&&j==4) { 
       {printf("%c",mat[i-7]);}

}else if(i==10&&j==10){
         printf("%c",mat[i-6]);

}else if(i==10&&j==16){
        printf("%c",mat[i-5]);

}else if(i==16&&j==4)
        {printf("%c",mat[i-10]);}

else  if(i==16&&j==10)
       {printf("%c",mat[i-9]);}

else if(i==16&&j==16)
        {printf("%c",mat[i-8]);}
else printf(" ");

}
printf("\n");
}

}

void main(){
    char mat[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char start;
int place;
printf("start by what x or o ? \n");
scanf("%c",&start);
printf("donne mo le place ");
scanf("%d",&place);
do{
    table_X_O(start,place,mat);
//table_X_O(start,place,mat);
if(start=='x'|| start=='X')
start='o';
else if(start=='o'|| start=='O')
start='x';
else
printf("le lettre nest pas valide \n");
if((mat[0]==mat[1]&&mat[1]==mat[2])){
if(mat[0]!=' '){printf("le win est %c",mat[0]); break;      } 
}
if((mat[0]==mat[4]&&mat[4]==mat[8])){
if(mat[0]!=' '){printf("le win est %c",mat[0]); break;      } 
}
if((mat[2]==mat[4]&&mat[6]==mat[4])){
if(mat[2]!=' '){printf("le win est %c",mat[2]); break;      } 
}
if((mat[6]==mat[7]&&mat[7]==mat[8])){
if(mat[6]!=' '){printf("le win est %c",mat[6]); break;      } 
}
if((mat[3]==mat[4]&&mat[4]==mat[5])){
if(mat[3]!=' '){printf("le win est %c",mat[3]); break;      } 
}
if((mat[0]==mat[3]&&mat[3]==mat[6])){
if(mat[0]!=' '){printf("le win est %c",mat[0]); break;      } 
}
if((mat[2]==mat[5]&&mat[5]==mat[8])){
if(mat[5]!=' '){printf("le win est %c",mat[5]); break;      } 
}
if((mat[4]==mat[1]&&mat[4]==mat[7])){
if(mat[7]!=' '){printf("le win est %c",mat[7]); break;      } 
}
printf("donne mo le place ");
scanf("%d",&place);
system("clear");
}while(1);











}