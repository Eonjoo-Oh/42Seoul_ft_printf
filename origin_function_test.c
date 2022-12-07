#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int a;
    int b;

	a = printf("abc %s hijk\n", "defg");
	printf("print return value : %d\n", a);
    printf("print char : %c\n", 'a');
    b = printf("print string : abc %s hijk\n", (char *)NULL);
    printf("print pointer : %p\n", &a);
    printf("print decimal : %d\n", 2147483647);
    printf("print integer : %i\n", -123);
    printf("print unsigned : %u\n", -2147);
    printf("print hexadecimal : %x\n", 10);
    printf("print heXadecimal : %X\n", 10);
    printf("print percent: %%\n");
    write(1, "%", 1);
}
