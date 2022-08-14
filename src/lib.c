#include "lib.h"

int myfun(bool a, int *b) {
  // int num = -1;

  if (b == NULL)
    return 1;
  else
    return 0;


  // if (b) {
  //   num = 0;
  // } else {
  //   num = 15 + num;
  // }

  // if (callback != 0) {
  //   ;
  //   ; // intentional extra-semicolon
  // }
  // if (callback == NULL) {
  //   return (*callback)(3); // intentional NULL dereference
  // } else {
  //   return 0;
  // }
  // return 42; // intentional dead code
}
