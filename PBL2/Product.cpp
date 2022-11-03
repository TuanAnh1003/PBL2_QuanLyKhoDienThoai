#include "Product.h"
#include "Date.h"
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <vector>
#include <numeric>
using namespace std;
Product::Product() {
	this->ID = "\0";
	this->name = "\0";
	this->brand = "\0";
	this->color = "\0";
	this->priceF = 0;
	this->amount = 0;
	this->sales = 0;
	this->revenue = 0;
	this->status = "\0";
}
Product::Product(string ID, string name, string brand, string color, double priceF, double priceE, string status, double discount, int amount) {
	this->ID = ID;
	this->name = name;
	this->brand = brand;
	this->color = color;
	this->priceF = priceF;
	this->status = status;
	this->amount = amount;
}
Product::~Product() {

}

void Product::setID(string& nId) {
	this->ID = nId;
}
string Product::getID() {
	return ID;
}
void Product::setName(string& nName) {
	this->name = nName;
}
string Product::getName() {
	return name;
}
void Product::setBrand(string& nBrand) {
	this->brand = nBrand;
}
string	Product::getBrand() {
	return brand;
}
void Product::setColor(string& nColor) {
	this->color = nColor;
}
string Product::getColor() {
	return color;
}
void Product::setPriceF(double& nPriceF) {
	this->priceF = nPriceF;
}
double Product::getPriceF() {
	return priceF;
}
void Product::setStatus(string& nStatus) {
	this->status = nStatus;
}
string Product::getStatus() {
	return this->status;
}

void Product::setAmount(int& nAmount) {
	this->amount = nAmount;
}
void Product::UpdateAmount(int bonusAmount) {
	this->amount += bonusAmount;
}
int Product::getAmount() {
	return this->amount;
}

int Product::getSales() {
	return this->sales;
}
double Product::getRevenue() {
	return this->revenue;
}
void Product::UpdateSales(int nSales) {
	this->sales += nSales;
}
void Product::UpdateRevenue() {
	this->revenue = this->sales * this->priceF;
}
void Product::setSales(int& nSales) {
	this->sales = nSales;
}
void Product::setRevenue(double& nRevenue) {
	this->revenue = nRevenue;
}