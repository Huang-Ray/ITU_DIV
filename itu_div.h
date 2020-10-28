#include <iostream>
#include "typedef.h"



#define MIN_16 ((Word16)0x8000)
#define MAX_16 ((Word16)0x7fff)
#define MIN_32 ((Word32)0x80000000L)
#define MAX_32 ((Word32)0x7fffffffL)

Word16 extract_l(Word32 L_var1);
Word16 sature(Word32 L_var1);
Word16 add(Word16 var1,Word16 var2);
Word32 L_sub(Word32 L_var1, Word32 L_var2);
Word32 L_deposit_l(Word16 var1);
Word16 div_s(Word16 var1, Word16 var2);