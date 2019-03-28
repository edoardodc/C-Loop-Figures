//
//  main.c
//  ProgettoScuola
//
//  Created by Edoardo de Cal on 28/03/2019.
//  Copyright © 2019 Edoardo de Cal. All rights reserved.
//

#include <stdio.h>
int main()
{
    
    char buff[1000] = "buona memoria";
    char *s;
    
    s = strstr(buff, "memoria");      // search for string "hassasin" in buff
    if (s != NULL)                     // if successful then s now points at "hassasin"
    {
        printf("Found string at index = %d\n", s - buff);
    }                                  // index of "hassasin" in buff can be found by pointer subtraction
    else
    {
        printf("String not found\n");
    }
    
}
