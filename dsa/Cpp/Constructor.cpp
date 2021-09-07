//Copy Constructor

#include<iostream>
using namespace std;

class point
{
	private:
	int x, y;

public:

point (int px, int py)
{
	x = px, y = py;
}
};

int main(void)
{	
	point p1= point(10,15);
}

