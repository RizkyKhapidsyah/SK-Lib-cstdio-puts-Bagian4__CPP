#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int rc = std::puts("Halo Manusia");

    if (rc == EOF) {
        std::perror("puts()"); // POSIX requires that errno is set
    }
        
    _getch();
    return 0;
}