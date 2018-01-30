/*
#include <iostream>
using namespace std;

bool fibon_elem(int pos,int &elem);
bool print_sequence(int pos);
bool AllIsNum(string input);

int main(){
    string pos;
    while (true){
        cout << "请输入一个位置(结束请输入非数字): ";
        cin >> pos;
        if(!AllIsNum(pos)){
            break;
        }
        else{
            int elem;
            if(fibon_elem(atoi(pos.c_str()),elem)){
                cout << "元素#" << pos
                     << "是 " << elem << endl;
                print_sequence(atoi(pos.c_str()));
            }
            else{
                cout << "抱歉。无法计算元素#" << pos << endl;
            }
        }
    }
    cout << "谢谢使用" << endl;
    return 0;
}

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

bool fibon_elem(int pos,int &elem){
    if(pos <= 0 || pos>1024){
        elem=0;
        return false;
    }
    else{
        elem=1;
        int n_2=1,n_1=1;
        for(int ix=3;ix<=pos;ix++){
            elem = n_2+n_1;
            n_2=n_1;
            n_1=elem;
        }
    }
    return true;
}

bool print_sequence(int pos){
    if(pos<=0 || pos>1024){
        cerr << "无效地址：" << pos
             << "--无法处理请求！\n";
        return false;
    }
    else{
        cout << "直到位置"<<pos<<"的斐波那契数列是:\n\t";
        switch (pos){
            default:
            case 2:
                cout << "1 ";
            case 1:
                cout << "1 ";
                break;
        }

        int elem;
        int n_2=1,n_1=1;
        for(int ix=3;ix<=pos;ix++){
            elem = n_2+n_1;
            n_2=n_1;
            n_1=elem;
            cout << elem << (!(ix%10)?"\n\t":" ");
        }
        cout << endl;
        return true;
    }
}*/
