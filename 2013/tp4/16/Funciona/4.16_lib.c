void right_trim (char *trim) {

int i, j = 0;

for (i = 0; trim[i] != '\0'; i++)
{
    if (trim[i] != ' ')
    {
        trim[j] = trim [i];
        j++;
    }
    
}

trim[j] = '\0';

}