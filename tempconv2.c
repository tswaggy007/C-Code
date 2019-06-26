#include <stdio.h>
#include <ctype.h>
#include <float.h>
#include <stdlib.h>

float f2c(char * fahr_raw)
{
    float fahr = atof(fahr_raw);
    float celsius = 0.0;

    celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}

float c2f(char * celsius_raw)
{
    float celsius = atof(celsius_raw);
    float fahr = 0.0;

    fahr = celsius * (9.0/5.0) + 32;
    return fahr;
}

void print_format()
{
    printf("Syntax: temp-convert <TEMP> <SYMBOL>\n\n");
    printf("where <TEMP> is the temperature you wish to convert,\n");
    printf("and <SYMBOL> is either F or C (case insentitive), identifying\n");
    printf("which system you wish to convert from.\n");
}

int main(int argc, char * argv[])
{
    float fahr = 0.0;
    float celsius = 0.0;

    if(argc < 3)
    {
	printf("Too few arguments\n");
	print_format();
	return 1;
    }

    if(argc > 3)
    {
	printf("Too many arguments\n");
	print_format();
	return 1;
    }

    char  symbol = toupper(*argv[2]); /* Used to determine which conversion to make */

    switch(symbol)
    {
	case ('F'):
	{
	    printf("%g C\n",f2c(argv[1]));
	    break;
	}
	case ('C'):
	{
	    printf("%g F\n",c2f(argv[1]));
	    break;
	}
	default:
	{
	    printf("Invalid argument\n");
	    print_format();
	    return 1;
	}
    }

    return 0;
}
