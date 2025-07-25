// EUP_try_area_000.cpp : Defines the entry point for the application.
//

#include "EUP_try_area_000.h"
#include "prime_list.h"
using namespace std;

int main()
{
	cout << "Hello Jixin, input a number;;\n" << endl;
	//typedef unsigned long long large_number;

	int target;

	scanf("%d", &target);

	std::list<int> prime_list;
	
	populate_list(target, prime_list);
		
	advance_sieve(prime_list, target);
	//typedef std::list<long long>::iterator intlistiter;
	
	std::list<int> prime_factors = find_factors(prime_list, target);
	
	for (std::list<int>::iterator i = prime_factors.begin(); i != prime_factors.end(); ++i) {
		cout << *i << endl;
	}
		
	return 0;
}
/*
advance_sieve(start_list, sieve_stop);
	

typedef std::list<int>::iterator intlistiter;
std::list<int>::iterator first_iterator = start_list.begin();
*/


/*
* To solve EP3, we inplement sieve of eratothenes:
* 
* find all the primes smaller than input
* 1. create a list of integers up to input number
* 2. remove the number 1 which is not a prime
* 3. identify first prime, which is 2, and remove its multiples which are smaller than input num
* 4. go to the next prime and remove multiples
* 5. continue in this vein until the prime we are on is greater than the square root of the input, or conversely, the square of the prime is greater than the input
* 
* start to factor input using division
* 1. divide input by smallest prime in list
* 2. if remainder is zero, store the prime
*	20. divide the dividend by smallest prime again
* 3. if remainder is non zero, try dividing the next prime in the list
*	30. if next prime whole divides, divide again with the smallest prime which is now the next prime
* 
*/
