#include<stdio.h>
#include<stdlib.h>
// la definition de la fonction 
int recursive_somme(int tableau[],int tall , int debit){
if(tall-1==debit){   
return tableau[debit];
}
else{
if(tableau[debit]<recursive_somme(tableau,tall,debit+1)) return tableau[debit];
else
return recursive_somme(tableau,tall,debit+1);
}
}
void main (){
    int n;
    int *tableau;
  printf("donne moi la longeur de la tabelau ");
  scanf("%d",&n);  
tableau=(int*)malloc(n*sizeof(int));
int i;
for(i=0;i<n;i++){
    printf("donne moi le element[%d]  ",i);
    scanf("%d",&tableau[i]);
}
// la utilisation de la fonction 
printf(" la min est == %d",recursive_somme(tableau,n,0));
/* remaeque ==> pour exercice de nombre positive change [<]-->[>]*/ 
}