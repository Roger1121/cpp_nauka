#include<bits/stdc++.h>
using namespace std;
int wybor;

void menu();

void spiewnik();

void kalkulator();

void dodawanie()
{
    int a;
    int b;
    cout<<"Podaj argumenty do dzialania:";
    cin>>a>>b;
    cout<<"wynik:"<<a+b;
    cout<<endl<<endl<<"1. Kalkulator"<<endl<<"2. Menu glowne"<<endl;
    int wybor;
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            kalkulator();
            break;
        case 2:
            menu();
            break;
    }
}

void odejmowanie()
{
    int a;
    int b;
    cout<<"Podaj argumenty do dzialania:";
    cin>>a>>b;
    cout<<"wynik:"<<a-b;
    cout<<endl<<endl<<"1. Kalkulator"<<endl<<"2. Menu glowne"<<endl;
    int wybor;
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            kalkulator();
            break;
        case 2:
            menu();
            break;
    }
}

void mnozenie()
{
    int a;
    int b;
    cout<<"Podaj argumenty do dzialania:";
    cin>>a>>b;
    cout<<"wynik:"<<a*b;
    cout<<endl<<endl<<"1. Kalkulator"<<endl<<"2. Menu glowne"<<endl;
    int wybor;
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            kalkulator();
            break;
        case 2:
            menu();
            break;
    }
}

void dzielenie()
{
    int a;
    int b;
    cout<<"Podaj argumenty do dzialania:";
    cin>>a>>b;
    cout<<"wynik:"<<a/b;
    cout<<endl<<endl<<"1. Kalkulator"<<endl<<"2. Menu glowne"<<endl;
    int wybor;
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            kalkulator();
            break;
        case 2:
            menu();
            break;
    }
}

void kalkulator()
{
    cout<<endl<<"\t"<<"KALKULATOR"<<endl<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Powrot do menu"<<endl;
    cout<<"Wybierz akcje:";
    int dzialanie;
    cin>>dzialanie;
    switch(dzialanie)
    {
        case 1:
            dodawanie();
            break;
        case 2:
            odejmowanie();
            break;
        case 3:
            mnozenie();
            break;
        case 4:
            dzielenie();
            break;
        case 5:
            menu();
            break;
        default:
            cout<<"Niepoprawny wybor"<<endl;
            kalkulator();
            break;
    }
}
void TTDC()
{
    for(int i=1; i<=12; i++)
    {
        switch(i)
        {
            case 1:
                cout<<"On the First day of Christmas my true love sent to me"<<endl;
                break;
            case 2:
                cout<<"On the Second day of Christmas my true love sent to me"<<endl;
                break;
            case 3:
                cout<<"On the Third day of Christmas my true love sent to me"<<endl;
                break;
            case 4:
                cout<<"On the Fourth day of Christmas my true love sent to me"<<endl;
                break;
            case 5:
                cout<<"On the Fifth day of Christmas my true love sent to me"<<endl;
                break;
            case 6:
                cout<<"On the Sixth day of Christmas my true love sent to me"<<endl;
                break;
            case 7:
                cout<<"On the Seventh day of Christmas my true love sent to me"<<endl;
                break;
            case 8:
                cout<<"On the Eighth day of Christmas my true love sent to me"<<endl;
                break;
            case 9:
                cout<<"On the Ninth day of Christmas my true love sent to me"<<endl;
                break;
            case 10:
                cout<<"On the Tenth day of Christmas my true love sent to me"<<endl;
                break;
            case 11:
                cout<<"On the Eleventh day of Christmas my true love sent to me"<<endl;
                break;
            case 12:
                cout<<"On the Twelfth day of Christmas my true love sent to me"<<endl;
                break;
        }
        switch(i)
        {
            case 12:
                cout<<"Twelve Drummers Drumming"<<endl;
            case 11:
                cout<<"Eleven Pipers Piping"<<endl;
            case 10:
                cout<<"Ten Lords a-Leaping"<<endl;
            case 9:
                cout<<"Nine Ladies Dancing"<<endl;
            case 8:
                cout<<"Eight Maids a-Milking"<<endl;
            case 7:
                cout<<"Seven Swans a-Swimming"<<endl;
            case 6:
                cout<<"Six Geese a-Laying"<<endl;
            case 5:
                cout<<"Five Gold Rings"<<endl;
            case 4:
                cout<<"Four Calling Birds"<<endl;
            case 3:
                cout<<"Three French Hens,"<<endl;
            case 2:
                cout<<"Two Turtle Doves"<<endl;
                cout<<"and ";
            case 1:
                cout<<"a Partridge in a Pear Tree."<<endl;
                break;
        }
    }
    cout<<endl<<"Wcisnij 8, aby wrocic do spiewnika."<<endl;
    cout<<"Wcisnij 9, aby wrocic do menu glownego."<<endl;
    int g;
    cin>>g;
    switch(g)
    {
        case 9:
            menu();
            break;
        case 8:
            spiewnik();
            break;
        default:
            cout<<"Bledny wybor. Przeniesiono do menu glownego"<<endl;
            menu();
            break;
    }
}

void BoB()
{
    for (int i=99;i>=3;i--)
    {
        cout<<i<<" bottles of beer on the wall, "<<i<<" bottles of beer."<<endl;
        cout<<"Take one down and pass it around - "<<i-1<<" bottles of beer on the wall."<<endl;
    }
    cout<<"2 bottles of beer on the wall, 2 bottles of beer."<<endl;
    cout<<"Take it down and pass it around - 1 bottle of beer on the wall."<<endl;
    cout<<"1 bottle of beer on the wall, 1 bottle of beer."<<endl;
    cout<<"Take it down and pass it around - no more bottles of beer on the wall."<<endl;
    cout<<endl<<"Wcisnij 8, aby wrocic do spiewnika."<<endl;
    cout<<"Wcisnij 9, aby wrocic do menu glownego."<<endl;
    int g;
    cin>>g;
    switch(g)
    {
        case 9:
            menu();
            break;
        case 8:
            spiewnik();
            break;
        default:
            cout<<"Bledny wybor. Przeniesiono do menu glownego"<<endl;
            menu();
            break;
    }
}

void spiewnik()
{
    cout<<endl<<"\t"<<"SPIEWNIK"<<endl<<endl;
    cout<<"1. The Twelve Days of Christmas"<<endl;
    cout<<"2. 99 Bottles of Beer"<<endl;
    cout<<"3. Powrot do menu"<<endl;
    cout<<"wybierz akcje:";
    int dzialanie;
    cin>>dzialanie;
    switch(dzialanie)
    {
        case 1:
            TTDC();
            break;
        case 2:
            BoB();
            break;
        case 3:
            menu();
            break;
        default:
            cout<<"Niepoprawny wybor"<<endl;
            spiewnik();
            break;
    }
}

void zgadnij()
{
    int rand();
    int lba=rand()%100+1;
    cout<<endl<<"\t"<<"ZGADNIJ"<<endl;
    cout<<"Pomyslalem o liczbie z zakresu od 1 do 100. Zgadnij, o jakiej liczbie mysle."<<endl;
    int lbgr;
    cin>>lbgr;
    while(lbgr!=lba)
    {
        if(lbgr<lba) cout<<"Niestety nie, mysle o wiekszej liczbie"<<endl;
        else if(lbgr>lba) cout<<"Strzelasz za wysoko. Mysle o mniejszej liczbie."<<endl;
        cin>>lbgr;
    }
    cout<<"Brawo. Jak ci sie udalo zgadnac? Czy chcesz zagrac jeszcze raz?"<<endl;
    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
    int czy;
    cin>>czy;
    if (czy==1)
        zgadnij();
    else
    {
        cout<<"Dziekuje za gre. Przenoszenie do menu glownego."<<endl;
        menu();
    }
}

void KiK()
{
    int wyb;
    int wyg=0;
    cout<<endl<<"Witamy w grze kolko i krzyzyk."<<endl<<endl;
    cout<<"Jak grac?"<<endl;
    cout<<"Aby zaznaczyc wybrane pole wpisz kolejno numer"<<endl;
    cout<<"kolumny i wiersza zgodnie z ponizszym rysunkiem."<<endl;
    cout<<"  1 2 3"<<endl;
    cout<<"1 - - -"<<endl;
    cout<<"2 - - -"<<endl;
    cout<<"3 - - -"<<endl;
    int plan[5][5];
    for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++)
            plan[i][j]=0;
    enum gra{kolko=1, krzyzyk=2, ppole=0};
    int x, y;
    for(int k=1; k<=9; k++)
    {
        if(k%2==1)
        {
            cout<<"Teraz kolko"<<endl;
            for(;;)
            {
                cout<<"Wybierz pole: ";
                cin>>x>>y;
                if(plan[x][y]==ppole)
                {
                    plan[x][y]=kolko;
                    break;
                }
                else cout<<"Prosze wybrac niezajete pole"<<endl;
            }

        }
        else if(k%2==0)
        {
            cout<<"Teraz krzyzyk"<<endl;
            for(;;)
            {
                cout<<"Wybierz pole: ";
                cin>>x>>y;
                if(plan[x][y]==ppole)
                {
                    plan[x][y]=krzyzyk;
                    break;
                }
                else cout<<"Prosze wybrac niezajete pole."<<endl;
            }
        }
        for(int i=1; i<=3; i++)
        {
            for(int j=1; j<=3; j++)
            {
                if(plan[j][i]==ppole)
                    cout<<"-";
                else if(plan[j][i]==kolko)
                    cout<<"O";
                else if(plan[j][i]==krzyzyk)
                    cout<<"X";
            }
            cout<<endl;
        }
           if((plan[1][1]==plan[2][1]&&plan[2][1]==plan[3][1])||(plan[1][1]==plan[1][2]&&plan[1][2]==plan[1][3])||(plan[1][1]==plan[2][2]&&plan[2][2]==plan[3][3]))
            {
                wyg=1;
                if(plan[1][1]==kolko)
                {
                    cout<<"Gratulacje. Kolko wygrywa!!"<<endl;
                    cout<<"Czy chcecie zagrac jeszcze raz?"<<endl;
                    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
                    cin>>wyb;
                    if(wyb==1) KiK();
                    else
                    {
                        menu();
                        break;
                    }
                }
                else if(plan[1][1]==krzyzyk)
                {
                    cout<<"Gratulacje. Krzyzyk wygrywa!!"<<endl;
                    cout<<"Czy chcecie zagrac jeszcze raz?"<<endl;
                    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
                    cin>>wyb;
                    if(wyb==1) KiK();
                    else
                    {
                        menu();
                        break;
                    }
                }
            }
            if((plan[1][3]==plan[2][3]&&plan[2][3]==plan[3][3])||(plan[3][1]==plan[3][2]&&plan[3][2]==plan[3][3]))
            {
                wyg=1;
                if(plan[3][3]==kolko)
                {
                    cout<<"Gratulacje. Kolko wygrywa!!"<<endl;
                    cout<<"Czy chcecie zagrac jeszcze raz?"<<endl;
                    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
                    cin>>wyb;
                    if(wyb==1) KiK();
                    else
                    {
                        menu();
                        break;
                    }
                }
                else if(plan[3][3]==krzyzyk)
                {
                    cout<<"Gratulacje. Krzyzyk wygrywa!!"<<endl;
                    cout<<"Czy chcecie zagrac jeszcze raz?"<<endl;
                    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
                    cin>>wyb;
                    if(wyb==1) KiK();
                    else
                    {
                        menu();
                        break;
                    }
                }
            }
            if((plan[1][2]==plan[2][2]&&plan[2][2]==plan[3][2])||(plan[2][1]==plan[2][2]&&plan[2][2]==plan[2][3])||(plan[3][1]==plan[2][2]&&plan[2][2]==plan[1][3]))
            {
                wyg=1;
                if(plan[2][2]==kolko)
                {
                    cout<<"Gratulacje. Kolko wygrywa!!"<<endl;
                    cout<<"Czy chcecie zagrac jeszcze raz?"<<endl;
                    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
                    cin>>wyb;
                    if(wyb==1) KiK();
                    else
                    {
                        menu();
                        break;
                    }
                }
                else if(plan[2][2]==krzyzyk)
                {
                    cout<<"Gratulacje. Krzyzyk wygrywa!!"<<endl;
                    cout<<"Czy chcecie zagrac jeszcze raz?"<<endl;
                    cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
                    cin>>wyb;
                    if(wyb==1) KiK();
                    else
                    {
                        menu();
                        break;
                    }
                }
            }
    }
    /*switch(wyg)
    {
        case 0:
            cout<<"Wyglada na to, ze mamy remis. Czy chcecie zagrac ponownie?";
            cout<<"1. Tak"<<endl<<"2. Nie"<<endl;
            cin>>wyb;
            if(wyb==1) KiK();
            else menu();
            break;
        default:
            break;
    }*/
}

void moneta()
{
    int ile, wyb;
    cout<<endl<<"   "<<"Symulator rzutu moneta"<<endl<<endl;
    cout<<"Ile rzutow chcesz zasymulowac?";
    cin>>ile;
    for(int i=1; i<=ile; i++)
    {
        int wers=rand();
        if(wers%2==0)
            cout<<"O"<<endl;
        else cout<<"R"<<endl;
    }
    cout<<endl<<"Dziekuje za skorzystanie z symulatora.";
    cout<<endl<<"Czy chcesz wlaczyc symulacje jeszcze raz?"<<endl<<"1. Tak      2.Nie"<<endl;
    cin>>wyb;
    switch(wyb)
    {
        case 1:
            moneta();
            break;
        case 2:
            menu();
            break;
        default:
            cout<<"Nie ma takiej opcji. Przenosze do menu glownego."<<endl;
            menu();
            break;
    }
}

void losuj()
{
    int a, b, c;
    a=rand()%9+1;
    b=rand()%9+1;
    c=rand()%9+1;
    cout<<".";
    for(int i=7; i>0; i--) cout<<"-";
    cout<<"."<<endl;
    cout<<"|       |"<<endl;
    cout<<"| "<<a<<" "<<b<<" "<<c<<" |"<<endl;
    cout<<"|       |"<<endl;
    cout<<".";
    for(int i=7; i>0; i--) cout<<"-";
    cout<<"."<<endl<<endl;
    if(a==b&&a==c)
        cout<<"Gratuluje wygranej. Czy chcesz sprobowac jeszcze raz?"<<endl<<"1. Tak        2. Nie"<<endl;
    else cout<<"Niestety, tym razem ci nie wyszlo. Moze sprobojesz jeszcze raz?"<<endl<<"1. Tak        2. Nie"<<endl;
    int w;
    cin>>w;
    switch(w)
    {
        case 1:
            losuj();
            break;
        case 2:
            menu();
            break;
        default:
            cout<<"Jezeli nie jestes w stanie wybrac, to przeniose cie do menu."<<endl;
            menu();
            break;
    }

}

void bandit()
{
    char g;
    cout<<endl<<"   Jednoreki bandyta"<<endl<<endl;
    cout<<"Wygrywaja trzy takie same cyfry w jednej linii."<<endl<<"Wcisnij 5 by zalosowac.";
    cin>>g;
    switch(g)
    {
        case '5':
            losuj();
            break;
        default:
            cout<<"Tym razem przymkne oko na twoja ignorancje i przejde do gry."<<endl;
            losuj();
            break;
    }
}

void Warcaby()
{
    int biale=12, czarne=12;
    int t[10][10];
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            t[i][j]=0;
    for(int i=1; i<=8; i++)
        for(int j=1; j<=8; j++)
        {
            if(((j==1||j==3)&&i%2==0)||(j==2&&i%2!=0)) t[i][j]=1;
            else if(((j==6||j==8)&&i%2!=0)||(j==7&&i%2==0)) t[i][j]=2;
        }
    cout<<endl<<"\t"<<"WARCABY"<<endl<<endl;
    cout<<"Jak grac:"<<endl;
    cout<<"Aby wykonac ruch podaj nr kolumny i wiersza, na ktorym stoi pionek, a nastepnie kolumny i wiersza, na ktorych ma stanac"<<endl;
    cout<<"Zasady:"<<endl;
    cout<<"1.Zakaz bicia do tylu"<<endl;
    cout<<"2.Mozna zbic tylko jeden pionek na raz"<<endl;
    cout<<"3.Bicie nie jest przymusowe"<<endl;
    cout<<"4.Damki poruszaja sie o jedno pole pod skosem do przodu lub do tylu"<<endl<<endl;
    cout<<"Wszystko jasne? To zaczynamy."<<endl;
    cout<<"P.S. Nie moglem znalezc  odpowiednich znakow, wiec pionki biale sa oznaczone jako *, a czarne jako O. Powodzenia"<<endl<<endl;
    int x1, y1, x2, y2, ruchy=0;
    while(biale&&czarne)
    {
        ruchy++;
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                switch(t[j][i])
                {
                    case 0:
                        cout<<"-";
                        break;
                    case 1:
                        cout<<"O";
                        break;
                    case 2:
                        cout<<"*";
                        break;
                }
            }
            cout<<endl;
        }
        if(ruchy%2)
        {
            cout<<endl<<"Ruszaja biale. Ktorym pionkiem chcesz ruszyc?"<<endl;
            cin>>x1>>y1;
            while(t[x1][y1]!=2)
            {
                cout<<"Podaj poprawne wspolrzedne."<<endl;
                cin>>x1>>y1;
            }
            cout<<"Gdzie chcesz ruszyc?"<<endl;
            cin>>x2>>y2;
            while(t[x2][y2]!=0)
            {
                cout<<"Podaj poprawne wspolrzedne."<<endl;
                cin>>x2>>y2;
            }
            if(abs(x2-x1)==1&&abs(y2-y1)==1)
            {
                t[x2][y2]=t[x1][y1];
                t[x1][y1]=0;
            }
            /*else if(abs(x2-x1)==2&&abs(y2-y1)==2)
            {
                if(x2-x1==-2&&y2-y1==-2&&t[x1-1][y1-1]==1)
                {
                    t[x2][y2]=t[x1][y1];
                    t[x1][y1]=0;
                    t[x1-1][y1-1]==0;
                    czarne--;
                }
                if(x2-x1==2&&y2-y1==-2&&t[x1+1][y1-1]==1)
                {
                    t[x2][y2]=t[x1][y1];
                    t[x1][y1]=0;
                    t[x1+1][y1-1]==0;
                    czarne--;
                }
            }
            else
                do
                {
                    cout<<"Podaj poprawne wspolrzedne."<<endl;
                    cin>>x2>>y2;
                }while(t[x2][y2]!=0);*/
        }
        else
        {
            cout<<endl<<"Ruszaja czarne. Ktorym pionkiem chcesz ruszyc?"<<endl;
            cin>>x1>>y1;
            while(t[x1][y1]!=1)
            {
                cout<<"Podaj poprawne wspolrzedne."<<endl;
                cin>>x1>>y1;
            }
            cout<<"Gdzie chcesz ruszyc?"<<endl;
            cin>>x2>>y2;
            while(t[x2][y2]!=0)
            {
                cout<<"Podaj poprawne wspolrzedne."<<endl;
                cin>>x2>>y2;
            }
            if(abs(x2-x1)==1&&abs(y2-y1)==1)
            {
                t[x2][y2]=t[x1][y1];
                t[x1][y1]=0;
            }
            /*else if(abs(x2-x1)==2&&abs(y2-y1)==2)
            {
                if(x2-x1==-2&&y2-y1==-2&&t[x1-1][y1-1]==1)
                {
                    t[x2][y2]=t[x1][y1];
                    t[x1][y1]=0;
                    t[x1-1][y1-1]==0;
                    biale--;
                }
                if(x2-x1==2&&y2-y1==-2&&t[x1+1][y1-1]==1)
                {
                    t[x2][y2]=t[x1][y1];
                    t[x1][y1]=0;
                    t[x1+1][y1-1]==0;
                    biale--;
                }
            }
            else
                do
                {
                    cout<<"Podaj poprawne wspolrzedne."<<endl;
                    cin>>x2>>y2;
                }while(t[x2][y2]!=0);*/
        }
    }
    int wyb;
    if(czarne)
    {
        cout<<"Gratulacje. Biale wygraly. Czy chcecie zagrac jeszcze raz?"<<endl<<"1.Tak    2.Nie"<<endl;
        cin>>wyb;
        if(wyb==1) Warcaby();
        else menu();
    }
    else if(biale)
    {
        cout<<"Gratulacje. Wygraly czarne. Czy chcecie zagrac jeszcze raz?"<<endl<<"1.Tak    2.Nie"<<endl;
        cin>>wyb;
        if(wyb==1) Warcaby();
        else menu();
    }
    else
    {
        cout<<"Pojawila sie usterka w programie. Przenosze was do menu glownego."<<endl;
        menu();
    }
}

void gry()
{
    cout<<endl<<"\t"<<"GRY"<<endl<<endl;
    cout<<"1. Zgadnij liczbe"<<endl;
    cout<<"2. Symulator rzutu moneta"<<endl;
    cout<<"3. Jednoreki bandyta"<<endl;
    cout<<"4. Kolko i krzyzyk dla dwoch graczy"<<endl;
    cout<<"5. Warcaby dla dwoch graczy"<<endl;
    cout<<"6. Menu glowne"<<endl;
    cout<<"Wybierz gre:";
    int w;
    cin>>w;
    switch(w)
    {
        case 1:
            zgadnij();
            break;
        case 2:
            moneta();
            break;
        case 3:
            bandit();
            break;
        case 4:
            KiK();
            break;
        case 5:
            Warcaby();
            break;
        case 6:
            menu();
            break;
        default:
            cout<<"Nie znam takiej gry"<<endl;
    }
}

int koniec()
{
    cout<<"Dziekujemy za skorzystanie z programu."<<endl;
    return 0;
}

void menu()
{
    cout<<endl<<"\t"<<"==========="<<endl;
    cout<<"\t"<<"MENU GLOWNE"<<endl;
    cout<<"\t"<<"==========="<<endl;
    cout<<"1.Kalkulator"<<endl;
    cout<<"2.Spiewnik"<<endl;
    cout<<"3.Gry"<<endl;
    cout<<"4.Wyjdz z programu"<<endl;
    cout<<"Wybierz opcje:";
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            kalkulator();
            break;
        case 2:
            spiewnik();
            break;
        case 3:
            gry();
            break;
        case 4:
            koniec();
            break;
        default:
            cout<<"Nie ma takiej opcji."<<endl;
            menu();
    }
}

int main()
{
    srand(time(NULL));
    menu();
}
