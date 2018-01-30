/*
#include <iostream>
#include <vector>

using namespace std;

#define MAXSIZE 100

bool AllIsNum(string input){
    for(int i=0;i<input.size();i++){
        int tmp=(int)input[i];
        if(tmp >='0' && tmp <='9'){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    string user_inpput;
    int pos=0;
    int theArray[MAXSIZE];
    int num=0,sum=0;
    double avg=0;
    cout << "请输入整数: ";
    cin >> user_inpput;
    while(true){
        if(!AllIsNum(user_inpput)){
            break;
        }
        else{
            theArray[pos++]=atoi(user_inpput.c_str());
            num++;
            cout << "请继续输入整数：";
            cin >> user_inpput;
        }
    }

    vector<int> theVector(theArray,theArray+MAXSIZE);
    for(int i=0;i<num;i++){
        sum+=theVector[i];
    }
    avg=(double)sum/num;
    cout << "总和为：" << sum << "平均数为：" << avg;
    return 0;
}*/
