#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);

    fprintf( stdout, "Hello, World!\n" );
    fprintf( stdout, s);
    return 0;
}

