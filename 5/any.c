#include<stdio.h>
int main()
{
	 char ch = 100;
	 printf("%d %o %x \n", ch);
	 return 0;
}
/* output is 100 13213640112 0x35654646f
/* Why does %o and %x need unsigned int?

Because:

    Octal and Hex are usually used to show bits of data.

    Negative numbers (like in signed int or char) are confusing in hex/octal.i

    Using unsigned means: “Treat the bits just as they are — no signs, no confusion. ”*/
