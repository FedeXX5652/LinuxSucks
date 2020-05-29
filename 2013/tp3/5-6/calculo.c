float div(float x, float y)
{                      
    return x / y;
}

float mult(float x, float y)
{                      
    return x * y;
}

float suma(float x, float y)
{                      
    return x + y;
}

float resta(float x, float y)
{                      
    return x - y;
}




float operator (long int a, long int b, char op){


float a2 = (float)a;
float b2 = (float)b;
float result;


if (op == '+'){

    result = suma(a2,b2);
}

else if(op == '-'){

    result = resta(a2,b2);
}

else if (op == '*'){

    result = mult(a2,b2);    
}

else if (op == '/'){

    result = div(a2,b2); 
}

else {

    
}



return result;

}