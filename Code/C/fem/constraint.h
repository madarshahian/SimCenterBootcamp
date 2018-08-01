#ifndef _CONSTRAINT
#define _CONSTRAINT 

#include <stdio.h>

typedef struct constraint {
  int tag;
  int nodeTag;
  int cnstr[3];
  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
void constraintSetup(Constraint *, int tag,int nodeTag, int cnstr1, int cnstr2,int cnstr3);

#endif
