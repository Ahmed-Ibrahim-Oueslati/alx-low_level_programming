char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;
    while (*dest)
        dest++;
    while (*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return temp;
}

