#include <stdio.h>
#include <gmp.h>
#include "GmpClass.hpp"
#include <string>

int main(void) {
  GmpClass *g=new GmpClass();
  char *buff;

  std::string safeBuff;

  fprintf(stdout,"GmpDemo\nApplication to demonstrate multiplication of two larget integers\n\n");
  g->Multiply();
  g->Print();

  g->setString("This is a test");
  fprintf(stdout,"Here is the string %s\n", g->getString());

  //The line below is a memory leak
  buff=g->getCopyString();
  fprintf(stdout,"Here is a copy of the string %s\n", buff);

  safeBuff=g->safeCopyString();
  fprintf(stdout, "Here is a safe copy of the string %s\n",safeBuff.c_str());

  delete(buff);
  delete(g);
  return 0;
}
