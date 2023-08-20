#pragma once

class Car {
protected:
	string _color;
	string _model;
	string _vendor;
	float _engine;
	float _price;
public:
	Car() :_color(),_model(),_vendor(){}
	Car(string model,string vendor,float engine) {
		setModel(model);
		setVendor(vendor);
		setEngine(engine);
	}
	void setModel(string model);
	void setVendor(string vendor);
	void setColor(string color);
	void setEngine(float engine);
	virtual void setPrice(float price) {
		if (price < 0)
			throw"INVALID DATA";
		_price = price;
	}

	string getModel() { return _model; }
	string getVendor() { return _vendor; }
	string getColor() { return _color; }
	float getEngine() { return _engine; }
	float getPrice() { return _price; }

	virtual void Show(Car item) {
		cout << "Vendor: " << getVendor() << endl;
		cout << "Model: "<<getModel()<<endl;
		cout << "Color: " << getColor() << endl;
		cout << "Engine: " << getEngine() << endl;
		cout << "Price: " << getPrice() << endl;
		cout << endl;
	}
};


void Car::setModel(string model){
	if (model.length() < 2)
		throw "INVALID DATA";
	_model = model;
}


void Car::setVendor(string vendor) {
	if (vendor.length() < 3)
		throw "INVALID DATA";
	_vendor = vendor;
}


void Car::setColor(string color) {
	if (color.length() < 3)
		throw "INVALID DATA";
	_color = color;
}


void Car::setEngine(float engine) {
	if (engine > 0 && engine < 4.4)
		_engine = engine;
	else throw "INVALID DATA";
}




