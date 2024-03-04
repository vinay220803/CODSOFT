#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int secret_num=rand()%100+1;
    int guess_num;
    cout<<"\t \t \t---Welcome to the Number Guessing Game!--- \n\n";
    cout<<"I have choosen a number between 1 and 100.Can you guess that number ?\n\n";
    do{
        cout<<"Enter your guess :";
        cin>>guess_num;
        if(guess_num>secret_num){
            cout<<"Too high! Retry Again.\n\n";
        }
        else if(guess_num<secret_num){
            cout<<"Too low! Retry Again.\n\n";
        }else{
        cout<<"\nCongratulations! You guessed the correct number..\n\n";
        }
    } while(guess_num!=secret_num);
} 