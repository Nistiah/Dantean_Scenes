#ifndef MAIN_C_LETTER_CHANGER_H
#define MAIN_C_LETTER_CHANGER_H

enum letter_changer_t{TO_UPPER='b', TO_LOWER='s'};
char* change_letter_size(char *txt, enum letter_changer_t c);
char to_lower(char );
char to_upper(char );
char* remove_non_letters(char* text);
char* trim(char* text);

#endif //MAIN_C_LETTER_CHANGER_H
