//Marcelo Marques Araujo CB3005631

#include <iomanip>
#include <iostream>


using namespace std;


int Show_Menu ();				 
void Show_Chart ();			   


const char CHEIO = '*';			
const char VAZIO = '#';		   
const int rows = 15;			   
const int columns = 40;		   
char map [rows][columns];		 
double price;
int total = 0;
int seat = 600;
int seat2 = 0;
int Quit = 1;



int main ()
{

const int Num_Rows = 15;
int price [Num_Rows];
int row2, column2, cost;
int answer;








	for (int count = 0; count < rows; count++)
		{
			cout << "ENTRE COM O PRECO DA FILEIRA" << (count + 1) << ": ";
				cin >> price [count];
			   
		}

	for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
				map [i][j] = VAZIO;
		}


int choice;
	do
	{
		choice = Show_Menu();	  

		switch (choice)
		{
			case 1:
				cout << "PRECO DOS ASSENTOS\n\n";
				
				for (int count = 0; count < rows; count++)
				{
					cout << "O PRECO DA FILEIRA" << (count + 1) << ": ";
					cout << price [count] << endl;
				}

				break;

			case 2:
				cout << "COMPRAR IMGRESSO\n\n";

				do 
				{
					cout << "ESCOLHA A FILEIRA : ";
					cin >> row2;
					cout << "ESCOLHA O ASSENTO: ";
					cin >> column2;

					if (map [row2] [column2] == '*')
						{
							cout << "ESSE ASSENTO FOI VENDIDO, ESCOLHA OUTRO.";
							cout << endl;
						}

					else 
					{
						cost = price [row2] + 0;
						total = total + cost;
						cout << "O BILHETE CUSTA: " << cost << endl;
						cout << "CONFIRMA? Enter (1 = YES / 2 = NO)";
						cin >> answer;
						seat = seat - answer;
						seat2 += answer;
						
						if (answer == 1)
						{ 
							cout << "O BILHETE FOI CONFIRMADO." << endl;
							map [row2][column2] = CHEIO;
						}
						else if (answer == 2)
						{
							cout << "GOSTARIA DE COMPRAR OUTRO ASSENTO? (1 = YES / 2 = NO)";
							cout << endl;
							cin >> Quit;
						}
						
						cout << "GOSTARIA DE COMPRAR OUTRO ASSENTO?(1 = YES / 2 = NO)";
						cin >> Quit;
					}

				}
				while (Quit == 1);
					
				break;

			case 3:
				cout << "ASSENTOS DISPONIVEIS\n\n";
				Show_Chart ();
				break;

			case 4:
				cout << "ASSENTOS VENDIDOS\n\n";
				break;

			case 5:
				cout << "SAIR\n";
				break;

			default : cout << "DIGITE UM NUMERO DO MENU\n";
		}

	} while (choice != 5);







return 0;
}



int Show_Menu()
{
	int MenuChoice;
		cout << endl << endl;
		cout << " \tMENU\n";
		cout << " 1. VEJA PRECO ASSENTOS.\n";
		cout << " 2. COMPRE UM INGRESSO.\n";
		cout << " 3. ASSENTOS DISPONIVEIS.\n";
		cout << " 4. ASSENTOS VENDIDOS.\n";
		cout << " 5. SAIR DO PROGRAMA.\n";
		cout << "_____________________\n\n";
		cout << "ESCOLHA UMA OPÇÃO DO MENU	: ";
		cin >> MenuChoice;
		cout << endl << endl;
	return MenuChoice;
}




void Show_Chart ()
{
	cout << "\tSeats" << endl;
	cout << "   1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 \n";

		for (int count = 0; count < 15; count++)
		{
			cout << endl << "Row " << (count + 1);

			for (int count2 = 0; count2 < 40; count2++)
			{
				cout << " " <<  map [count] [count2];
			}
		}
			cout << endl;
}