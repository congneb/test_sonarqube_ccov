#include "lib.h"
int myfun(bool b, int (*callback)(int)) {
  int num = -1;

  if (b) {
    num = callback(callback(num));
  } else {
    num = 15 + num;
  }
  if (callback != 0) {
    ;
    ; // intentional extra-semicolon
  }
  if (callback == NULL) {
    return (*callback)(3); // intentional NULL dereference
  } else {
    return 0;
  }
  return 42; // intentional dead code
}
