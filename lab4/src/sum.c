#include "sum.h"
int Sum(const struct Sum_Args *args) {
  int sum = 0;
  for (int i = args->begin; i < args->end; i++)
  {
      sum += args->array[i];
  }
  return sum;
}

