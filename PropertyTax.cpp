//******************************************************************************************************************************
//
//	File:                       HowManyCalories.cpp
//	Student:				    Alec Ochoa Michaud
//	Programing challenge:       Starting Out With C++, page 182 exercise 14: Property Tax.
//                              Madison Country collects property taxes on the assessed value of property, which is
//                              60 percent of its actual value. For example, if a house is valued at $158,000
//                              its assessed value is $94,800. THis is the amount the homeowner pays tax on.
//                              At least year's tax rate of $2.64 for each $100 of assessed value.
//                              The program should then calculate and report how much annual property tax the
//                              homeowner will be charged for this property. 
//
//*******************************************************************************************************************************

#include <iostream>

using namespace std;

int main() {

//Expected values
    float property_value, tax_per_year, property_60;
    
    cout<<" What is the value of the property: ";
    cin>> property_value;
    property_60 = (60*property_value) / 100;
    tax_per_year = (property_60 / 100) * 2.64;
    cout<< "The tax per year is: " << tax_per_year;

    return 0;
}
