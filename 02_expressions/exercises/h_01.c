#include <stdio.h>
#include <limits.h>  // for Integers 
#include <float.h>   // for Float

int main() {
    printf("Char:\n");
    printf("  Signed char min: %d\n", SCHAR_MIN);
    printf("  Signed char max: %d\n", SCHAR_MAX);
    printf("  Unsigned char max: %u\n", UCHAR_MAX);

    printf("\nShort int:\n");
    printf("  Signed short min: %d\n", SHRT_MIN);
    printf("  Signed short max: %d\n", SHRT_MAX);
    printf("  Unsigned short max: %u\n", USHRT_MAX);

    printf("\nInt:\n");
    printf("  Signed int min: %d\n", INT_MIN);
    printf("  Signed int max: %d\n", INT_MAX);
    printf("  Unsigned int max: %u\n", UINT_MAX);

    printf("\nLong int:\n");
    printf("  Signed long min: %ld\n", LONG_MIN);
    printf("  Signed long max: %ld\n", LONG_MAX);
    printf("  Unsigned long max: %lu\n", ULONG_MAX);

    printf("\nFloat and Double:\n");
    printf("  Float min: %e\n", FLT_MIN);
    printf("  Float max: %e\n", FLT_MAX);
    printf("  Double min: %e\n", DBL_MIN);
    printf("  Double max: %e\n", DBL_MAX);
    printf("  Long double min: %Le\n", LDBL_MIN);
    printf("  Long double max: %Le\n", LDBL_MAX);

    return 0;
}
