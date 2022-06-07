#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n\t Rooms available: ";
    cin >> Qrooms;
    cout << "\n\t Pasta available: ";
    cin >> Qpasta;
    cout << "\n\t Burger available: ";
    cin >> Qburger;
    cout << "\n\t Noodles available: ";
    cin >> Qnoodles;
    cout << "\n\t Shake available: ";
    cin >> Qshake;
    cout << "\n\t Chicken-roll available: ";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Please select for the given menu ";
    cout << "\n\n 1) Rooms";
    cout << "\n\n 2) Pasta";
    cout << "\n\n 3) Burger";
    cout << "\n\n 4) Noodles";
    cout << "\n\n 5) Shake";
    cout << "\n\n 6) Chicken roll";
    cout << "\n\n 7) Information regarding sales and collection ";
    cout << "\n\n 7) Exit";

    cout << "\n\n  Please enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n\t\tEnter the no of rooms u want.";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + (quant * 1200);
            cout << "\n\n\t\t " << quant << " room/rooms have been alloted to you. ";
        }
        else
        {
            cout << "\n\t Only " << Qrooms - Srooms << " rooms remaining in the hotel ";
        }
        break;
    case 2:
        cout << "\n\n\t\tEnter the quantity of pasta u want.";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + (quant * 250);
            cout << "\n\n\t\t " << quant << " pasta is your order";
        }
        else
        {
            cout << "\n\t Only " << Qpasta - Spasta << " pasta remaining in the hotel ";
        }
        break;
    case 3:
        cout << "\n\n\t\tEnter the quantity of burger u want.";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + (quant * 200);
            cout << "\n\n\t\t " << quant << " burger is your order";
        }
        else
        {
            cout << "\n\t Only " << Qburger - Sburger << " burger remaining in the hotel ";
        }
        break;
    case 4:
        cout << "\n\n\t\tEnter the quantity of noodles u want.";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + (quant * 180);
            cout << "\n\n\t\t " << quant << "noodles is your order";
        }
        else
        {
            cout << "\n\t Only " << Qnoodles - Snoodles << "noodles remaining in the hotel ";
        }
        break;
    case 5:
        cout << "\n\n\t\tEnter the quantity of shake u want.";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + (quant * 100);
            cout << "\n\n\t\t " << quant << "shake is your order";
        }
        else
        {
            cout << "\n\t Only " << Qshake - Sshake << "shake remaining in the hotel ";
        }
        break;
    case 6:
        cout << "\n\n\t\tEnter the quantity of chicken-roll u want.";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + (quant * 220);
            cout << "\n\n\t\t " << quant << "chicken is your order";
        }
        else
        {
            cout << "\n\t Only " << Qchicken - Schicken << "chicken remaining in the hotel ";
        }
        break;
    case 7:
        cout << "\n\t\tDetails of sales and collection. ";
        cout << "\n\n Number of rooms we had: " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent: " << Srooms;
        cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day: " << Total_rooms;

        cout << "\n\n Amount of pasta we had: " << Qpasta;
        cout << "\n\n Amount of pasta we sold: " << Spasta;
        cout << "\n\n Remaining pasta: " << Qpasta - Spasta;
        cout << "\n\n Total pasta collection for the day: " << Total_pasta;

        cout << "\n\n Amount of burger we had: " << Qburger;
        cout << "\n\n Amount of burger we sold: " << Sburger;
        cout << "\n\n Remaining burger: " << Qburger - Sburger;
        cout << "\n\n Total burger collection for the day: " << Total_burger;

        cout << "\n\n Amount of noodles we had: " << Qnoodles;
        cout << "\n\n Amount of noodles we sold: " << Snoodles;
        cout << "\n\n Remaining noodles: " << Qnoodles - Snoodles;
        cout << "\n\n Total noodles collection for the day: " << Total_noodles;

        cout << "\n\n Amount of shake we had: " << Qshake;
        cout << "\n\n Amount of shake we sold: " << Sshake;
        cout << "\n\n Remaining shake: " << Qshake - Sshake;
        cout << "\n\n Total shake collection for the day: " << Total_shake;

        cout << "\n\n Amount of chicken-roll we had: " << Qchicken;
        cout << "\n\n Amount of chicken-roll we sold: " << Schicken;
        cout << "\n\n Remaining chicken-roll: " << Qchicken - Schicken;
        cout << "\n\n Total chicken-roll collection for the day: " << Total_chicken;

        cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
        break;
    case 8:
        exit(0);

    default:
        cout << "Please select a number mentioned above! ";
    }
    goto m;
    return 0;
}