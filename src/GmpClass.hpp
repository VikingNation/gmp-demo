
#include <gmp.h>

#ifndef GMPCLASS_H_
#define CMPCLASS_H_

class GmpClass {
    public:
    void Multiply(); // Run Multiply
    void Print(); // Display result of multiply
    int setString(const char *a);
    char *getString();
    char *getCopyString();

    const std::string safeCopyString();
    GmpClass(); // constructor
    ~GmpClass(); // ddescructor

    private:
    mpz_t x, y, result;
    char *buff=NULL;
    int sizeOfBuff;
    
};

#endif
