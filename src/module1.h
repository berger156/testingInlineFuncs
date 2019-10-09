#ifndef _MODULE1_H
#define _MODULE1_H

#ifdef USE_INLINE_FUNCTIONS
inline int addIntegers(int a, int b) {return a + b;}
#else
int addIntegers(int a, int b);
#endif

int addThenMultiply(int a, int b, int c);

#endif // _MODULE1_H
