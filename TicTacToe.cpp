#include <iostream> 

std::string board[3][3] = {(" ", " ", " "),(" "," "," "),(" "," "," ")};

// std::string CreateBoard(){
//     std::string board[3][3] = {(" ", " ", " "),(" "," "," "),(" "," "," ")};
//     return board[3][3];
// }


void DisplayBoard(std::string board[3][3]){
	std::cout << std::endl;
    std::cout << " " << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << std::endl;
    std::cout << "--|-|--" << std::endl;
    std::cout << " " << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << std::endl;
    std::cout << "--|-|--" << std::endl;
    std::cout << " " << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << std::endl;
	std::cout << std::endl;
}



// void DisplayBoard(){
//     std::cout<<"   |   |   "<<std::endl;
//     std::cout<<"-----------"<<std::endl;
//     std::cout<<"   |   |   "<<std::endl;
//     std::cout<<"-----------"<<std::endl;
//     std::cout<<"   |   |   "<<std::endl;
// }

void PlaceMarker(int square, char curr_mark){
    
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

int GetPlayerChoice(int turn){
    int choice;
    int check = 0;
    while(check == 0){
        if(turn == 0){
            std::cout<<"Player X's turn. Choose spot (1-9)."<<std::endl;
            std::cin>>choice; 
        }
        else{
            std::cout<<"Player O's turn. Choose spot (1-9)."<<std::endl;
            std::cin>>choice; 
        }
        if(choice > 0 && choice < 10){
            check = 1; 
        }
        else{
            std::cout<<"Please enter a number from 1-9"<<std::endl;
        }
    }
    return choice; 
}

int main(){
    int check = 0; 
    int turn = 0;
    int counter = 0;
//     std::string b = CreateBoard();
    while(check == 0){
        int choice;
        choice = GetPlayerChoice(turn);
        
        if(turn == 0){
            PlaceMarker(choice,'X');
            turn = 1;
        }
        else{
            PlaceMarker(choice,'O');
            turn = 0;
        }
        
        DisplayBoard(board);
        counter++;
        
        if(counter == 9){
            check = 1; 
        }
        
    }
}