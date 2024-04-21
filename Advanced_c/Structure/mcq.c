// #include <stdio.h>

// struct p

// {

//     int k;

//     char c;
//     int p;
//     float f;
//     float m;
// };

// int main()

// {

//     struct p x = {.c = 97, .f = 3, .k = 1};
//     printf("%f\n", x.f);
//     struct p aa;
//     //aa = (struct p){4, '8', 9};
//     aa.f = 33;
//     printf("....%f\n", aa.m);
//     aa.p = 77;
//     printf("aaaaaaa %d\n", aa.k);

//     struct p mm[] = {{1, 'a', 2}, {3, 'b', 4}};
//     printf("%d\n", mm[0].k);
//     printf("%d\n", sizeof(mm));
// }
// #include <stdio.h>

// struct point

// {

//     int x;

//     int y;
// };

// void foo(struct point p[])

// {

//     printf("%d\n", p->x);
// }

// int main()

// {

//     struct point p1[] = {1, 2, 3, 4}; //{{1, 2}, {3, 4}}

//     foo(p1);
// }
// #include <stdio.h>

// struct student

// {

//     char *c;
// };

// void main()

// {

//     struct student m;

//     struct student *s = &m;

//     s->c = "hello";

//     printf("%s", s->c);
// }
#include <stdio.h>

struct student

{

    char *name;
};

struct student s;

struct student fun(void)

{

    s.name = "john";

    printf("%s\n", s.name);

    s.name = "jason";

    return s;
}

void main()

{

    struct student m = fun();

    printf("%s\n", m.name);

    m.name = "fedin";

    printf("%s\n", s.name);
}