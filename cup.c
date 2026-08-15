#include <stdio.h>
#include <string.h>

int main() {
    char cup = 'Z';
    char* str="this is cool";
    //unsigned int str_ptr=(unsigned int *)&str;
    unsigned int str_sz=strlen(str);
    unsigned int test=98540952;
    unsigned int test_sz=sizeof(test);    
    unsigned int cup_sz=sizeof(cup);
    printf("size of str=%u\n", str_sz);
    printf("size of cup=%u\n", cup_sz);
    printf("test=%u, size of test=%u\n", test,test_sz);
    printf ("%s\n", str);
    printf ("%c\n", cup);
    return 0;
}