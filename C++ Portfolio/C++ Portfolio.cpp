
#include <iostream>
#include <string>
using namespace std;




 string needs_water(int days, bool is_succulent) {

    if (days > 3 && is_succulent == false) {
        return "Time to water the plant.";
    }
    else if (days <= 12 && is_succulent == true) {
        return "Don't water the plant.";
    }
    else if (days >= 13 && is_succulent == true) {
        return "Don't water the plant!";
    }
    else {
        return "Don't water the plant!";
    }
}



int main() {

    /********************* EXERCISE 1: Watering App: Functions and Logical Operators****************
Description: Defining a function called "needs_water" that takes two parameters (and integer and a bool) and returns a string message about whether or not to water the plant.*/

    int daysnowater;
    string answersucculent;
    bool succulent = false;

    cout << "Hey hey! It's time to know if you plant is thirsty. How many days have passed since you watered your plant?: \n";
    cin >> daysnowater;
    cout << "\n";

         if (daysnowater >= 7) {
        cout << "Wow! More than a week? But wait, I need to know one thing, is it succulent?\n";
        }
            else {
        cout << "Nice, it seems like you appreciate your plant, but wait, I need to know one thing, is it succulent?\n";
        }
    cin >> answersucculent;
         if (answersucculent == "Yes") {
            succulent = true;
         }
         else if (answersucculent == "yes") {
             succulent = true;
         }
        else {
            succulent = false;
        }



    cout << needs_water(daysnowater, succulent) << endl << endl;






/********************* EXERCISE 2: Paella Expert: Using variables *************************
Description: This code calculates the quantities of rice, chicken, vegetables, and saffron needed to make a specified number of servings of paella.*/

    double userInput, rice, chicken, vegetables, saffron;

    cout << "Hello! How many servings of paella would you like to make today?\n";
    cin >> userInput;

    // 4 servings of paella = 2 cups of rice, 1 chicken breast, 1 cup of vegetables, 0.05 grams of saffron.
    rice = userInput * 2;
    chicken = userInput * 1;
    vegetables = userInput * 1;
    saffron = userInput * 0.05;

    cout << "To make " << userInput << " servings of paella, you will need: \n";
    cout << rice << " cups of rice.\n";
    cout << chicken << " chicken breast.\n";
    cout << vegetables << " cup of vegetables.\n";
    cout << saffron << " grams of saffron.\n";
    cout << "Enjoy your meal with spanish taste!";

 


    
    
    return 0;
}
