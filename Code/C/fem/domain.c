#include <stdio.h>
#include <stdlib.h>
#include "domain.h"
#include "node.h"
#include "constraint.h"

void domainPrint(Domain *theDomain) {
  printf("The Nodes:\n");
  domainPrintNodes(theDomain);
}

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2) {
  Node *theNextNode = (Node *)malloc(sizeof(Node));
  nodeSetup(theNextNode, tag, crd1, crd2);

  if (theDomain->theNodes != NULL) {
    theNextNode->next = theDomain->theNodes;
  }
  theDomain->theNodes = theNextNode;
}

void domainPrintNodes(Domain *theDomain) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentNode);
    theCurrentNode = theCurrentNode->next;
  };
}

Node *domainGetNode(Domain *theDomain, int nodeTag) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    if (theCurrentNode->tag == nodeTag) {
      return theCurrentNode;
    } else {
      theCurrentNode = theCurrentNode->next;
    }
  };
  return NULL;
}
void domainAddConstraint(Domain *theDomain, int tag, int nodeTag, int cnstr1,int cnstr2,int cnstr3) {
  Constraint *theNextConstraint = (Constraint *)malloc(sizeof(Constraint));
  constraintSetup(theNextConstraint, tag, nodeTag, cnstr1,cnstr2,cnstr3);

  if (theDomain->theConstraint != NULL) {
    theNextConstraint->next = theDomain->theConstraint;
  }
  theDomain->theConstraint = theNextConstraint;
}
void domainPrintNodes(Domain *theDomain) {
  Constraint *theCurrentConstraint = theDomain->theConstraints;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentConstraint);
    theCurrentConstraint = theCurrentConstraint->next;
  };
}
Constraint *domainGetConstraint(Domain *theDomain, int constraintTag) {
  Constraint *theCurrentConstraint = theDomain->theConstraint;
  while (theCurrentConstraint != NULL) {
    if (theCurrentConstraint->tag == constraintTag) {
      return theCurrentConstraint;
    } else {
      theCurrentConstraint = theCurrentConstraint->next;
    }
  };
  return NULL;
}
