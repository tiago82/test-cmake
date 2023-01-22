// test cmake.cpp: define o ponto de entrada para o aplicativo.
//
#include "hello.h"
#include "test cmake.h"

using namespace std;

class Vector2d
{
public:
	void setX(float x_)
	{
		x = x_*2;
	}
	float getX(void)
	{
		return x;
	}

private:
	float x, y;
};

int main()
{
	cout << "Bem-vindo" << endl;
	
	Helloworld aa; // Classe Helloworld 
	aa.helo2();

	Vector2d vetor; // testando classe Vector 2D
	vetor.setX(22);
	cout << vetor.getX();

	return 0; // indica que o programa terminou
}


