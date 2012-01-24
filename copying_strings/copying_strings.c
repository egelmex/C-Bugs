/********************************************************************
 * This program takes a parmiter from the command line, copies it   *
 * then outputs the copy of the string.                             *
 *------------------------------------------------------------------*
 * Task: Fix it!                                                    *
 ********************************************************************/

/********************************************************************
 * Solution:                                                        *
 * fgeyra ergheaf gur ahzore bs punef va gur fgevat abg vapyhqvat   *
 * gur ahyy grezvangbe, arrq gb nyybpngr bar rkgen olgr naq ahyy    *
 * grezvangr gur fgevat.                                            *
 ********************************************************************/
#include <stdio.h>
#include <string.h>

int
main (int argv, char **args)
{
	char *hello_str		= args[1];
	char hello_ary[strlen(hello_str)];

	strncpy(hello_ary, hello_str, strlen(hello_str));
	printf("hello_ary: \"%s\"\n", hello_ary);
}
