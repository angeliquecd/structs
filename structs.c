#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
struct first{
  char *a;
  double b; //vault
  double d; //bars
   double f; //beam
   double h;//floor
   double j;//all-around
 };
int changename(struct first *r, char *name){
  r->a=name;
  return 1;
}
int changescore(struct first *p, char *event, double score){
if (strcmp(event,"vault")==0){
  p->b=score;}
if (strcmp(event,"bars")==0){
p->d=score;}
if (strcmp(event,"beam")==0){
  p->f=score;}
if (strcmp(event,"floor")==0){
p->h=score;}
  p->j=p->b+p->d+p->f+p->h;//adjusts all-around score
  return 1;
}
int changescores(struct first *p,double vault, double bars, double beam, double floor){
    p->b=vault;
  p->d=bars;
    p->f=beam;
  p->h=floor;
    p->j=p->b+p->d+p->f+p->h;//adjusts all-around score
    return 1;
}
int printstats(struct first *p){
  printf("Name: %s\nVault:%f\nBars:%f\nBeam:%f\nFloor:%f\nAll-around:%f\n",p->a,p->b,p->d,p->f,p->h,p->j);
  return 1;
}
int makerandom(struct first *p){
srand((long)time(NULL));
int a =rand()%5;
if (a==0) p->a="Alice";
if (a==1) p->a="Mckenzie";
if (a==2) p->a="Barbara";
if (a==3) p->a="Julie";
if (a==4) p->a="Jamie";
changescores(p,7.1+0.1*(rand()%30),7.1+0.1*(rand()%30),7.1+0.1*(rand()%30),7.1+0.1*(rand()%30));
return 1;
}
int main(){
struct first a;
struct first *toa = &a;
struct first b;
struct first *tob = &b;
struct first c;
struct first *toc = &c;
printf("The struct shows a gymnast's name, along with her scores in vault, bars, beam, floor and all-around");
printf("\nScores are on a scale from 1 to 10, 10 being a perfect score. All-around scores are on a scale from 4 to 40 and are the sum of the other scores");
printf("\n\nSetting Linda's scores to 9.5, 9, 7.8 and 8.9\n");
printf("Printing her stats: \n");
changename(toa, "Linda");
changescore(toa,"vault",9.5);
changescore(toa,"bars",9);
changescore(toa,"beam",7.8);
changescore(toa,"floor",8.9);
printstats(toa);
printf("\n\nSetting just her vault score to 8.4\n");
changescore(toa,"vault",8.4);
printf("Printing her stats: \n");
printstats(toa);
printf("\n\nCreating a new random athlete and printing her stats:\n");
makerandom(tob);
printstats(tob);
return 1;
}
