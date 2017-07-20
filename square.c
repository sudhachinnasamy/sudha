#include<iostream.h>
struct Point
{
    int xaxis, yaxis;
};
int distSq(Point p, Point q)
{
    return (p.xaxis - q.xaxis)*(p.xaxis - q.xaxis) +
           (p.yaxis - q.yaxis)*(p.yaxis - q.yaxis);
}
bool isSquare(Point p1, Point p2, Point p3, Point p4)
{
    int value2 = distSq(p1, p2); 
    int value3 = distSq(p1, p3);  
    int value4 = distSq(p1, p4);  
    if (value2  == value3 && 2*value2 == value4)
    {
        int d = distSq(p2, p4);
        return (d == distSq(p3, p4) && d == value2);
    }
    if (value3 == value4 && 2*value3 == value2)
    {
        int d = distSq(p2, p3);
        return (d == distSq(p2, p4) && d == d3);
    }
    if (d2 == d4 && 2*d2 == d3)
    {
        int d = distSq(p2, p3);
        return (d == distSq(p3, p4) && d == value2);
    }
 
    return false;
int main()
{
    Point p1 = {20, 10}, p2 = {10, 20},
          p3 = {20, 20}, p4 = {10, 10};
    isSquare(p1, p2, p3, p4)? cout << "Yes": cout << "No";
    return 0;
}
