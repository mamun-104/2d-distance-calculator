#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,distance;

    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    printf("D = %.5lf\n",distance);

    return 0;
}
