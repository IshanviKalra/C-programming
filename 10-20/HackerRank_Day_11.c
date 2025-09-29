//Question: Two strings: * "Hello, World!" on one line and the input string on the next line.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s",&s);
    
    
	
    
    
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
