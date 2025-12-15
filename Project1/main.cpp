#include <iostream>
#include <Windows.h>
#include <type_traits>



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

map<string, map<string, double> > items;
map<pair<int, int>, string > names;

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

	names[{1, 1}] = "яблочный";
	names[{1, 2}] = "апельсиновый";
	names[{1, 3}] = "абрикосовый";
	names[{1, 4}] = "грушевый";
	names[{2, 1}] = "томатный";
	names[{2, 2}] = "луковый";
	names[{2, 3}] = "огуречный";
	names[{3, 1}] = "чесночный";
	names[{3, 2}] = "петрушевый";


}






void addtocart(string a [] , string b[]) 
{
	selected_items[a][b]++;
}

void showmenu()
{
	std::cout << "Меню\n";
	std::cout << "- - - - - - - - - - - - - - - - -\n";
	std::cout << "1. Фруктовый сок\n 2. Овощной сок\n 3. Чай 4.Чек\n\n";
	std::cout << "- - - - - - - - - - - - - - - - \n"

}

void show()
{
	cout << "- - - - - - - -" << " - - \nitem";

		int cnt = 1;
	for (auto& it : items["Фруктовый сок"])
	{
		cout << cnt++ << ". " << it.first << "--- Rs." << it.second << "/-\n";
	}
	cout << "- - - - - - - - - - - \n";
}



void show()
{
	cout << "- - - - - - - -" << " - - \nitem";

	int cnt = 1;
	for (auto& it : items["Овощной сок"])
	{
		cout << cnt++ << ". " << it.first << "--- Rs." << it.second << "/-\n";
	}
	cout << "- - - - - - - - - - - \n";
}

void show()
{
	cout << "- - - - - - - -" << " - - \nitem";

	int cnt = 1;
	for (auto& it : items["Чаи"])
	{
		cout << cnt++ << ". " << it.first << "--- Rs." << it.second << "/-\n";
	}
	cout << "- - - - - - - - - - - \n";
}


int main ()
{
	
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	{
		std::cout << "\t\t\t\t\tМагазин: Соки Радосвета\n\n\n\n";
	}

	
	fillitems();
	

	

	














	return 0;
}