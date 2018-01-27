#include <string>
#include <iostream>

using namespace std;

#define MAXNUM 10

int main(){
    int user_input;
    char user_choice;
    int num_answer=0;
    int right_answer=0;
    float grade;
    srand((unsigned int)(time(NULL)));
    while (true){
        int num_A = rand()%MAXNUM;
        int num_B = rand()%MAXNUM;
        int num_C = 2*num_B - num_A;
        cout << "已知某数列相邻的两个元素值分别为"
             << num_A << "和" << num_B
             <<"。\n试问下一个值是多少？\n";
        cin >> user_input;
        num_answer += 1;
        if(user_input == num_C){
            right_answer += 1;
            cout << "想试试下一个吗？Y/N\n";
            cin >> user_choice;
            if(user_choice == 'Y'){
                //进入下一个
            }
            else if(user_choice == 'N'){
                grade=(float)right_answer/num_answer;
                cout << "您一共回答了" << num_answer << "次\n"
                     << "共答对" << right_answer << "次\n"
                     << "得分是：" << grade <<"\n再见";
                return 0;
            }
            else{
                cout << "得到错误输入";
                return 0;
            }
        }
        else{
            while(true){
                cout << "想再试一次吗？Y/N\n";
                cin >> user_choice;
                if(user_choice == 'Y'){
                    cout << "请输入您的答案：";
                    cin >> user_input;
                    num_answer+=1;
                    if(user_input == num_C){
                        right_answer += 1;
                        cout << "想试试下一个吗？Y/N\n";
                        cin >> user_choice;
                        if(user_choice == 'Y'){
                            break;
                        }
                        else if(user_choice == 'N'){
                            grade=(float)right_answer/num_answer;
                            cout << "您一共回答了" << num_answer << "次\n"
                                 << "共答对" << right_answer << "次\n"
                                 << "得分是：" << grade <<"\n再见";
                            return 0;
                        }
                        else{
                            cout << "得到错误输入";
                            return 0;
                        }
                    }
                    else{
                        //再次进入错误处理
                    }
                }
                else if(user_choice == 'N'){
                    grade=(float)right_answer/num_answer;
                    cout << "您一共回答了" << num_answer << "次\n"
                         << "共答对" << right_answer << "次\n"
                         << "得分是：" << grade <<"\n再见";
                    break;
                }
                else{
                    cout << "得到错误输入";
                    return 0;
                }
            }
        }
    }
}