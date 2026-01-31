#include <iostream>
using namespace std;

//CHECKING IS THE CHANCES FOR WINNING THE FIRST PERSON PLAYING NIMGAME

void nimGame(int n){
    if(n%4==0){
        cout<<"The first person will lose the game.";
    }
    else{
        cout<<"congrats to player 1";
        cout<<"The first person will win the game.";
    }
}



int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    nimGame(n);


    return 0;

}