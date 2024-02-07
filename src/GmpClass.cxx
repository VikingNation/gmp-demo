#include "GmpClass.hpp"

#include <stdlib.h>
#include <string.h>
#include <string>

GmpClass::GmpClass() {

  mpz_init_set_str(x, "7612058254738945", 10);
  mpz_init_set_str(y, "9263591128439081", 10);
  mpz_init(result);

}

void GmpClass::Multiply () {
   mpz_mul(result, x, y);
}

void GmpClass::Print () {
      gmp_printf("    %Zd\n"
             "*\n"
             "    %Zd\n"
             "--------------------\n"
             "%Zd\n", x, y, result);


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
  mpz_clear(x);
  mpz_clear(y);
  mpz_clear(result);
  if (buff != NULL) {
    free(buff);
  }
}
