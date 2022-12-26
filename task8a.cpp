#include <iostream>
using namespace std;
main()
{
float vegetableprice,fruitprice,vegetablesold,fruitsold,profitincoins,profitinrps;

cout <<"Enter Vegetable price per kilogram in coins: ";
cin  >>vegetableprice; 
cout <<"Enter Fruit price per kilogram in coins: ";
cin  >>fruitprice; 
cout <<"Enter total kilograms of vegetables that you sold: ";
cin  >>vegetablesold;
cout <<"Enter total kilograms of fruits that you sold: ";
cin  >>fruitsold;
profitincoins=(vegetableprice*vegetablesold)+(fruitprice*fruitsold);
cout <<"one Rupees = 1.94 coins  "<<endl;
profitinrps=profitincoins/1.94;
cout <<"Your earning in rupees are: "<<profitinrps;


}