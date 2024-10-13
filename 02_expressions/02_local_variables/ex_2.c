#include <stdio.h>

void f(void)
{
    int t;
    
    scanf("%d%*c", &t);
     
    if(t==1) {
        char s[80];  /* this is created only upon
                       entry into this block */
        printf("Enter name:");
        gets(s);
       /* do something ... */
    }
}
