#include <iostream>
using namespace std;
main(){

int sizeOfFertilizer;
int costOfbag;
int areaInSquareFoot;
float costOfFertilizerperPound;
float costOfFertilizingperSquarefoot;

cout<<"Enter size of fertilizer:";
cin>>sizeOfFertilizer;
cout<<"Enter cost of bag";
cin>>costOfbag;
cout<<"Enter area covered by each bag in square feet:";
cin>>areaInSquareFoot;
costOfFertilizerperPound=costOfbag/sizeOfFertilizer;
costOfFertilizingperSquarefoot=costOfbag/areaInSquareFoot;
cout<<"cost of fertilizer per pound:"<<costOfFertilizerperPound<<endl;
cout<<"cost of fertilizing the area per square feet:"<<costOfFertilizingperSquarefoot;
}
