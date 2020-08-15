double fact(int x) 
{                      

    double result;

    result = 1;

    while(x > 1) {
       result *= x;

       x--;
    }
    return result;
}
