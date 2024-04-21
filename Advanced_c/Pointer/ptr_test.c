// #include <stdio.h>
// void main()
// {
//     int const *p = 5;
//     printf("%d\n", *p);
// }

// #include <stdio.h>

// int main()

// {

//     printf("%d", sizeof(void *));

//     return 0;
// }

// #include <stdio.h>

// int main()

// {

//     int a = 15;

//     void *ptr = (int *)&a;

//     printf("%d", *ptr); //printf("%d", *(int *)ptr);

//     return 0;
// }
#include <stdio.h>

int main()

{

    int a[5] = {1, 2, 3, 4, 5};

    int *p = a;

    printf("%d\t%d\t%d\t%d\t", *p, a[0], a, p);

    return 0;
}