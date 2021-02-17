#include <iostream> 

int CreateBoard(){
    int board [3][3] = {(0,0),(0,0),(0,0)};
    return board;
}


void DisplayBoard(){
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<"-----------"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<"-----------"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
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
    DisplayBoard();
    int choice = GetPlayerChoice(0); 
    std::cout<<choice;
}