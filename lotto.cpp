#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

void wypiszJSON (int a);
{
    cout << "{ \"liczba\": "<<a<<"}\n";
}
void wypiszlosowyJSON(int a)
{
    cout << "{ \"losowaliczba\": "<< +1 + ( rand()%(a+1))<<"}\n";
}
void lottoJSON()
{
    ofstream wyjscie;
    wyjscie.open("wyj.txt");
    wyjscie << "[\n";

    cout << "Witaj w Lotto! Za 5 sekund nastąpi losowanie"

    for (int a=6-1; a>=0; a--)
    {
        wyjscie <<"\t{\n\t\"lotto"<<a<<"\":"<< +1 + ( rand()%(49+1))<<"\n\t},\n";
    }
    wyjscie <<"\n]";
    wyjscie.close();
}
int main()
{
    srand(time(NULL));

    system("PAUSE");
    return 0;

}