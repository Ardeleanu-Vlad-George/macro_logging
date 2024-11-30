#ifndef _LOG_H_
#define _LOG_H_

#define DCR "DECLARED"
#define ASN "ASSIGNED"
#define VLF "VALUE OF"

#define ACT(TYPE, WHAT)\
  WHAT;\
  fprintf(LOGDST, TYPE":"#WHAT"\n")

#define SAY(FORMAT, VARIABLE)\
  fprintf(LOGDST, VLF":'"#VARIABLE"' is "FORMAT"\n", VARIABLE)

//CONSTANT
#ifndef LOGDST
    #include <stdio.h>
    #define LOGDST stdout
#endif

#endif//_LOG_H_
