/*
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define MAXSIZE 1000

int main(){
    string fileInPut = "/Users/qinkai/Desktop/test1.txt";
    string fileOutPut = "/Users/qinkai/Desktop/test2.txt";
    vector<string> read_file_character;
    ifstream in_file(fileInPut);
    if(!in_file){
        cout << "源文件无法打开\n";
        return 0;
    }
    else{
        string character_read;
        while(in_file >> character_read){
            read_file_character.push_back(character_read);
        }
        for(int i=0;i<read_file_character.size();i++){
            cout << read_file_character.at((unsigned long)i) << "\n";
        }
        sort(read_file_character.begin(),read_file_character.end());
        ofstream out_file(fileOutPut);
        if(!out_file){
            cout << "\n目标文件无法打开\n";
            return 0;
        }
        else{
            for(int i=0;i<read_file_character.size();i++){
                out_file << read_file_character.at((unsigned long)i) << "\n";
            }
        }
    }
    return 0;
}*/
