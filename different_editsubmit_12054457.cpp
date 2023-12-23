#include <iostream>
#include <iomanip>
#include <gmp.h>

void calculatePi(int precision) {
    mpf_t pi;
    mpf_init2(pi, precision);

    mpf_t sqrt2;
    mpf_init2(sqrt2, precision);
    mpf_sqrt_ui(sqrt2, 2);

    mpf_t numerator;
    mpf_init2(numerator, precision);

    mpf_t denominator;
    mpf_init2(denominator, precision);

    mpf_t term;
    mpf_init2(term, precision);

    mpf_set_ui(pi, 0);

    // Ramanujan's formula for pi
    for (int k = 0; k < precision; ++k) {
        mpf_mul_ui(numerator, numerator, 4 * k);
        mpf_set_ui(denominator, 1);
        mpf_mul_ui(denominator, denominator, k);
        mpf_mul_ui(denominator, denominator, k);
        mpf_mul_ui(denominator, denominator, k);

        mpf_ui_sub(numerator, 1103 + 26390 * k, numerator);
        mpf_set(term, numerator);
        mpf_div(term, term, denominator);

        mpf_pow_ui(term, term, 2 * k + 1);
        if (k % 2 == 1) {
            mpf_neg(term, term);
        }

        mpf_add(pi, pi, term);
    }

    mpf_mul_ui(pi, pi, 2);
    mpf_div_ui(pi, pi, 9801);
    mpf_sqrt(pi, pi);
    mpf_div(pi, sqrt2, pi);

    std::cout << std::fixed << std::setprecision(precision) << pi << std::endl;

    mpf_clear(pi);
    mpf_clear(sqrt2);
    mpf_clear(numerator);
    mpf_clear(denominator);
    mpf_clear(term);
}

int main() {
    int precision = 1000; // Number of decimal places
    calculatePi(precision);

    return 0;
}
