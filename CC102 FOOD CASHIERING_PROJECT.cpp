#include <iostream>
#include <string>
using namespace std;

int main()
{
    int again;
    char repeat;
    string name;
    int meal;
    int mealQty;
    int drinks;
    int drinksQty;
    int FoodPrice[10] = { 45.00,30.00,35.00,35.00,199.00,20.00,45.00,65.00,70.00,10.00 };
    int SF1 = 0;
    int SF2 = 0;
    int SF3 = 0;
    int SF4 = 0;
    int SF5 = 0;
    int SF6 = 0;
    int SF7 = 0;
    int SF8 = 0;
    int SF9 = 0;
    int SF10 = 0;
    int DrinksPrice[8] = { 30.00,25.00,35.00,25.00,40.00,40.00,35.00,60.0 };
    int SD1 = 0;
    int SD2 = 0;
    int SD3 = 0;
    int SD4 = 0;
    int SD5 = 0;
    int SD6 = 0;
    int SD7 = 0;
    int SD8 = 0;
    double cash;
    double total = 0;

    cout << "               |---------------------------------------------|" << endl;
    cout << "               |      Welcome to Weaklings Pay and Order!    |" << endl;
    cout << "               |---------------------------------------------|" << endl;

    cout << endl;
    cout << endl;

    {

        cout << "Please Enter a Name : ";
        cin >> name;
        cout << endl;
        cout << "-Hi! " << name << " Welcome to Weaklings Pay and Order";
        cout << endl;
        cout << endl;
        cout << "What is your Order " << name << "?" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "              |------------------------------------------|" << endl;
        cout << "              |---------------Fast Food Menu-------------|" << endl;
        cout << "              |------------------------------------------|" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "           &~Snacks~&                              &~Meal~& " << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |          Yumburger          |       |             Rice            |" << endl;
        cout << " |            [1]              |=======|            (Unli)           |" << endl;
        cout << " |         Price: 45.00        |=======|             [6]             |" << endl;
        cout << " |                             |       |          Price: 20.00       |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "               ||                                     ||" << endl;
        cout << "               ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |          Spaghetti          |=======|         Fried Chicken       |" << endl;
        cout << " |            Solo             |=======|             Solo            |" << endl;
        cout << " |            [2]              |       |              [7]            |" << endl;
        cout << " |          Price: 30.00       |       |           Price: 45.00      |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "               ||                                     ||" << endl;
        cout << "               ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |         French Fries        |       |         Burger Steak        |" << endl;
        cout << " |             Solo            |=======|             Solo            |" << endl;
        cout << " |             [3]             |=======|              [8]            |" << endl;
        cout << " |         Price: 35.00        |       |         Price: 65.00        |" << endl;
        cout << " |                             |       |                             |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "               ||                                     ||" << endl;
        cout << "               ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |             Pie             |       |             Sisig           |" << endl;
        cout << " |          (Distinct)         |=======|             Solo            |" << endl;
        cout << " |            Solo             |=======|              [9]            |" << endl;
        cout << " |             [4]       	    |       |         Price: 70.00       |" << endl;
        cout << " |         Price: 35.00        |       |                             |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "               ||                                     ||" << endl;
        cout << "               ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |            Pizza            |       |       Lumpia (Shanghai)     |" << endl;
        cout << " |            Solo             |=======|             Solo            |" << endl;
        cout << " |            [5]              |=======|              [10]           |" << endl;
        cout << " |         Price: 199.00       |       |         Price: 10.00        |" << endl;
        cout << " |                             |       |                             |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "                                |------|" << endl;
        cout << "                                |DRINKS|" << endl;
        cout << "                                |------|" << endl;
        cout << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |             Coke            |       |            McFlurry         |" << endl;
        cout << " |             Solo            |       |              Solo           |" << endl;
        cout << " |              [1]            |       |              [5]            |" << endl;
        cout << " |          Price: 30.00       |       |           Price: 40.00      |" << endl;
        cout << " |                             |       |                             |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "                 ||                                     ||" << endl;
        cout << "                 ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |            Ice Tea          |       |             Sundae          |" << endl;
        cout << " |             Solo            |       |              Solo           |" << endl;
        cout << " |              [2]            |       |              [6]            |" << endl;
        cout << " |          Price: 25.00       |       |           Price: 40.00      |" << endl;
        cout << " |                             |       |                             |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "                 ||                                     ||" << endl;
        cout << "                 ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |           Coke Float        |       |             McFloat         |" << endl;
        cout << " |              Solo           |       |              Solo           |" << endl;
        cout << " |              [3]            |       |               [7]           |" << endl;
        cout << " |          Price: 35.00       |       |           Price: 35.00      |" << endl;
        cout << " |                             |       |                             |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << "                 ||                                     ||" << endl;
        cout << "                 ||                                     ||" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << " |        Pineapple Juice      |       |          Milk Tea (Big)     |" << endl;
        cout << " |              Solo           |       |               Solo          |" << endl;
        cout << " |              [4]            |       |           (Distinct)        |" << endl;
        cout << " |          Price: 25.00       |       |               [8]           |" << endl;
        cout << " |                             |       |           Price: 60.00      |" << endl;
        cout << " +-----------------------------+       +-----------------------------+" << endl;
        cout << endl;

        cout << endl;
        do
        {

            do
            {
                cout << "What is your meal: ";
                cin >> meal;
                cout << "How many " << name << "?: ";
                cin >> mealQty;
                cout << endl;
                cout << "Are you sure with this? (Y/N): ";
                cin >> repeat;

            } while (repeat == 'N' || repeat == 'n');
            cout << endl;
            cout << endl;
            do
            {
                cout << endl;
                cout << "================================" << endl;
                cout << endl;
                cout << "What is your drink: ";
                cin >> drinks;
                cout << "How many " << name << "?: ";
                cin >> drinksQty;
                cout << endl;
                cout << "Are you sure with this? (Y/N): ";
                cin >> repeat;
            } while (repeat == 'N' || repeat == 'n');
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "     |-----------------------|" << endl;
            cout << "     |---Your Ordered Item---|" << endl;
            cout << "     |-----------------------|" << endl;
            cout << endl;

            switch (meal)
            {
            case 1:
                cout << " YumBurger..............Php 45.00 X " << mealQty << " = " << mealQty * FoodPrice[0] << endl;
                SF1 = mealQty * FoodPrice[0];
                break;

            case 2:
                cout << " Spaghetti...........Php 30.00 X " << mealQty << " = " << mealQty * FoodPrice[1] << endl;
                SF2 = mealQty * FoodPrice[1];
                break;

            case 3:
                cout << " FrenchFries.....Php 35.00 X " << mealQty << " = " << mealQty * FoodPrice[2] << endl;
                SF3 = mealQty * FoodPrice[2];
                break;

            case 4:
                cout << " Pie.....Php 35.00 X " << mealQty << " = " << mealQty * FoodPrice[3] << endl;
                SF4 = mealQty * FoodPrice[3];
                break;

            case 5:
                cout << " Pizza.....Php 199.00 X " << mealQty << " = " << mealQty * FoodPrice[4] << endl;
                SF5 = mealQty * FoodPrice[4];
                break;

            case 6:
                cout << " Rice..........Php 20.00 X" << mealQty << " = " << mealQty * FoodPrice[5] << endl;
                SF6 = mealQty * FoodPrice[5];
                break;

            case 7:
                cout << " Fried Chicken........Php 45.00 X" << mealQty << " = " << mealQty * FoodPrice[6] << endl;
                SF7 = mealQty * FoodPrice[6];
                break;

            case 8:
                cout << " BurgerSteak........Php 65.00 X" << mealQty << " = " << mealQty * FoodPrice[7] << endl;
                SF8 = mealQty * FoodPrice[7];
                break;

            case 9:
                cout << " Sisig........Php 70.00 X" << mealQty << " = " << mealQty * FoodPrice[8] << endl;
                SF9 = mealQty * FoodPrice[8];
                break;

            case 10:
                cout << " LumpiaShanghai........Php 10.00 X" << mealQty << " = " << mealQty * FoodPrice[9] << endl;
                SF10 = mealQty * FoodPrice[9];
                break;
            }
            {
                switch (drinks)
                {
                case 1:
                    cout << " Coke................Php 30.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[0] << endl;
                    SD1 = drinksQty * DrinksPrice[0];
                    break;

                case 2:
                    cout << " Iced Tea............Php 25.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[1] << endl;
                    SD2 = drinksQty * DrinksPrice[1];
                    break;

                case 3:
                    cout << " Coke Float.............Php 35.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[2] << endl;
                    SD3 = drinksQty * DrinksPrice[2];
                    break;

                case 4:
                    cout << " Pineapple Juice............Php 25.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[3] << endl;
                    SD4 = drinksQty * DrinksPrice[3];
                    break;

                case 5:
                    cout << " McFlurry............Php 40.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[4] << endl;
                    SD5 = drinksQty * DrinksPrice[4];
                    break;

                case 6:
                    cout << " Sundae.............Php 40.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[5] << endl;
                    SD6 = drinksQty * DrinksPrice[5];
                    break;

                case 7:
                    cout << " McFloat............Php 35.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[6] << endl;
                    SD7 = drinksQty * DrinksPrice[6];
                    break;

                case 8:
                    cout << " Milk Tea (Big)...............Php 60.00 X " << drinksQty << " = " << drinksQty * DrinksPrice[7] << endl;
                    SD8 = drinksQty * DrinksPrice[7];
                    break;
                }


                total = 0;
                total = total + SF1 + SF2 + SF3 + SF4 + SF5 + SF6 + SF7 + SF8 + SF9 + SF10 + SD1 + SD2 + SD3 + SD4 + SD5 + SD6 + SD7 + SD8;
                cout << endl;
                cout << endl;
                cout << "Total Amount is: " << total << endl;
                cout << endl;
                {
                    cout << "Cash: ";
                    cin >> cash;

                    if (cash < total)
                    {

                        cout << endl;
                        cout << "INSUFFICIENT MONEY! PLEASE ADD CASH" << endl;
                        cout << "Cash: ";
                        cin >> cash;
                        cout << "Change: -" << cash - total;
                    }


                    else if (cash > total)
                    {
                        cout << "Change: -" << cash - total;
                    }

                }

                cout << endl;
                cout << endl;
            }
            cout << "Do you want to add your Order? " << name << "?(Y/N): ";
            cin >> repeat;
        } while (repeat == 'Y' || repeat == 'y');
    }
    {
        cout << endl;
        cout << endl;
        cout << "ENJOY YOUR MEAL " << name << "!.................." << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
}
