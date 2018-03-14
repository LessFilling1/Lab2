#include "revert_string.h"


void Swap(char *left, char *right)
{
	char copy = *left;
	*left = *right;
	*right = copy;
}


void RevertString(char *str)
{
    int i,j,len=0;
    
    
        while(*(str + i + 1) != '\0'){i++;}
        
        len=i;
        
        for(i=0; i<len; i++){
            for(j=0; j<len-i;j++){
                Swap(str+j, str+j+1);
            }
        }
}



