#include "factor.h"
#include "primeFactor.h"
using namespace std;

int main() {
    Factor f1;
    f1.readN();
    cout << "From the Factor class:" << endl;
    f1.printFactors();

    PrimeFactor pf1;
    cout << "From the PrimeFactor class:" << endl;    
    pf1.setN(f1.getN());
    pf1.printFactors();    
    pf1.printPrimeFactors();

    PrimeFactor pf2(120);
    cout << "From the PrimeFactor class with a given value of 120:" << endl;    
    pf2.printFactors();
    pf2.printPrimeFactors();

    return 0;
}
