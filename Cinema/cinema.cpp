#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int rows, columns, toReserve, seatNo, reservedCount = 0;
    char quit;
    bool askUser = true;
    cout << "\n \t Congrats you are now owner of Cinema-X !!!! Lets make sitting plan!" << endl;
    cout << "Enter number of Rows of seats:" << endl;
    cin >> rows;
    cout << "Enter number of Columns of seats:" << endl;
    cin >> columns;
    int reservedSeats[rows * columns] = {0};
    char storeReservedStatus[rows * columns] = {0};

    cout << endl;

    for (int i = 0; i < rows * columns; ++i)
    {
        storeReservedStatus[i] = 'F';
    }

    do
    {

    start:
        seatNo = 1;
        int status = 0;
        for (int i = 1; i <= rows; i++)
        {

            for (int j = 1; j <= columns; j++)
            {

                cout << "\tSeat No." << seatNo << "(" << i << "-" << j << storeReservedStatus[status] << ")";
                status++;
                seatNo++;
            }
            cout << endl
                 << endl;
        }
        cout << "Enter Seat number you want to reserve:" << endl;
        cin >> toReserve;

        if (toReserve < 1 || toReserve > (rows * columns))
        {
            cout << "Invalid Seat Number!" << endl;
        }

        else
        {
            for (int check = 0; check < (rows * columns); check++)
            {
                if (toReserve == reservedSeats[check])
                {
                    cout << "Sorry! Seat is already reserved.Choose any another." << endl;
                    goto start;
                }
            }

            for (int k = 1; k <= seatNo; k++)
            {
                if (toReserve == k)
                {
                    cout << "Congrats! your Seat Number " << k << " is reserverd" << endl;
                    reservedSeats[reservedCount] = toReserve;
                    storeReservedStatus[toReserve - 1] = 'R';
                    reservedCount++;
                }
            }
        }

        cout << "Press Q to quit or C to continue:" << endl;
        cin >> quit;
        if (quit == 'Q' || quit == 'q')
        {
            askUser = false;
        }
        else if (quit == 'c' || quit == 'C')
        {
            askUser = true;
        }
        else
        {
            cout << "Invalid input!" << endl;
        }

    } while (askUser);

    // delete[] reservedSeats;
    // delete[] storeReserved;
    return 0;
}