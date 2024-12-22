#include <iostream>
#include <cstring>
#include <string.h>
#include <time.h>
using namespace std;
char mem_name[8][8] = {};
char mem_colo[8][8] = {};
void open_time(){

};
void mem(string name, int length){
    
    int a = 0, b = 0;
    for(int i = 0; i < length; i++){
        if(b+length > 7){
            b = 0;
            a++;
        }
        mem_name[a][b] = name[0];
        mem_colo[a][b] = 'R';
    }

};
void wat(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << "[" << mem_name[i][j] << ' ' << mem_colo[i][j] << "] ";
        }
        cout << "\n";
    }
};
void dlt(string name){
    char temp = name[0];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(mem_name[i][j] == temp){
                mem_name[i][j] = ' ';
                mem_colo[i][j] = ' ';
            }
        }
    }
    cout << "done.";
};
/*int main(){
    return 0;
}*/