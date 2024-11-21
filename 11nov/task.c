// 1. Task create a function to initialize a point with x and y coordinates
// 2. Create a print  function for point.
// 3. Create a function that subtracts the x and y values of a point
// and RETURN  a new point with the result return (p1 - p2)
// 4. Create a function that adds the x and y values of a point


typedef struct Point {
    int x;
    int y;
}Point;

 Point initialize(int x, int y) {
    Point p;
    p.x=x;
    p.y=y;

    return p;
}

void printpoint( Point p) {
    printf("Point(%d, %d)\n", p.x ,p.y);
}

Point subtractpoint(Point p1, Point p2) {
    Point result;
    result.x =p1.x - p2.x;
    result.y=p1.y - p2.y;
    
    return result;
}

Point addpoint(Point p1, Point p2) {
    Point result;
    result.x =p1.x + p2.x;
    result.y=p1.y + p2.y;
    return result;
}

int main() {

     Point p1 = initialize(3,4);
     Point p2 = initialize(1,2);

    printf("Point 1 : ");
    printpoint(p1);
    printf("Point 2 : ");
    printpoint(p2);

   Point sum = addpoint(p1,p2);
   printf("Sum of Points : ");
   printpoint(sum);

    Point difference = subtractpoint(p1,p2);
   printf("diff of Points : ");
   printpoint(difference);

return 0;
}
