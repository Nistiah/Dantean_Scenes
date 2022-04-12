#include <stdio.h>
#include "letter_changer.h"

char to_lower(char text){

    if(text>='A'&&text<='Z')
    {
        text+=10;
        text+=10;
        text+=10;
        text+=1;
        text+=1;
    }
    return text;
}


char to_upper(char text){

    if(text>='a'&&text<='z')
    {
        text-=10;
        text-=10;
        text-=10;
        text-=1;
        text-=1;
    }
    return text;
}

char* change_letter_size(char *txt, enum letter_changer_t c) {
    if (txt == NULL)// || (c != TO_LOWER && c != TO_UPPER))
    {return NULL;}
    int i=0;

    if (c == 'b') {

        while (*txt != '\0') {
            *txt=to_upper(*txt);
            txt++;
            i++;
        }
        return (txt-i);
    }
    if (c == 's') {

        while (*txt != '\0') {
            *txt=to_lower(*txt);
            txt++;
            i++;
        }
        return (txt-i);
    }

    return (txt-i);

}
