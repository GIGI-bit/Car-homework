#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include"header.h"
#include"header1.h"


int main() {
	
	Automatic car("prius", "toyota", 3.3, 18000);
	Manual car_1("kia", "rio", 1.5, 12000);

	vector<Car> gallery;
	gallery.push_back(car);
	gallery.push_back(car_1);

	for (auto item:gallery)
	{
		item.Show(item);
	}
}


