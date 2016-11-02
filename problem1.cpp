#include <iostream>

class VectorND
{
public:
	int *p;

	VectorND(const int& n)
	{
		p = new int[n];
	}

	~VectorND()
	{
		delete[] p;
	}
};

int main()
{
	VectorND v(5);
	v.p[0] = 0;
	v.p[1] = 1;
	v.p[2] = 2;
	v.p[3] = 3;
	v.p[4] = 4;

	for (int i = 0; i < 5; i++)
	{
		std::cout << v.p[i]<<" ";
	}
	std::cout<<std::endl;
}