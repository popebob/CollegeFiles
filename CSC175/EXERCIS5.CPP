#include <iostream.h>;
#include <conio.h>;

int main()
    {clrscr();
    float grade;
    int total, a,b,c,d,e;
    total = 0;
    a =0; b =0; c =0; d=0; e =0;
    while(total < 12)
	{total=total+1;
	cout << "Please enter quiz grade for student number " << total << endl;
	cin >> grade;
	if( grade >= 90)
		{a++;
		cout << "Student number " << total << " has an 'A' grade" << endl;
		}
	if( grade >= 80 && grade < 90)
		{b++;
		cout << "Student number " << total << " has an 'B' grade" << endl;
		}
	if( grade >= 70 && grade < 80)
		{c++;
		cout << "Student number " << total << " has an 'C' grade" << endl;
		}
	if( grade >= 60 && grade < 70)
		{d++;
		cout << "Student number " << total << " has an 'D' grade" << endl;
		}
	if(grade < 60)
		{e++;
		cout << "Student number " << total << " has an 'E' grade" << endl;
		}
	}
	cout << "Totals:" << endl;
	cout << "A's = " << a << endl;
	cout << "B's = " << b << endl;
	cout << "C's = " << c << endl;
	cout << "D's = " << d << endl;
	cout << "E's = " << e << endl;
	return 0;
	}