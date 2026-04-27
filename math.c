#include "math.h"

double power(double base, double exp) {
    if (base == 0) return 0;
    if (exp == 0) return 1;

    double res2 = 0;
    double res1 = 1;
    double normalnum = (double)((long)exp);
    double decimal = exp - normalnum;

    // Without Decimal Calculation
    if(normalnum!=0.0){
        res1 = base;
        for(int l = 1; l<(int)normalnum;l++){
            res1*=base;
        }
    }
    // Decimal Calculation
    if(decimal != 0.0){
        double k = 1.0 / decimal;
        double guess = base / k;
        for (int i = 0; i < 30; i++) {
            //Calculate guess^(k-1)
            double guessn = 1.0;
            for (int j = 0; j < (int)k - 1; j++) {
                guessn *= guess;
            }
            //(1/k) * ((k-1)*guess + (base / guess^(k-1))) -> NewtonRoot formula
            res2 = (1/k) * ((k - 1.0) * guess + (base / guessn));
            guess = res2;
        }
    }
    return res2*res1;
}