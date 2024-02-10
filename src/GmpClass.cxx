#include "GmpClass.hpp"

#include <stdlib.h>
#include <string.h>
#include <string>

GmpClass::GmpClass() {
  my = (Storage *) malloc(sizeof(Storage));
  
  mpz_init_set_str(my->x, "7612058254738945", 10);
  mpz_init_set_str(my->y, "9263591128439081", 10);
  mpz_init(my->result);

}

void GmpClass::Multiply () {
   mpz_mul(my->result, my->x, my->y);
}

void GmpClass::Print () {
      gmp_printf("    %Zd\n"
             "*\n"
             "    %Zd\n"
             "--------------------\n"
             "%Zd\n", my->x, my->y, my->result);


}

char *GmpClass::getString(){
	return buff;
}

int GmpClass::setString(const char *a) {
	sizeOfBuff = strlen(a)+1;
	buff=(char *) malloc(sizeOfBuff);
	strcpy(buff, a);

	//fprintf(stdout, "buff = %s\n", buff);
	//fprintf(stdout, "Size of buff = %i\n", sizeOfBuff);
	return 0;
}

// The following leads to a memory leak
char *GmpClass::getCopyString() {
	char *temp=NULL;

	if (buff != NULL) {
		temp=(char *)malloc(strlen(buff)+1);
		strcpy(temp,buff);
	}
	return temp;
}

// The following isa safe copy
const std::string GmpClass::safeCopyString() {
	std::string s(buff);
	return s;
}

GmpClass::~GmpClass () {
  mpz_clear(my->x);
  mpz_clear(my->y);
  mpz_clear(my->result);
  free(my);
  if (buff != NULL) {
    free(buff);
  }
}
