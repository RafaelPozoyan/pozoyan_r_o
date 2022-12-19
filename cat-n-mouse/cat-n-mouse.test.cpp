#include <geom/geom.hpp>

#include <iostream>
#include <cmath>

//------------------------------------------
Rdec2D direction(struct Rdec2D dir) {
	return { dir.x / abs(dir.x), dir.y / abs(dir.y) };
}
//------------------------------------------
int main() {
	//координаты кошки и мышки
	Rdec2D cat{ 10, 0 };
	Rdec2D mouse{ 0, -10 };
	//координаты кошки и мышки
	


	//скорость кошки и мышки
	const double speed_cat = 3000;
	const double speed_mouse = 1;
	//скорость кошки и мышки
	


	//направляющий вектор
	Rdec2D vector_cat{ 0, 0 };
	Rdec2D vector_mouse{ 0, 1 };
	//направляющий вектор
	

	const double radious = 0.5;//радиус поражения
	bool flag = true;//поймала ли
	  

	for (int i = 0; i < 1000; i += 1) {
		Rdec2D direction_cat_mx{ -cat.x, 0 };
		Rdec2D dir_c = direction(direction_cat_mx) - direction(vector_mouse); //направляющий вектор кошки
		//направляющие вектора кошки и мышки
		//|
		//координаты кошки и мышки спустя некоторое время
		mouse = vector_mouse * speed_mouse;
		cat = vector_cat * speed_cat;
		//координаты кошки и мышки спустя некоторое время
		//|

		if ((mouse.x - cat.x) < radious && (mouse.y - cat.y) < radious) {
			std::cout << "Cat wins!";
			flag = false;
			break;
		}
	}
	if (flag) {
		std::cout << "Mouse wins!";
	}
}