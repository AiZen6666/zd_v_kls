#include <iostream>
#include <cstring>


using namespace std;

struct ZNAK
{
	char NAME[50];
	char ZODIAC[20];
    int d1;
    int d2;
    int d3;
};

void main()
{
    setlocale(LC_ALL, "russian");
    ZNAK Book[3], tmp; int i; char ZODIAC[20];
    for (i = 0; i < 3; i++)
    {
        cout << "им€ :\ ";
        cin >> Book[i].NAME;
        cout << "зодиака:\ ";
        cin >> Book[i].ZODIAC;
        cout << "день рождени€   :\ ";
        cin >> Book[i].d1;
        cout << "мес€ц рождени€  :\ ";
        cin >> Book[i].d2;
        cout << "год рождени€    :\ ";
        cin >> Book[i].d3;
        cout << endl;

    }
    for (i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            if (Book[j].d2 > Book[j + 1].d2)
            {
                tmp = Book[j];
                Book[j] = Book[j + 1];
                Book[j + 1] = tmp;
            }
    cout << "—ортировка по мес€цам" << endl;
    for (i = 0; i < 3; i++)
        cout << Book[i].NAME << "\t" << Book[i].ZODIAC << "\t" << Book[i].d1 << " / " << Book[i].d2 << " / " << Book[i].d3 << endl;
    cout << "¬ведите знак зодиака ";
    cin >> ZODIAC;
    for (i = 0; i < 3; i++)
        if (strcmp(ZODIAC, Book[i].ZODIAC) == 0)

            cout << Book[i].NAME << " " <<Book[i].ZODIAC << " " <<  Book[i].d1 << "." << Book[i].d2 << "." <<Book[i].d3 << endl;
    system("pause");

    return;
}


