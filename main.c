#include "log.h"
#include <stdio.h>

int main(void){
  ACT(DCR, int a=1);
  ACT(ASN, a=9);
  SAY("%d", a);
  return 0;
}
