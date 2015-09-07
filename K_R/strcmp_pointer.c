/* strcmp : return <0 if s<t, 0 if s=t and >0 if s>t; pointer version */

int strcmp(char *s, char *t){

    for(; *s == *t; s++, t++)
        if(*s == '\0')
            return 0;
    return *s - *t;
}
