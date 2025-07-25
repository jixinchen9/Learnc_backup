#ifndef GUARD_prime_list
#define GUARD_prime_list
//input header file

#include<iostream>
#include<string>
#include<vector>
#include<list>

//DECLARE a function which just makes a list of numbers
void populate_list(const int&, std::list<int>&);

//DECLARE the remove the multiples
void remove_multiples(std::list<int>&, std::list<int>::iterator);

//DECLARE the list iterator to advance the sieve
void advance_sieve(std::list<int>&, int);
#endif

//DEClare fucntion to factor the input with the primes list
std::list<int> find_factors(const std::list<int>&, const int);
/*
void remove_multiples(std::list<int>&, std::list<int>::iterator);
*/