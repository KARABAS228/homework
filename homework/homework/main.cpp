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
	std::cout << "hello ���"<<std::endl;
	int choose;
	std::string a;
	while (true)
	{
		std::cout << "��� �� �������� � ���� � ���������� ������� 1\n��� �� �������� � ���� � ����������� ������ ������� 2\n��� �� �������� � ���� � ������ ������� 3\n��� �� ����� ������� ����� ������ �����: " << std::endl;
		std::cin >> choose;

		if (choose==1)
		{
			std::cout << "������� ��������" << std::endl;
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
			std::cout << "������� ���������� ������"<<std::endl;
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
			std::cout << "������� ����" << std::endl;
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