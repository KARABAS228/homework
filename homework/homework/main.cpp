#include<iostream>
#include<vector>
#include<random>
#include <cmath>
#include<string>
#include <fstream>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "ru");
	std::cout << "hello мир"<<std::endl;
	int choose;
	std::string a;
	while (true)
	{
		std::cout << "что бы записать в файл с названиями нажмите 1\nчто бы записать в файл с количеством товара нажмите 2\nчто бы записать в файл с ценами нажмите 3\nчто бы выйти введите любую другую цифру: " << std::endl;
		std::cin >> choose;

		if (choose==1)
		{
			std::cout << "введите название" << std::endl;
			std::cin >> a;
			std::ofstream out("name.txt", std::ios::app);
			if (out.is_open())
			{
				out << a << std::endl;
			}
			out.close();
		}
		else if (choose == 2)
		{
			std::cout << "введите количество товара"<<std::endl;
			std::cin >> a;
			std::ofstream out("kolichestvo.txt", std::ios::app);
			if (out.is_open())
			{
				out << a << std::endl;
			}
			out.close();
		}
		else if (choose == 3)
		{
			std::cout << "введите цену" << std::endl;
			std::cin >> a;
			std::ofstream out("price.txt", std::ios::app);
			if (out.is_open())
			{
				out << a << std::endl;
			}
			out.close();
		}

		else
		{
			break;
		}
	}



	return 0;
}