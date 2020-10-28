#include <iostream>
#include "typedef.h"
#include "itu_div.h"



int main()
{
    Word16 res = 0;
    res = div_s(3000, 3100); // Q15


    std::cout << res << "\n";

    return 0;
}





