#include <iostream>
using namespace std;

class Month
{
private:
    string name;
    int monthNumber;

    string months[12] =
    {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

public:
    Month()
    {
        monthNumber = 1;
        name = "January";
    }

    Month(int num)
    {
        monthNumber = num;
        name = months[num - 1];
    }

    Month(string n)
    {
        name = n;

        for (int i = 0; i < 12; i++)
        {
            if (months[i] == n)
            {
                monthNumber = i + 1;
                break;
            }
        }
    }

    string getName()
    {
        return name;
    }

    int getMonthNumber()
    {
        return monthNumber;
    }

    
    void setName(string n)
    {
        name = n;
    }

    void setMonthNumber(int num)
    {
        monthNumber = num;
        name = months[num - 1];
    }

    // Prefix ++
    Month operator++()
    {
        monthNumber++;

        if (monthNumber > 12)
            monthNumber = 1;

        name = months[monthNumber - 1];
        return *this;
    }

    // Postfix ++
    Month operator++(int)
    {
        Month temp = *this;

        monthNumber++;

        if (monthNumber > 12)
            monthNumber = 1;

        name = months[monthNumber - 1];
        return temp;
    }

    // Prefix --
    Month operator--()
    {
        monthNumber--;

        if (monthNumber < 1)
            monthNumber = 12;

        name = months[monthNumber - 1];
        return *this;
    }

    // Postfix --
    Month operator--(int)
    {
        Month temp = *this;

        monthNumber--;

        if (monthNumber < 1)
            monthNumber = 12;

        name = months[monthNumber - 1];
        return temp;
    }

    // << Operator
    friend ostream& operator<<(ostream& out, Month& m)
    {
        out << m.name << " (" << m.monthNumber << ")";
        return out;
    }

    // >> Operator
    friend istream& operator>>(istream& in, Month& m)
    {
        cout << "Enter Month Number (1-12): ";
        in >> m.monthNumber;

        m.name = m.months[m.monthNumber - 1];

        return in;
    }
};

int main()
{
    Month m;

    cin >> m;

    cout << "\nCurrent Month: " << m << endl;

    ++m;
    cout << "After Prefix ++ : " << m << endl;

    m++;
    cout << "After Postfix ++ : " << m << endl;

    --m;
    cout << "After Prefix -- : " << m << endl;

    m--;
    cout << "After Postfix -- : " << m << endl;

    return 0;
}