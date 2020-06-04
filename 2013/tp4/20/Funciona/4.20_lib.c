void max_min (double *vector, int n) {

double aux = 0;
int i, j;

for (i = 0; i < n; i++) 
    {
       	for (j = i + 1; j < n; j++)
        {
            if (vector[i] > vector[j]) 
            {
                aux =  vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
	    	}
        }
    }

}