/**
 *  @file:  '.\Countries populations.cc'
 * @author:  Zachary Takacs
 * 
 * @date:  February 7, 2021
 * @brief
 * A program that determines the population of the next year from
 * the given information.
 */ 





#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ( )
{
    int currentPopulation = 9645705;
    float birthRate = 9.38; //births per 1000 people
    float deathRate = 12.9; // Deaths per 1000 people
    float immigrationRate = 3.59; // immigrants entering per 1000 people

    cout << "Current population: " << currentPopulation << endl; 
    cout << "Current Birth Rate: " << birthRate << endl;
    cout << "Current Death Rate: " << deathRate << endl;
    cout << "Current Immigration Rate: " << immigrationRate << endl;

    cout << "One year later: " << endl;

    int numberOfBirths = (currentPopulation / 1000) * birthRate;
    int numberOfDeaths = (currentPopulation / 1000) * deathRate;
    int numberOfImmigrations = (currentPopulation / 1000) * immigrationRate;
    

    cout << "Total Number Of Births: " << numberOfBirths << endl;
    cout << "Total Number Of Deaths: " << numberOfDeaths << endl;
    cout << "Total Number Of Immigrations: " << numberOfImmigrations << endl;
    cout << "Total Current Population: " << currentPopulation +((numberOfImmigrations + numberOfBirths) - numberOfDeaths) << endl;
    

 return 0;
}