#include <stdio.h>

struct Point
{
    float x;
    float y;
};

int main()
{
    struct Point triangle_points[3];

    struct Point center_of_mass;
    center_of_mass.x = 0;
    center_of_mass.y = 0;

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Input the X coordinate of point %d: ", i + 1);
        if (scanf("%f", &triangle_points[i].x) == 0)
        {
            printf("[ERROR]: Incorrect data type. Please input a number.\n");

            return 1;
        }
        else
            center_of_mass.x += triangle_points[i].x;

        printf("Input the Y coordinate of point %d: ", i + 1);
        if (scanf("%f", &triangle_points[i].y) == 0)
        {
            printf("[ERROR]: Incorrect data type. Please input a number.\n");

            return 1;
        }
        else
            center_of_mass.y += triangle_points[i].y;

        printf("\n");
    }

    center_of_mass.x /= 3;
    center_of_mass.y /= 3;

    printf(
        "The coordinates of the center of mass: (%0.1f, %0.1f)\n",
        center_of_mass.x, center_of_mass.y
    );

    return 0;
}
