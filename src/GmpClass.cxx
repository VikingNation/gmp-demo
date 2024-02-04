#include "GmpClass.hpp"

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

GmpClass::~GmpClass () {
  mpz_clear(x);
  mpz_clear(y);
  mpz_clear(result);
}
