#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValidMove(int x,int y,int destIndex,vector<vector<int>>& visited,vector<vector<int>> &maze){
    if((x >= 0 && x <= destIndex) && (y >= 0 && y <= destIndex) && (visited[x][y] == 0) && (maze[x][y] == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void pathFinder(vector<vector<int>> &maze ,int PosX, int PosY,string path,vector<vector<int>>& visited,int destIndex,vector<string>& ans){
    // base case : when the rat reaches the destination 
    if ( PosX == destIndex && PosY == destIndex )
    {
        ans.push_back(path);
        return;
    }
    // Mark the current postion as visited :
    visited[PosX][PosY] = 1;

    // all possible  move will be D,R,L,U :

    // for DOWN :
    int newX = PosX+1;
    int newY = PosY;
    if (isValidMove(newX,newY,destIndex,visited,maze))
    {
        path.push_back('D');
        pathFinder(maze,newX,newY,path,visited,destIndex,ans);
        path.pop_back();
    }

    // for RIGHT :
     newX = PosX;
     newY = PosY+1;
    if (isValidMove(newX,newY,destIndex,visited,maze))
    {
        path.push_back('R');
        pathFinder(maze,newX,newY,path,visited,destIndex,ans);
        path.pop_back();
    }

    // for LEFT :
     newX = PosX;
     newY = PosY-1;
    if (isValidMove(newX,newY,destIndex,visited,maze))
    {
        path.push_back('L');
        pathFinder(maze,newX,newY,path,visited,destIndex,ans);
        path.pop_back();
    }

    // for UP :
     newX = PosX-1;
     newY = PosY;
    if (isValidMove(newX,newY,destIndex,visited,maze))
    {
        path.push_back('U');
        pathFinder(maze,newX,newY,path,visited,destIndex,ans);
        path.pop_back();
    }
    
    // uncheck the current postion as we are returning (backTracking technique)
    visited[PosX][PosY] = 0;


    
    
}
int main(){
    vector<vector<int>> maze = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    int initPosX = 0;
    int initPosY = 0;
    string path = "";
    vector<string> ans;
    int row = 4;
    int col = 4;
    vector<vector<int>> visited(row, vector<int>(col,0));
    int destIndex = 3;
    pathFinder(maze, initPosX, initPosY, path,visited,destIndex,ans);
    // short(ans.begin() , ans.end());
    cout<<"Printing All The Possible Paths :"<<ans.size()<<endl;
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<i+1 <<".)"<<ans[i]<<endl;
    }





    



  return 0;  
}