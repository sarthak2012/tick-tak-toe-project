// tick tack toe game by sarthak
#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5','6','7','8','9' };
char player = 'x';
int n;
void display_matrix()
{
	system("cls");
	cout << "WELCOME TO TICK TACK TOE " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void input()
{
	int a;
	cout << "Its  " << " " << player << " " << "Turn" << endl << "Press the no of field from the given choices : ";
	cin >> a;
	switch (a)
	{
	case 1:
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 2:
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 3:
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 4:
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 5:
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 6:
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 7:
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 8:
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	case 9:
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "Field is already in use try again";
		}
		break;

	default:
		cout << " WRONG ENTRY" << endl;
		break;
	}
}

void TogglePlayer()   //to chage the player 
{
	if (player == 'x')
	{
		player = 'o';
	}
	else
		player = 'x';

}
char win()
{ // for player 1
	if (matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] == 'x')
		return 'x';

	if (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x')
		return 'x';

	if (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] == 'x')
		return 'x';

	if (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] == 'x')
		return 'x';

	if (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] == 'x')
		return 'x';

	if (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] == 'x')
		return 'x';

	if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x')
		return 'x';

	if (matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][0] == 'x')
		return 'x';

	//for second player

	if (matrix[0][0] == 'x' && matrix[0][1] == 'o' && matrix[0][2] == 'o')
		return 'o';

	if (matrix[1][0] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o')
		return 'o';

	if (matrix[2][0] == 'o' && matrix[2][1] == 'o' && matrix[2][2] == 'o')
		return 'o';

	if (matrix[0][0] == 'o' && matrix[1][0] == 'o' && matrix[2][0] == 'o')
		return 'o';

	if (matrix[0][1] == 'o' && matrix[1][1] == 'o' && matrix[2][1] == 'o')
		return 'o';

	if (matrix[0][2] == 'o' && matrix[1][2] == 'o' && matrix[2][2] == 'o')
		return 'o';

	if (matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o')
		return 'o';

	if (matrix[0][2] == 'o' && matrix[1][1] == 'o' && matrix[2][0] == 'o')
		return 'o';

	return '/';
}

int main()
{
	n = 0;
	display_matrix();
	while (true)
	{
		n++;
		input();
		display_matrix();

		if (win() == 'x')
		{
			cout << "X WINS THE GAME " << endl;
			break;
		}
		else if (win() == 'o')
		{
			cout << " Y WINS THE GAME " << endl;
			break;
		}
		else if (win() == '/' && n == 9)
		{
			cout << "ITS A DRAW ";
			break;
		}
		TogglePlayer();
	}
	system("pause");
	return 0;
}

