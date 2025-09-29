//Sum and Difference of Two Numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a, b, e, f;
    float c, d, g, h;

    scanf("%d %d", &a, &b);
    e = a + b;
    f = a - b;
    printf("%d %d\n", e, f);

    scanf("%f %f", &c, &d);
    g = c + d;
    h = c - d;
    printf("%.1f %.1f\n", g, h);
}
