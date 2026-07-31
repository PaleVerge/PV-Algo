//
// Created by whip on 2026/5/27.
//
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

vector<string> maze;

bool match(char a,char b,char c,char d){
    return a=='2'&&b=='0'&&c=='2'&&d=='0';
}
int main(){
    ifstream infile("input.txt");
    string s;
    while (infile>>s){
         maze.push_back(s);
    }
    int cnt=0;
    for (int i=0;i<maze.size();i++){
        for (int j=0;j<maze[i].size()-3;j++){
            cnt+=match(maze[i][j],maze[i][j+1],maze[i][j+2],maze[i][j+3]);
        }
    }
    for (int i=0;i<maze.size()-3;i++){
        for (int j=0;j<maze[i].size();j++){
            cnt+=match(maze[i][j],maze[i+1][j],maze[i+2][j],maze[i+3][j]);
        }
    }
    for (int i=0;i<maze.size()-3;i++){
        for (int j=0;j<maze[i].size()-3;j++){
            cnt+=match(maze[i][j],maze[i+1][j+1],maze[i+2][j+2],maze[i+3][j+3]);
        }
    }
    int row=0,col=0;
    for (int i=0;i<maze.size();i++){
        row++;
    }
    for (int j=0;j<maze[0].size();j++){
        col++;
    }
    cout<<row<<endl<<col<<endl;
    cout<<cnt<<endl;
}