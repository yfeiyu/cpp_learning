#include "Chapter6.h"

int fact(int val)
{
    int ret = 1;
    for (; val > 1; ret *= val--);
    return ret;
}
