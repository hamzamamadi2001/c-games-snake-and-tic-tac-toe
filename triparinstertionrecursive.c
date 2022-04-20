#include<stdio.h>
#include<stdlib.h>
void triparinsertionerc(int tableau[],int debuit , int tall ){
if(debuit>tall-1)return;
else{
petitri(tableau,debuit);
triparinsertionerc(tableau,debuit+1,tall);
}
}
void petitri(int tableau[],int index){
int s;
if(index==0)return;
else{
if(tableau[index]<tableau[index-1]){
s=tableau[index];
tableau[index]=tableau[index-1];
tableau[index-1]=s;
petitri(tableau,index-1);
}
return;
}

}
void main(){int i, *tableau,tall;
printf("donne moi le tall ");
scanf("%d",&tall);

tableau=(int*)malloc(tall*sizeof(int));
for(i=0;i<tall;i++){
printf("donne moi element [%d]  ",i);
scanf("%d",&tableau[i]);}

triparinsertionerc(tableau,1,tall);
printf("la nouvelle tableau insertion  est \n");
for(i=0;i<tall;i++){
    printf("tableu[%d]--->%d \n",i,tableau[i]);
}












 }