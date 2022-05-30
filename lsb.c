#include <stdio.h>
#include <stdint.h>
uint8_t bit = 0;
int get_second_lsb(int x){
  uint8_t bit =  (x >> 2) & 1U;
  printf("The second lsb bit of %d is %d\n",x,bit);
  if(x == 0)
  {
    return 0;
  }
  else{
    return (get_second_lsb(--x));
  }
}
int main(void) {
  int number = 200;
  get_second_lsb(number);
  return 0;
}