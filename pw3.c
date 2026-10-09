#include <stdio.h>

int main() {
    int a = 10; //тк перед числом нет 0 или 0x си понимает что это дес сс
    int b = 010; // тк перед числом 0 си поймет что это окт
    int c = 0x10; // 0х это hex
    
    printf("DEC_10: %d\n", a);
    printf("OCT_10: %d\n", b);
    printf("HEX_10: %d\n", c);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n",sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %zu %zu %zu\n",sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1); //тк комп считает всегда 0.1f = 0.1...цифры какието и мы получим 0 в си потому что они не равны

    char ch = 'A'; 
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof(ch), sizeof("A"));
    
    return 0;
}
