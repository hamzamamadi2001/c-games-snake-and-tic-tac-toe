#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<termios.h>
static struct termios old, current;
typedef struct doda {
  int x;
  int y;
  struct doda *precedent;
 struct doda *apres;
}doda;
int is_here(int x,int y,doda *tete){

while(tete!=NULL){

if(tete->x==x&&tete->y==y)
return 1;

tete=tete->precedent;

}
return 0;








}
int longeur_doda(doda *hello){
  int log=0;
while(hello->precedent!=NULL){
  log++;
  hello=hello->precedent;
}

return log+1;



}
/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  current = old; /* make new settings same as old settings */
  current.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) {
      current.c_lflag |= ECHO; /* set echo mode */
  } else {
      current.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &current); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void) 
{
  return getch_(1);
}
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 
void triangl_snake(int *longeur,int *r1,int *r2,doda **tete  , doda *hello){

int i,j,k;
for(i=1;i<=40;i++){
for(j=1;j<=100;j++){
if(i==1||i==40||j==1||j==100)
printf("*");
else if(is_here(j,i,hello)){
printf("@");
}
else if(i==*r2&&j==*r1)
printf("#");
else if(hello->x==*r1&& hello->y==*r2){
 printf(" ");
newdoda(tete,*r1,*r2);
*r1=(rand()%50);
*r2=(rand()%30);
*(longeur)=longeur_doda(hello);
printf("la long est %d ",longeur_doda(hello));
}
else printf(" ");
}
printf("\n");
}
}
void newdoda(doda **tete,int r1,int r2){
doda *newnew;
newnew=(doda *)malloc(sizeof(doda));
newnew->x=r1;
newnew->y=r2;
newnew->precedent=*tete;
newnew->apres=NULL;
(*tete)->apres=newnew;
*tete=newnew;
}
void copy_the_vlaue(doda *hello){
while(hello->precedent!=NULL){
  hello=hello->precedent;
}
printf("la velur %d -- %d\n",hello->x,hello->y);
printf("here 1\n");
while(hello->apres!=NULL){
hello->x=hello->apres->x;
hello->y=hello->apres->y;
hello=hello->apres;
}
printf("here 2\n");
}
int  main(){
  int r1,r2,i;
  srand((unsigned int ) time(NULL));
r2=(rand()%30);
  r1=(rand()%50);
 int longeur=1;
doda start,start1,start2;
start.x=r1;
start.y=r2;
start1.x=r1;
start1.y=r2+1;
start2.x=r1;
start2.y=r2+2;
start.precedent=&start1;
start.apres=NULL;
start1.precedent=&start2;
start1.apres=&start;
start2.precedent=NULL;
start2.apres=&start1;
doda *tete=&start,*hello;
  char direction='q'; 
 //triangl_snake(&longeur,&r1,&r2,&tete,tete);
a:;
delay(1);
system("clear");
  triangl_snake(&longeur,&r1,&r2,&tete,tete);
  copy_the_vlaue(tete);
direction=getche();
 if(direction=='q')
(tete->x)--;
if(direction=='s')
(tete->y)++;
if(direction=='d')
(tete->x)++;
if(direction=='z')
(tete->y)--;
if(tete->x!=1&&tete->x!=100&&tete->y!=1&&tete->y!=40)goto a;
printf("you losse !!!!!! ");
return 0;
}