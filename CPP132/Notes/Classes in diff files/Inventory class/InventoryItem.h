#pragma once
#include <string>


class InventoryItem
{
	private:
		std::string name;
		double cost;
		int quantity;

	public:
		InventoryItem(std::string = "Unknown Item", double = 0.1, int = 0);	
		// This is 4 constuctors//	InventoryItem()
								//	InventoryItem(string)
								//	InventoryItem(string, double)
								//	InventoryItem(string, double, int)

		void setQuantity(int);
		void setPrice(double);

		double getPrice() const { return cost; }
		double getQuantity() const { return quantity; }

		double getValue() const;

		void printData() const;


};

