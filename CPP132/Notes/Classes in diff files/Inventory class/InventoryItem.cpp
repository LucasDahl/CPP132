#include "InventoryItem.h"
#include <iomanip>
#include <iostream>

InventoryItem::InventoryItem(std::string startname, double startPrice, int startquantity)
{
	setPrice(startPrice);
	setQuantity(startquantity);
	name = startname;
}

void InventoryItem::setQuantity(int newQuantity)
{
	if (newQuantity >= 0)
	{
		quantity = newQuantity;
	}
	// throw an error??
	// do nothing
	// use the absolute value


}


void InventoryItem::setPrice(double newPrice)
{
	if (newPrice > 0)
	{
		cost = newPrice;
	}
	else
	{
		cost = 0.01;
	}
}

void InventoryItem::printData() const
{
	std::cout << "Item: " << name << std::endl;
	std::cout << "   Quantity = " << quantity << std::endl;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "   Price    = $" << cost << std::endl;


	std::cout << "   Value    = $" << getValue() << std::endl;

}


double InventoryItem::getValue() const
{
	double value = cost * quantity;
	return value;
}