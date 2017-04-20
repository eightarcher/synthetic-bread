//
// Created by PonyExpress on 4/20/2017.
//
#include <iostream>
using namespace std;


int main(){

    string grid [14][14];
    for ( int j = 0 ; j < 14 ; j++){
        for (int i = 0 ; i < 14 ; i++){
            if ((i == 3) || (i == 7) || (i == 11)){
                grid[j][i] = "#";
            }
            else{
                break;
            }

        }
    }


}