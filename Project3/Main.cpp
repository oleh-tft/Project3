#include<iostream>

using namespace std;

class Car
{
	char* model;
	char* country;
	double price;
	int year;

public:
	Car()
	{
		model = nullptr;
		country = nullptr;
		price = 0.0;
		year = 0;
	}

	Car(const char * Model, const char * Country, double Price, int Year)
	{
		model = new char[strlen(Model) + 1];
		strcpy_s(model, strlen(Model) + 1, Model);
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);
		price = Price;
		year = Year;
	}

	void Input()
	{
		char buff[20];

		cout << "Model: ";
		cin >> buff;
		SetModel(buff);

		cout << "Country: ";
		cin >> buff;
		SetCountry(buff);

		cout << "Price: ";
		cin >> price;
		cout << "Year: ";
		cin >> year;
	}

	void Print()
	{
		cout << "Model: " << model << endl;
		cout << "Country: " << country << endl;
		cout << "Price: " << price << endl;
		cout << "Year: " << year << endl << endl;
	}

	char* GetModel()
	{
		return model;
	}

	void SetModel(char* Model)
	{
		if (model != nullptr) {
			delete[] model;
		}
		model = new char[strlen(Model) + 1];
		strcpy_s(model, strlen(Model) + 1, Model);
	}

	char* GetCountry()
	{
		return country;
	}

	void SetCountry(char* Country)
	{
		if (country != nullptr) {
			delete[] country;
		}
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);
	}

	double GetPrice()
	{
		return price;
	}

	void SetPrice(double Price)
	{
		price = Price;
	}

	int GetYear()
	{
		return year;
	}

	void setYear(int Year)
	{
		year = Year;
	}

	~Car()
	{
		delete[] model;
		delete[] country;
	}
};

int main()
{
	Car a("Audi", "Ukraine", 198.9, 1984);
	a.Print();
	
	Car b;
	b.Input();
	b.Print();
}