
#include <gmp.h>

#ifndef GMPCLASS_H_
#define CMPCLASS_H_

class GmpClass {
    public:
    void Multiply(); // Run Multiply
    void Print(); // Display result of multiply
    GmpClass(); // constructor
    ~GmpClass(); // ddescructor

    private:
    mpz_t x, y, result;
    
};

#endif
