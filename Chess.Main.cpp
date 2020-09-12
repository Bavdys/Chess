#include<iostream>
#include"Header.Chess.h"
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "RUS");
	Board game;
	bool case_player = true;
	while (game.menu_board(case_player))
		case_player = !case_player;
	if (case_player)
		cout << "\n\n\tПОБЕДА БЕЛЫХ!!!\n\n\n";
	cout << "\n\n\tПОБЕДА ЧЕРНЫХ!!!\n\n\n";
	return 0;
}