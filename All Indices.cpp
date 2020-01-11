int allIndexes(int input[], int size, int x, int output[]) {
    static int i=0;
    static int j=0;
    if(size == 0)
        return 0;
    
    if(input[i] == x)
    {
        output[j] = i;
        j++;
    }
     i++;
    
      allIndexes(input,size-1,x,output);
    return j;
    
