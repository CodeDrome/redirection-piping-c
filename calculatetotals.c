
#include<stdio.h>
#include<stdlib.h>

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    char inputbuffer[16];
    double amount;
    double totaldebtors = 0;
    double totalcreditors = 0;

    while(fgets(inputbuffer, sizeof(inputbuffer), stdin) != NULL)
    {
        amount = atof(inputbuffer);

        if(amount > 0)
        {
            totaldebtors += amount;
        }
        else
        {
            totalcreditors += amount;
        }
    }

    printf("Debtors:   %8.2lf\n", totaldebtors);
    printf("Creditors: %8.2lf\n", totalcreditors);

    fprintf(stderr, "%s\n", "totals calculated");

    return EXIT_SUCCESS;
}
