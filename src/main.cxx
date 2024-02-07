#include <stdio.h>
#include <gmp.h>
#include "GmpClass.hpp"

int main(void) {
  GmpClass *g=new GmpClass();

  fprintf(stdout,"GmpDemo\nApplication to demonstrate multiplication of two larget integers\n\n");
  g->Multiply();
  g->Print();

  g->setString("This is a test");
  fprintf(stdout,"Here is the string %s\n", g->getString());

  delete(g);
  return 0;
}
