#include <stdio.h>

void test(char* a){
    printf("%s", a);
    return;
}

int main (int argc, char* argv[]){
    char * a;
    
    a = argv[argc-1];
    test(a);
    return 0;
}
