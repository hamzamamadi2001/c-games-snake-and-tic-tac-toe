#include<stdio.h>
void main (){
int i,j;

j=1;
while (j<=5)
{
    i=1;

 while(i<=29){
if(i==1||i==4||i==7||i==10||i==13||i==15||i==17||i==26||i==29)
printf("*");
else{
if(j==1){
    if(i==2||i==3||i==5||i==6||i==11||i==12||i==18||i==19||i==24||i==25)
    printf(" ");
    else printf("*");
}else if(j==2){
    if(i==22)
    printf("*");
    else
    printf(" ");
}else if(j==3){

if(i==5||i==6||i==14||i==16||i==11||i==12||i==18||i==19||i==25||i==24||i==23||i==20||i==22) printf(" ");
else printf("*");


}else if(j==4){

if(i==20) printf("*");
else printf(" ");
}else {
if(i==20||i==21||i==22||i==23) printf("*");
else
printf(" ");    





}
















}










i++;
 }
 printf("\n");
 j++;
}
















}