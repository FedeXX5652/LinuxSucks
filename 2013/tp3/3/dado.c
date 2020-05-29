#include <stdlib.h>
#include <time.h>

int dado(){
    srand(time(0));

    int res = 0;

    res =  rand()%6+1;

    return res;
}