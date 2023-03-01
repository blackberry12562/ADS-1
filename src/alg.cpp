// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
int k = 0;
for (int i = 1; i <= value; i++)
if (value % i == 0)
k += 1;
if (k == 2)
return true;
else
return false;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
if (value <= 1)
return 2;
int prime = value;
bool found = false;
while (!found) {
prime++;
if (checkPrime(prime))
found = true;
}
return prime;
}

uint64_t sumPrime(uint64_t hbound) {
int sum = 0;
for (int i = hbound; i >= 2; i--)
bool isPrime = checkPrime(i);
if (isPrime)
sum = sum + i;
return sum;
}
