
#include <gmp.h>

#ifndef GMPCLASS_H_
#define CMPCLASS_H_

class GmpClass {
    public:
    void Multiply(); // Run Multiply
    void Print(); // Display result of multiply
    int setString(const char *a);
    char *getString();

    GmpClass(); // constructor
    ~GmpClass(); // ddescructor

    private:
    mpz_t x, y, result;
    char *buff=NULL;
    int sizeOfBuff;
    
};

#endif
