#include "Food.h"
#include "Wall.h"
#include <cstdlib>
#include <ctime>

/* ���������ʿ伺 ������ ����
Food::Food()
{}
*/
void Food::setPosition() {
	srand(static_cast<unsigned int>(time(NULL)));
	x = rand();//%Wall.width - 1;
	y = rand();//%Wall.height - 1;

	/*
	do{
		x = rand();//%Wall.width - 1;
		y = rand();//%Wall.height - 1;
	}while ((x,y)�� ���� ����(�浹�߻�))
	*/
}