#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
    
	printf("Enter some text (type a period to quit).\n");
    
	do {
		// If create more charecters, getchar save them in buffer. If buffer is not empty, read from buffer or not wait for input.
        ch = getchar();
       
	    if (islower(ch)) {
			ch = toupper(ch);
		} else {
			ch = tolower(ch);
		}
        
		putchar(ch);
		printf("\n");
	//	printf("\n%c\n", ch);
    
	} while (ch != '.');
	
	return 0; 
}