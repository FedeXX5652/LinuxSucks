int cuadrante(int x, int y){
    
    int cuad = 0;

    if(x>0){

        if(y>0){
            cuad = 1;
        }

        else{
            cuad = 4;
        }
    }

    else{

        if(y>0){
            cuad = 2;
        }

        else{
            cuad = 3;
        }
    }
    return(cuad);
}