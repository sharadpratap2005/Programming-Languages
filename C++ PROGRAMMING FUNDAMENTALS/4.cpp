/*five bikers compete in race such that they drive at a costant speed which may or may not be the same as the other.To qualify the race, the speed of a racer must be more than the average speed of all 5 racers. Take as input the speed of each racer and print back the speeds if qualifying racers. */
#include <iostream>
using namespace std;
int main()
{
    float speed[5], average, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the speed of bike " << i + 1 << endl;
        cin >> speed[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum += speed[i];
    }
    average = sum / 5;

    cout << "List of Qualifying speeds" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (speed[i] > average)
        {
            cout << "Biker " << i + 1 << " qualifies with the speed of ";
            cout << speed[i] << endl;
        }
    }
    return 0;
}