// #include <stdio.h>

// void drawtictac()
// {
//     int r = 0;
//     while (r < 4)
//     {
//         for (int i = 1; i <= 30; i++)
//         {
//             printf("-");
//         }

//         for(int j=10;j<=40;j=j+10)
//         {
//             printf("\r|");
//         }
//         printf("\n\n");
//         r++;
//     }
// }

// int main()
// {
//     drawtictac();
// }
#include <stdio.h>
void m();
void n();
int x = 5;

void main()

{

    int x = 3;

    m();

    printf("%d", x);
}

void m()

{

    x = 8;

    n();
}

void n()

{

    printf("%d", x);
}