#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Constraint : %d ", theConstraint->tag);
  printf("Cnstr: %d %d %d", theConstraint->cnstr[0], theConstraint->cnstr[1],theConstraint->cnstr[2]);
}

void constraintSetup(Constraint *theConstraint, int tag, int cnstr1,int cnstr2,int cnstr3) {
  theConstraint->tag = tag;
  theConstraint->nodeTag = nodeTage;
  theConstraint->cnstr[0] = cnstr1;
  theConstraint->cnstr[1] = cnstr2;
  theConstraint->cnstr[2] = cnstr3;
  theConstraint->next = NULL;
}
