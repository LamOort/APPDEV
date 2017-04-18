#include <stdio.h>
void displayBits( unsigned int value);
void setBit( unsigned int *value, int pos);
void toggleBit( unsigned int *value, int pos);
int main( void )
{
	unsigned int x;
	printf("%s", "Enter a nonnegative int: ");
	scanf("%u", &x);

	displayBits(x);
}
void displayBits( unsigned int value)
{
	unsigned int c;
	unsigned int displayMask = 1 << 31;
	printf( "%10u = ", value);
	for ( c = 1; c <= 32; c++){
		putchar( value & displayMask? '1' : '0');
		value <<=1;

	if (c % 8 == 0){
		putchar( ' ');
	}
}
	putchar( '\n');
}
void setBit(unsigned int *value, int pos)
{
	unsigned int mask=1<<pos;
	*value = *value | mask;
}
void toggleBit(unsigned int *value, int pos)
{
	unsigned int mask=1<<pos;
	if(*value & mask) *value = *value & (~mask);
	else *value = *value | mask;
}

