# Purpose
Developing a tiny prototype of a 'logging' library that can write the line of code being executed and it's effects on the variables of the
 program. You remember doing such a library once, but lost it when your last hard disk got corrupted. It's saved on GitHub also, to prevent
 such nonsense.
# Bonus
None.
# MadeWith
- GCC; version 9.4.0
- GNU Make; version 4.2.1
- C; standard ISO C99
# ExampleOfUsage
The next sequence of code:
```
  ACT(DCR, int a=1);
  ACT(ASN, a=9);
  SAY("%d", a);
```
Produces the following output:
```
DECLARED:int a=1
ASSIGNED:a=9
VALUE OF:'a' is 9 
```
