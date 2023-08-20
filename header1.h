#pragma once

class Manual :public Car {
	int _gear;
public:
	Manual() = delete;
	Manual(string vendor,string model,float engine, float price):Car(model,vendor,engine){
		setPrice(price);
	}

	void setGear(int gear) { _gear = gear; }
	int getGear() { return _gear; }


	void setPrice(float price) override {
		if (price > 0 && price < 15000)
			_price = price;
		else throw "INVALID DATA";
	}

	void Show(Car item)override {
		cout<<"Type: "<<"Manual" << endl;
		cout << "Vendor: " << getVendor() << endl;
		cout << "Model: " << getModel() << endl;
		cout << "Color: " << getColor() << endl;
		cout << "Engine: " << getEngine() << endl;
		cout << "Price: " << getPrice()<<endl;
	}
};

class Automatic :public Car {
public:
	Automatic() = delete;
	Automatic(string model, string vendor, float engine, float price) :Car(model, vendor, engine) {
		setPrice(price);
	}

	void setPrice(float price)override {
		if (price > 0 && price > 15000)
			_price = price;
		else throw"INVALID DATA";
	}

	void Show(Car item)override {
		cout << "Type: Automatic" << endl;
		cout << "Vendor: " << item.getVendor() << endl;
		cout << "Model: " << item.getModel()<<endl;
		cout << "Color: " << item.getColor() << endl;
		cout << "Engine: " << item.getEngine() << endl;
		cout << "Price: " << item.getPrice() << endl;
	}
};






