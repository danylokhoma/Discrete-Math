#ifndef COMB_H
#define COMB_H

// Обчислення (Частина 1)
unsigned long long factorial(int n);
unsigned long long A(int n, int k);  // Розміщення без повторень
unsigned long long _A(int n, int k); // Розміщення з повтореннями
unsigned long long C(int n, int k);  // Сполучення без повторень
unsigned long long _C(int n, int k); // Сполучення з повтореннями

// Генерування (Частини 2 і 3)
// A - масив, n - кількість елементів масиву/множини
void GenPerm(int *A, int n);
void GenComb(int *A, int n, int k);

#endif