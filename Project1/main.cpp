#include <iostream>
#include <Windows.h>
#include <type_traits>
#include <map>
#include <string>

//1.1.яблочный, 1.2 апельсиновый, 1.3.абрикосовый, 1.4.грушевый \n
//Овощные : 2.1.томатный, 2.2.луковый, 2.3.огуречный \n
//3.1.чесночный, 3.2.петрушевый \n
// 
//int choice2;
//
//
//std::cout << "\t\t\t\tкакой вкус напитка вы желаете выбрать";
//std::cout << " ";
//std::cout << "";
//std::cout << "";
//std::cout << "Ваш выбор вкуса ():";
//
//std::cin >> choice2;

std::map<std::string, std::map<std::string, double> > items;
std::string  names[9];

void fillitems ()
{
	items["Фруктовый сок"]["яблочный"] = 80;
	items["Фруктовый сок"]["апельсиновый"] = 112;
	items["Фруктовый сок"]["абрикосовый"] = 76;
	items["Фруктовый сок"]["грушевый"] = 78;
	items["Овощной сок"]["томатный"] = 98;
	items["Овощной сок"]["луковый"] = 73;
	items["Овощной сок"]["огуречный"] = 68;
	items["Чаи"]["чесночный"] = 130;
	items["Чаи"]["петрушевый"] = 123;

	names[0] = "яблочный";
	names[1] = "апельсиновый";
	names[2] = "абрикосовый";
	names[3] = "грушевый";
	names[4] = "томатный";
	names[5] = "луковый";
	names[6] = "огуречный";
	names[7] = "чесночный";
	names[8] = "петрушевый";


}








void showmenu()
{
	std::cout << "Меню\n";
	std::cout << "- - - - - - - - - - - - - - - - -\n";
	std::cout << "1.яблочный сок \n2.апельсиновы сок\n3.абрикосовый сок \n4.грушевый сок \n5.томатный сок \n6.луковый сок \n7.огуречный сок \n8.чесночный чай\n9.петрушевый чай \n0.Чек\n\n";
	std::cout << "- - - - - - - - - - - - - - - - \n";

}


int main ()
{
	
	setlocale(LC_ALL, "ru");
	
	
		std::cout << "\t\t\t\t\tМагазин: Соки Радосвета\n\n\n\n";
	

	
	fillitems();
	
	int choice;
	double amount;
	double sum = 0;
	

	while (true) 
	{
		showmenu();
		std::cout << "Выберите Товар ";
		std::cin >> choice;

		if (choice == 0) { ""; break; }
		if (choice < 1 || choice > 9) 
		{
			std::cout << "Такого товара не существует выберите другой";
			continue;
		}
		std::cout << "Выберите кол-во товара ";
		std::cin >> amount;
		if (amount <= 1) 
		{
			std::cout << "Введите конкретное кол-во \n";
			continue;
		}
		std::cout << "Товар Добавлен\n";
		sum += choice * amount;
		
	}

	std::cout << "Цена чека: " << sum;










	return 0;
}