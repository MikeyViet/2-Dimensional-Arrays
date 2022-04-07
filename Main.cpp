/****************************************************************
 *	Unit 3 Assignment - Multi-Dimensional Arrays
 *	Student:		Michael Nguyen
 *	Teacher: 		Tyson McMillan
 *	Description:This program shows us how multi-dimensional arrays
 *		work within C++. How to create, populate, and print the
 *		elements within the array.
 *****************************************************************/
#include <iostream>
using namespace std;
/*
Research Input data: go to http://www.weather.com
Pick two cities of your choice. Fill in the temperature for the 7 days of this
week of both cities. Fill in this text data table, which will be used in your
program.
//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of
your cities
//Data Table
//City X, Day X: Temp
Pensacola, Day 1: 75
Pensacola, Day 2: 71
Pensacola, Day 3: 71
Pensacola, Day 4: 74
Pensacola, Day 5: 76
Pensacola, Day 6: 78
Pensacola, Day 7: 79
Fort Worth, Day 1: 70
Fort Worth, Day 2: 71
Fort Worth, Day 3: 87
Fort Worth, Day 4: 87
Fort Worth, Day 5: 86
Fort Worth, Day 6: 89
Fort Worth, Day 7: 77
*/

int main() {
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK];	//Array for 1st pass from Dr. T
	int temperatureOfCombinedArrays[CITY][WEEK];	//Array from combined single arrays

	int cityOne[WEEK];	//Array for Pensacola temperatures
	int cityTwo[WEEK];	//Array for Fort Worth temperatures
  // Note your input data from the above
  cout << "Enter all temperature for a week of first city and then second "
          "city. \n";

  // Inserting the values into the temperature array
  // note for every dimension of the array you need a for loop 2 dimensions = 2
  // for loops
  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
      cin >> temperature[i][j];
    }
  }

  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array
  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      cout << "City " << i + 1 << ", Day " << j + 1 << " = "
           << temperature[i][j] << endl;
    }
  }
  /*For up to 5 Points Extra Credit
     Expand this program:
     1. Create a one dimensional array, cityOne[7] to store the 7 temperatures
     of city 1, assume that value 0 represents day 1, 1 represents day 2....
     2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of
     city 2 , assume that value 0 represents day 1, 1 represents day 2....
     3. Using a for loop (or nested for loop), feed the data of CityOne[] and
     CityTwo[] into temperature[i][j], where i is index of the City Number, and
     j is the index of the temp for the day.
     4. print the results of temperature[i][j]; to the screen.
   */

	//Loop to input data for City 1 which is Pensacola, FL
	for(int i = 0; i < WEEK; i++)
		{
			cout << "Please enter the temperature for day " << i + 1 << " of the first city: ";
			cin >> cityOne[i];
		}

	cout << endl << endl;
		//Loop to input data for City 2 which is Fort Worth, TX
	for(int i = 0; i < WEEK; i++)
		{
			cout << "Please enter the temperature for day " << i + 1 << " of the second city: ";
			cin >> cityTwo[i];
		}

	for(int i = 0; i < CITY; i++)
		{
			for(int j = 0; j < WEEK; j++)
				{
					temperatureOfCombinedArrays[i][j] = cityOne[i];
					temperatureOfCombinedArrays[i][j] = cityTwo[j];
				}
		}


	  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array
  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      cout << "City " << i + 1 << ", Day " << j + 1 << " = "
           << temperatureOfCombinedArrays[i][j] << endl;
    }
  }

	return 0;
}
