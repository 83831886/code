#include <stdio.h>
 
void set_mode(int);
void get_info(void);
void show_info(void);
 
static int mode;
static double distance;
static double fuel;
 
void set_mode(int m)
{
    if(m == 0 || m == 1)
    {
        mode = m;
    }
    else
    {
        printf("Invalid mode specified. Mode %s used.\n", (mode ? "\"1(US)\"" : "\"0(metric)\""));
    }
}
void get_info(void)
{
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel comsumed in liters: ");
        scanf("%lf", &fuel);
    }
    else if(mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel comsumed in gallons: ");
        scanf("%lf", &fuel);
    }
}
void show_info(void)
{
    if(mode == 0)
    {
        printf("Fuel comsumption is %lf liters per 100 km\n", (fuel / distance * 100));
    }
    else if(mode == 1)
    {
        printf("Fuel comsuption is %lf miles per gallon.\n", distance / fuel);
    }
}

