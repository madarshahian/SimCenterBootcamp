#include "node.h"
#include "domain.h"
#include "constraint.h"

int main(int argc, char **argv) {
  Domain theDomain;
  theDomain.theNodes=0;
<<<<<<< HEAD

=======
>>>>>>> 4a77c05ee87ca227b998cabf22a1fb2ae8fe6dd5
  domainAddNode(&theDomain, 1, 0.0, 0.0);
  domainAddNode(&theDomain, 2, 0.0, 2.0);
  domainAddNode(&theDomain, 3, 1.0, 1.0);
  
  domainPrint(&theDomain);

  // get and print singular node
  printf("\nsingular node:\n");
  Node *theNode = domainGetNode(&theDomain, 2);
  nodePrint(theNode);
}
