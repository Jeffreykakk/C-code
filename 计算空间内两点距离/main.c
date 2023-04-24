#include <stdio.h>
#include <math.h>

typedef struct Point
{
    double x;
    double y;
    double z;
}Point;

void Initpoint(Point* p1,Point* p2)
{
    printf("first point\n");
    printf("x1:") ;
    scanf("%lf",&p1->x);
    printf("y1:") ;
    scanf("%lf",&p1->y);
    printf("z1:") ;
    scanf("%lf",&p1->z);
    printf("second point\n");
    printf("x2:") ;
    scanf("%lf",&p2->x);
    printf("y2:") ;
    scanf("%lf",&p2->y);
    printf("z2:") ;
    scanf("%lf",&p2->z);
}

double distance(Point* p1,Point* p2)
{
    return sqrt((p1->x-p2->x)*(p1->x-p2->x)+(p1->y-p2->y)*(p1->y-p2->y)+(p1->z-p2->z)*(p1->z-p2->z));
}

int main()
{
    Point p1={0},p2={0};
    Initpoint(&p1,&p2);
    double d=distance(&p1,&p2);
    printf("%lf",d);
    return 0;
}