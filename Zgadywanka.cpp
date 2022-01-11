#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Zgadywanka by Adam Celej" << endl;
    cout << "Pomylalem sobie liczbe z zakresu od 1 do 100. Zgadnij jaka to liczba!" << endl;
    srand(time(NULL));
    int liczba=(rand()%100)+1, strzal = 0, losowanie, minzakres=0, maxzakres=100;
    cout << liczba << endl;
    cout << "Zgadnij liczbe: " << endl;
    cin >> strzal;
    while (strzal != liczba)
    {
        if (strzal<liczba)
        {
            while (maxzakres < strzal && maxzakres > 100 && maxzakres < liczba);
            {
                maxzakres = (rand()%100)+1;
            }
            cout << "Nie, strzelaj z zakresu " << strzal+1 << " a " << maxzakres << endl;
        }
        else if(strzal>liczba)
        {
            while (minzakres < strzal && minzakres < 100 && minzakres > liczba);
            {
                minzakres = (rand()%100)+1;
            }
            cout << "Nie, strzelaj z zakresu " << minzakres << " a " << strzal+1 << endl;
        }
        else if(strzal=liczba)
        {
            cout << "Delta! Bravo! Officer down!!! Trafiles liczbe!!!!";
        }

    }
    return 0;
}

