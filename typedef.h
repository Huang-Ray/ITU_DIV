
#if defined(_WIN64)
typedef short Word16;
typedef int Word32;
typedef int Flag;
#elif defined(__unix__) || defined(__unix)
typedef short Word16;
typedef int   Word32;
typedef int   Flag;
#else
#error  COMPILER NOT TESTED typedef.h needs to be updated, see readme
#endif