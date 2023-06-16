#include <iostream>
#define NAME "MEGATHINK, INC."
#define ADDRESS "10 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"

int main()
{
    starbar();
    std::cout << NAME << std::endl;
    std::cout << ADDRESS << std::endl;
    std::cout << PLACE << std::endl;
    starbar();
    return 0;
}

/* ????? ??????? ??????? starbar( ) */
#include <iostream>
#define LIMIT 65

void starbar()
{
    int count;
    for (count = 1; count <= LIMIT; count++)
        std::cout << '*';
    std::cout << std::endl;
}