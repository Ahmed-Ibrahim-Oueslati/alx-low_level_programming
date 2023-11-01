char *_strncpy(char *dest, char *src, int n)
{
    char *temp = dest;
    while (*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    while (n--)
    {
        *dest = '\0';
        dest++;
    }
    return temp;
}

