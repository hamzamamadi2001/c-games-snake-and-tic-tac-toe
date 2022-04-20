#include <stdio.h>
int recuresive_min_indice(int t[],int tall ,int debit ){
  if(debit==tall-1) return debit;
else {
   if(t[recuresive_min_indice(t,tall,debit+1)]<t[debit])
return recuresive_min_indice(t,tall,debit+1);
else
return debit;
}
}
void recursive_tri_par_selection(int t[],int tall ,int debit){
    int a;
if(debit==tall-1)
return ;
else {
a=t[recuresive_min_indice(t,tall,debit)];
t[recuresive_min_indice(t,tall,debit)]=t[debit];
t[debit]=a;
recursive_tri_par_selection(t,tall,debit+1);
}
}
void main () {
int t[10];
int i=0;
for(i=0;i<10;i++){
    scanf("%d",&t[i]);
}
recursive_tri_par_selection(t,10,0);

for(i=0;i<10;i++)
printf("%d ",t[i]);

}