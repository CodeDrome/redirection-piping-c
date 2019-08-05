
#include<stdio.h>
#include<stdlib.h>

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    double minimum = atof(argv[1]);
    char inputbuffer[16];
    double amount;

    while(fgets(inputbuffer, sizeof(inputbuffer), stdin) != NULL)
    {
        amount = atof(inputbuffer);

        if(abs(amount) > minimum)
        {
            printf("%-8.2lf\n", amount);
        }
    }

    fprintf(stderr, "%s\n", "data filtered");

    return EXIT_SUCCESS;
}
