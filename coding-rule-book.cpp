// This rule book contains the Coding Practices and some tips, coding ways that freeBird follows

1. Correct way of using 'modulus' operation
   int result = a % n ;  // sometimes can give wrong value, when 'a < 0' or 'a' is of form 'b+c' which has chances of overflowing
   int result = (a%n + n)%n;  // correct way

2. Gcd of more 'n' numbers 
	gcd(a,b,c) = gcd( gcd(a,b), c) // same concept extends for 'n' numbers

