#include <stdio.h>
#include <gmp.h>
#include "GmpClass.hpp"

int main(void) {
  GmpClass *g=new GmpClass();

  g->Multiply();

  g->Print();

  delete(g);
  return 0;
}
