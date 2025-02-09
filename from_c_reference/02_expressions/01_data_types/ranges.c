#include <stdio.h>
#include <limits.h>  // Integer turlarining chegaralari
#include <float.h>   // Suzuvchi nuqta turlarining chegaralari

int main() {
    // Integer turlari
    printf("Integer turlarining minimal va maksimal qiymatlari:\n");
    printf("CHAR_MIN  : %d\n", CHAR_MIN);    // char minimal qiymati
    printf("CHAR_MAX  : %d\n", CHAR_MAX);    // char maksimal qiymati
    printf("INT_MIN   : %d\n", INT_MIN);     // int minimal qiymati
    printf("INT_MAX   : %d\n", INT_MAX);     // int maksimal qiymati
    printf("LONG_MIN  : %ld\n", LONG_MIN);   // long minimal qiymati
    printf("LONG_MAX  : %ld\n", LONG_MAX);   // long maksimal qiymati
    printf("LLONG_MIN : %lld\n", LLONG_MIN); // long long minimal qiymati
    printf("LLONG_MAX : %lld\n", LLONG_MAX); // long long maksimal qiymati
    printf("UINT_MAX  : %u\n", UINT_MAX);    // unsigned int maksimal qiymati

    // Suzuvchi nuqta turlari
    printf("\nSuzuvchi nuqta turlarining minimal va maksimal qiymatlari:\n");
    printf("FLT_MIN   : %e\n", FLT_MIN);     // float minimal qiymati
    printf("FLT_MAX   : %e\n", FLT_MAX);     // float maksimal qiymati
    printf("DBL_MIN   : %e\n", DBL_MIN);     // double minimal qiymati
    printf("DBL_MAX   : %e\n", DBL_MAX);     // double maksimal qiymati
    printf("LDBL_MIN  : %Le\n", LDBL_MIN);   // long double minimal qiymati
    printf("LDBL_MAX  : %Le\n", LDBL_MAX);   // long double maksimal qiymati

    return 0;
}
