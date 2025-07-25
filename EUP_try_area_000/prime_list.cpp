#include "prime_list.h"
#include<iostream>
#include<string>
#include<vector>
#include<list>


void populate_list(const int& input_number, std::list<int>& integers_to_input) {
	long long to_add = 2;

	while (to_add <= input_number) {
		integers_to_input.push_back(to_add++);
	}

}

void remove_multiples(std::list<int>& int_list, std::list<int>::iterator i) {
	/*
	we remove the multiples of the starting iterator value,
	whatever the starting iterator is,
	we skip over the value and keep it bc the nature of the method ensures it is a prime
	*/
	int divisor = *i;
	i++;

	while (i != int_list.end()) {
		if ((*i % divisor) == 0)
			i = int_list.erase(i);

		else
			i++;
	}
}

void advance_sieve(std::list<int>& int_list, int stop_sieve) {
	std::list<int>::iterator i = int_list.begin();

	while ((*i) * (*i) <= stop_sieve) {
		remove_multiples(int_list, i);
		i++;
	}
}

std::list<int> find_factors(const std::list<int>& prime_list, const int input_int) {
	std::list<int> factors;
	std::list<int>::const_iterator prime_iter = prime_list.begin();
	int dividend = input_int;

	while (dividend != 1) {
		
		if (dividend % (*prime_iter) == 0){
			factors.push_back(*prime_iter);
			dividend = dividend / (*prime_iter);
		}
		else
			++prime_iter;
	}
	return factors;
}
/*


void remove_multiples(std::list<int>& int_list, std::list<int>::iterator& i) {
	int divisor = *i;
	i++;

	while (i != int_list.end()) {
		if ((*i % divisor) == 0)
			int_list.erase(i);

		else
			i++;
	}
}
*/