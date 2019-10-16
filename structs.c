#include 
struct first{
  double b; //vault
  double d; //bars
   double f; //beam
   double h;//floor
   double j;//all-around
 };
int changescore(struct first *p, char *event, double score){
if (strcmp(event,"vault")==0){
  //*(s.b)=score;
  p->b=score;
}
if (event=="bars"){
//  *(s.d)=score;
p->d=score;
}
if (event=="beam"){
  //*(s.f)=score;
  p->f=score;
}
if (event=="floor"){
//  *(s.h)=score;
p->h=score;
}
  p->j=p->b+p->d+p->f+p->h;//adjusts all-around score
  return 1;
}
//int getvault()
int main(){
struct first a;
struct first b;
struct first c;
printf("The Struct shows a gymnast's scores in vault, bars, beam, floor and all-around");
printf("\nScores are on a scale from 1 to 10, 10 being a perfect score. All-around scores are on a scale from 4 to 40 and are the sum of the other scores");
return 1;
}
