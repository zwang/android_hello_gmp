// add two rational numbers using gnu libgmp
// i.e. 1/2 + 1/3 => 5/6
#include "addrat.h"

#include <sstream>
#include <iostream>
using namespace std;

#include "gmp.h"

string addrat(unsigned long x_numerator, unsigned long x_denominator,
	unsigned long y_numerator, unsigned long y_denominator)
{
 mpq_t x, y, z;
 mpq_init( x );
 mpq_init( y );
 mpq_init( z );
 mpq_set_ui( x, x_numerator, x_denominator );
 mpq_set_ui( y, y_numerator, y_denominator );
 mpq_add( z, x, y);
 // gmpxx.h is easier, but haven't figured out how to build for android yet
 char out[50];
 gmp_snprintf((char*)out,49,"%Qu\n",z);
 return string(out);
}

/*
// test
main() {
  cout << gmp(3,4, 5,8); // 3/4 + 5/8
}
*/
