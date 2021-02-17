#include <iostream>
#include <string>

char curr_mark;
int curr_player;
std::string board[3][3] = {{" ", " ", " "},{" "," "," "},{" "," "," "}};

//gets row and column based on input square
void PlaceMarker(int square){
	int row = square/3;
	int col;
	
	//if square is multiple of 3
	if (square%3 == 0){
		row = row - 1;
		col = 2;
	}
	else{
		col = (square%3) - 1;
	}
	
	board[row][col] = curr_mark;
}
