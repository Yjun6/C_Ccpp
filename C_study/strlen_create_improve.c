#include<stdio.h>
#include<assert.h>

size_t my_strlen(const char *str)
{
    assert(str);
    if( *str )
        return 1 + my_strlen(str + 1);
    else
        return 0;
}

int main()
{
    char arr[] = "shfeukysuoiwe";
    printf("%d\n", my_strlen(arr));
    return 0;
}