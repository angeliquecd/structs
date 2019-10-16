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
 int changename(struct first *r, char *name);
 int changescore(struct first *p, char *event, double score);
 int changescores(struct first *p,double vault, double bars, double beam, double floor);
 int printstats(struct first *p);
 struct first * makerandom(struct first *p);
 
