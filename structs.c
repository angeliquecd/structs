#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
  //*(s.b)=score;
  p->b=score;
}
if (strcmp(event,"bars")==0){
//  *(s.d)=score;
p->d=score;
}
if (strcmp(event,"beam")==0){
  //*(s.f)=score;
  p->f=score;
}
if (strcmp(event,"floor")==0){
//  *(s.h)=score;
p->h=score;
}
  p->j=p->b+p->d+p->f+p->h;//adjusts all-around score
  return 1;
}
int printstats(struct first *p){
  printf("Name: %s\nVault:%f\nBars:%f\nBeam:%f\nFloor:%f\nAll-around:%f\n",p->a,p->b,p->d,p->f,p->h,p->j);
  return 1;
}
//int getvault()
int main(){
struct first a;
struct first *toa = &a;
struct first b;
struct first *tob = &b;
struct first c;
struct first *toc = &c;
printf("The Struct shows a gymnast's name, along with her scores in vault, bars, beam, floor and all-around");
printf("\nScores are on a scale from 1 to 10, 10 being a perfect score. All-around scores are on a scale from 4 to 40 and are the sum of the other scores");
printf("\nSetting Linda's scores to 9.5, 9, 7.8 and 8.9\n");
printf("Printing her stats: \n");
changename(toa, "Linda");
changescore(toa,"vault",9.5);
changescore(toa,"bars",9);
changescore(toa,"beam",7.8);
changescore(toa,"floor",8.9);
printstats(toa);
return 1;
}
