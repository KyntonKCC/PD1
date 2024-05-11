#include <stdio.h>
void fraction_adder(int a_numerator, int a_denominator, int b_numerator, int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr);
int main() {
  int a_numerator, a_denominator, b_numerator, b_denominator;
  scanf("%d%d%d%d", &a_numerator, &a_denominator, &b_numerator, &b_denominator);
  int c_numerator, c_denominator;
  fraction_adder(a_numerator, a_denominator, b_numerator, b_denominator, &c_numerator, &c_denominator);
  printf("%d/%d\n", c_numerator, c_denominator);
}

void fraction_adder(int a_numerator, int a_denominator, int b_numerator, int b_denominator, int *c_numerator_ptr, int *c_denominator_ptr) {
    * c_numerator_ptr = a_numerator * b_denominator + b_numerator * a_denominator;
    * c_denominator_ptr = a_denominator * b_denominator;
    int max = 0;
    for(int i = 1; i < * c_numerator_ptr && i < * c_denominator_ptr; i++)
        if(* c_numerator_ptr % i == 0 && * c_denominator_ptr % i == 0)
            max = i;
    * c_numerator_ptr /= max;
    * c_denominator_ptr /= max;
  return;
}