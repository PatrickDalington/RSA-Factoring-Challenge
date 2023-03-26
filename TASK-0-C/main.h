#ifndef __MAIN__
#define __MAIN__

/*------------------------------------------------*/
/*     INCLUDE NEEDED STANDARD LIBRARIES          */
/*------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>


/*------------------------------------------------*/
/*              FUNCTION PROTOTYPES               */
/*------------------------------------------------*/

void factorize(long int number);
void parse_file(char *file_name);
unsigned long string_to_int(char* str);

#endif
