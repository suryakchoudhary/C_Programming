 #include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if(a>b && c>d)
    {
        if(a>c)
        {
        return a;
        }
        else 
        {
        return c;
        }
    }
    else if(a>b && c<d)
    {
        if(a>d)
        {
            return a;
        }
        else
        {
            return d;
        }
    }
    else if(a<b && c>d)
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
        
        
    }
    else if(a<b && c<d)
    {
        if(b>d)
        {
            return b;
        }
        else 
        {
            return d;
        }
    }
    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


