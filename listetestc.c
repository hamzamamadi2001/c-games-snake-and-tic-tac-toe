#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//define de liste 
struct person
{
   // char name[20];
    int age;
    //float tall;
    struct person *suivant;
    //struct preson *apres;
};
typedef struct person list;
void creeliste(list **tete){
//phase de entre information
list *ptr,*tete1=*tete;
ptr=(list*)malloc(sizeof(list));
printf("donne age");
scanf("%d",&ptr->age);
ptr->suivant=NULL;
if(*tete==NULL)
*tete=ptr;
else{
//il ya deux case 
//element dans le debuit 
/*ptr->suivant=*tete;
*tete=ptr;*/
//ajouter darenier

while(tete1->suivant!=NULL){
    tete1=tete1->suivant;
}
tete1->suivant=ptr;

}
}
void affichafg(list *tete){
int index=1;
if(tete==NULL){
    printf("la list est vide \n");
}
else{
while(tete!=NULL){
//printf("la maillon nombre %d est : \n",index);
//puts(tete->name);
printf("%d---->[%d]  ",index,tete->age);
//printf("la tall est %f  \n",tete->tall);
tete=tete->suivant;
index++;
}
}
}
void triparselection(list *tete){
list *ptr,*ptrmin;int s;
while(tete->suivant!=NULL){
ptr=tete->suivant;
ptrmin=tete;
while(ptr!=NULL){
if(ptrmin->age>ptr->age)
ptrmin=ptr;
ptr=ptr->suivant;
}
s=tete->age;
tete->age=ptrmin->age;
ptrmin->age=s;
tete=tete->suivant;
}
}

void main(){
list *tete=NULL;
int i;
for(i=1;i<=7;i++)
creeliste(&tete);
affichafg(tete);
printf("\n \n");
triparselection(tete);
affichafg(tete);

 }



/*


 void swap(int tableau[],int i,int j){
int s;
s=tableau[i];
tableau[i]=tableau[j];
tableau[j]=s;

 }*/