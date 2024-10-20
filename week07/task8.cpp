#include <iostream>
#include <iomanip>
using namespace std;
void cargo(int numberOfCargo);
main()
{
    int numberOfCargo;
    cout<<"Enter Count of cargo of transportation:";
    cin>>numberOfCargo;
    cargo(numberOfCargo);
}
void cargo(int numberOfCargo)
{
    int cargoTonnage,cargoSum=0;
    int minibusCapacity=4,truckCapacity=11,trainCapacity;
    double cargoInMinibus=0,cargoInTruck=0,cargoInTrain=0;
    double minibusPercentage,truckPercentage,trainPercentage;
    for (int x = 1; x <= numberOfCargo; x++)
    {
        cout<<"Enter tonnage of Cargo  "<< x <<" : ";
        cin>>cargoTonnage;
        cargoSum=cargoSum+cargoTonnage;
        if (cargoTonnage<=minibusCapacity)
        {
            minibusCapacity=minibusCapacity-cargoTonnage;
            cargoInMinibus=cargoInMinibus+cargoTonnage;
            
        }
        else if (cargoTonnage<=truckCapacity)
        {
            truckCapacity=truckCapacity-cargoTonnage;
            cargoInTruck=cargoInTruck+cargoTonnage;
        }
        else
        {
            trainCapacity=trainCapacity-cargoTonnage;
            cargoInTrain=cargoInTrain+cargoTonnage;
        }
    }
    double averagePrice=((cargoInMinibus*200.0)+(cargoInTruck*175.0)+(cargoInTrain*120.0))/cargoSum;
    minibusPercentage=(cargoInMinibus/cargoSum)*100;
    truckPercentage=(cargoInTruck/cargoSum)*100;
    trainPercentage=(cargoInTrain/cargoSum)*100;

    cout << fixed << setprecision(2)<<averagePrice<<endl;    
    cout<< fixed << setprecision(2)<<minibusPercentage<<"%"<<endl;
    cout<< fixed << setprecision(2)<<truckPercentage<<"%"<<endl;
    cout<< fixed << setprecision(2)<<trainPercentage<<"%"<<endl;
}