#include <stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double pi=3.14159;

    printf("enter rectangle length & beradth");
    scanf("%If%If",&length,&breadth);

    printf("rectangle area=%.2If\n",length*breadth);
    printf("rectangle perimeter=%.2If\n",(length+breadth));

    printf("enter circle radius;");
    scanf("%If",&radius);

    printf("circle area=%,2If\n",pi*radius*radius);
    printf("circle circumference=%,2If\n",2*pi*radius);

    printf("enter triangle base & height;");
    scanf("%If%If",&base,&height);

    printf("enter triangle area=%.2If\n",0.5*base*height);

    return 0;
}