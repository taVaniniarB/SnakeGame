#include <iostream>
#include "Snake.h"
#include "Wall.h"
#include "Food.h"

using namespace std;

void checkCollision() {

}
static Snake snake;
static Wall wall;

void render() {
    //메서드 오버로딩으로 객체마다의 출력 함수를 만들까?
    //printObject(char c, int x, int y){
    // //커서를 x, y로 옮긴다 
    // cout << 'c'
    // }
    // 
    // printObject(Wall wall){
    // //대충반복문
    // }
    //
}

int main()
{
    


    while (true)
    {
        render();
        //콘솔지우기
        //키를 받기
        checkCollision();
    }
    
}
