#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line.
void shuffle(int *a, int *b, int *c, int *d)
{

	int x = rand() % 4;
	int y = rand() % 4; 
	while (x == y)
	{
		y = rand() % 4;
	}
	if ((x == 0 && y == 1) || (x == 1 && y == 0))
	{
		swap(*a, *b);
	}
	else if ((x == 0 && y == 2) || (x == 2 && y == 0))
	{
		swap(*a, *c);
	}
	else if ((x == 0 && y == 3) || (x == 3 && y == 0))
	{
		swap(*a, *d);
	}
	else if ((x == 1 && y == 2) || (x == 2 && y == 1))
	{
		swap(*b, *c);
	}
	else if ((x == 1 && y == 3) || (x == 3 && y == 1))
	{
		swap(*b, *d);
	}
	else if ((x == 2 && y == 3) || (x == 3 && y == 2))
	{
		swap(*c, *d);
	}
}