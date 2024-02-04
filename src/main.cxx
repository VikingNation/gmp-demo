#include <stdio.h>
#include <gmp.h>
#include "GmpClass.hpp"

int main(void) {
  GmpClass *g=new GmpClass();

  fprintf(stdout,"GmpDemo\nApplication to demonstrate multiplication of two larget integers\n\n");
  g->Multiply();

  g->Print();

  delete(g);
  return 0;
}
