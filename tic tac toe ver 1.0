#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
//tic tac toe game
void gameboard(char gamep[]);
int determine_win(char gamep[]);


int main(){
    char gamep[9]={'1','2','3','4','5','6','7','8','9'};
    char preply;
    char game_reply;
    int ifwin;
    int playtime=0;
    while(1){
        if (playtime==0){
        std::cout<<"Welcome!! Let's play tic tac toe\n";
        }else{
        std::cout<<"Play again? Fun right?\n";   
        }
        std::cout<<"--------{y}-----/-----{n}-------\n";
        std::cout<<"playtime: "<<playtime<<"\n";
        std::cin>>preply;
        
        if (preply=='y' || preply=='Y'){
            playtime++;
            while(1){
                ifwin=determine_win(gamep);
                if (ifwin==1){
                    std::cout<<"player Y won!!\n";
                    break;
                }
                gameboard(gamep);
                std::cout<<"player X please pick a location\n";
                std::cin>>game_reply;
                gamep[(game_reply-'0')-1]='X';
                system("clear");
                
                ifwin=determine_win(gamep);
                if (ifwin==1){
                    std::cout<<"player X won!!\n";
                    break;
                }
                gameboard(gamep);
                std::cout<<"player Y please pick a location\n";
                std::cin>>game_reply;
                gamep[(game_reply-'0')-1]='Y';
                system("clear");


            }
        }
        else{
            std::cout<<"Okay >_< ,goodbye then";
            break;
        }
        

    }
    

    return 0;

}

void gameboard(char gamep[]){
    // std::cout<<"    1    |    2    |    3    \n";
    // std::cout<<" ----------------------------\n";
    // std::cout<<"    4    |    5    |    6    \n";
    // std::cout<<" ----------------------------\n";
    // std::cout<<"    7    |    8    |    9    \n";
    // std::cout<<"\n\n";
    std::cout<<"    "<<gamep[0]<<"    |    "<<gamep[1]<<"    |    "<<gamep[2]<<"    \n";
    std::cout<<" ----------------------------\n";
    std::cout<<"    "<<gamep[3]<<"    |    "<<gamep[4]<<"    |    "<<gamep[5]<<"    \n";
    std::cout<<" ----------------------------\n";
    std::cout<<"    "<<gamep[6]<<"    |    "<<gamep[7]<<"    |    "<<gamep[8]<<"    \n";
    
}

int determine_win(char gamep[]){
    
    if ((gamep[0] == gamep[1] && gamep[1] == gamep[2]) ||
        (gamep[3] == gamep[4] && gamep[4] == gamep[5]) ||
        (gamep[6] == gamep[7] && gamep[7] == gamep[8]) ||
        (gamep[0] == gamep[4] && gamep[4] == gamep[8]) ||
        (gamep[2] == gamep[4] && gamep[4] == gamep[6]) ||
        (gamep[0] == gamep[3] && gamep[3] == gamep[6]) ||
        (gamep[1] == gamep[4] && gamep[4] == gamep[7]) ||
        (gamep[2] == gamep[5] && gamep[5] == gamep[8])) {
        return 1;  // There is a win
    } else {
        return 0;  // No win yet
    }
}
