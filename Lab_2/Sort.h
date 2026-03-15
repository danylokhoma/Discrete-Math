#ifndef SORT_H
#define SORT_H

typedef int datatype;

void custom_swap(datatype &a, datatype &b);
void show(datatype *arr, int size);
int MinItem(datatype *arr, int start, int end);
int MaxItem(datatype *arr, int start, int end);

void SortBubble(datatype *arr, int left, int right);
void SortInsertion(datatype *arr, int left, int right);
void SortSelection(datatype *arr, int left, int right);

int readArray(datatype *arr);

#endif