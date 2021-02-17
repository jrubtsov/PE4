#include <iostream>
#include <string>

std::string board[3][3] = {{" ", " ", " "},{" "," "," "},{" "," "," "}};

void DisplayBoard(){
	std::cout << std::endl;
    std::cout << " " << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << std::endl;
    std::cout << "--|-|--" << std::endl;
    std::cout << " " << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << std::endl;
    std::cout << "--|-|--" << std::endl;
    std::cout << " " << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << std::endl;
	std::cout << std::endl;
}

int main(){
    DisplayBoard();
}
