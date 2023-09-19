#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<char> v(9);
void intializeVector();
void print();
void turnofx();
bool isxwin();
void turnofo();
bool isowin();
bool isdraw();
signed main(){
    int zz;
    char z;
    do{
        cout << "Which one will start the game X or O ?" << endl;
        cin >> z;
        if(z == 'x' || z == 'X'){
            intializeVector();
            print();
            while(true){
                turnofx();
                turnofo();
            }
        }
        else if(z == 'o' || z == 'O'){
            intializeVector();
            print();
            while(true){
                turnofo();
                turnofx();
            }
        }
        else{
            cout << "Wrong input. enter 0 to terminate the game, any number to continue...";
            cin >> zz;
        }
    }while(zz != 0);
    cout << "Thanks for using our game :)" << endl;
}
void intializeVector(){
    char x = '1';
    for(int i = 0; i < 9; ++i, ++x)
        v[i] = x;
}
void print(){
    cout << "--------------------------------------------------" << endl;
    cout << '\t' << v[0] << '\t' << '|' << '\t' << v[1] << '\t' << '|' << '\t' << v[2] << '\t' << endl;
    cout << "--------------------------------------------------" << endl;
    cout << '\t' << v[3] << '\t' << '|' << '\t' << v[4] << '\t' << '|' << '\t' << v[5] << '\t' << endl;
    cout << "--------------------------------------------------" << endl;
    cout << '\t' << v[6] << '\t' << '|' << '\t' << v[7] << '\t' << '|' << '\t' << v[8] << '\t' << endl;
    cout << "--------------------------------------------------" << endl;
}
void turnofx(){
    bool flag = false;
    int test = 0;
    do{
        cout << "Turn of X, enter a number..." << endl;
        int num = 0;
        cin >> num;
        switch(num){
            case 1:
                if(v[0] == '1'){
                    test = 0;
                    v[0] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 2:
                if(v[1] == '2'){
                    test = 0;
                    v[1] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 3:
                if(v[2] == '3'){
                    test = 0;
                    v[2] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 4:
                if(v[3] == '4'){
                    test = 0;
                    v[3] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 5:
                if(v[4] == '5'){
                    test = 0;
                    v[4] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 6:
                if(v[5] == '6'){
                    test = 0;
                    v[5] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 7:
                if(v[6] == '7'){
                    test = 0;
                    v[6] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 8:
                if(v[7] == '8'){
                    test = 0;
                    v[7] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 9:
                if(v[8] == '9'){
                    test = 0;
                    v[8] = 'X';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            default :
                cout << "This number is out of range [1, 9].\nEnter 0 to terminate the game, any number to continue..." << endl;
                cin >> test;
                if(test == 0)
                    flag = true;
        }
    }while(test != 0 && !flag);
    if(flag){
        cout << "Thanks for using our game :)" << endl;
        exit(0);
    }
    print();
    if(isxwin()) {
        cout << "X has win!" << endl;
        exit(0);
    }
    if(isdraw()){
        cout << "The game is draw" << endl;
        exit(0);
    }
}
bool isxwin(){
    if ((v[0] == 'X' && v[0] == v[1] && v[0] == v[2])
    || (v[3] == 'X' && v[3] == v[4] && v[3] == v[5])
    || (v[6] == 'X' && v[6] == v[7] && v[6] == v[8])
    || (v[0] == 'X' && v[0] == v[3] && v[0] == v[6])
    || (v[1] == 'X' && v[1] == v[4] && v[1] == v[7])
    || (v[2] == 'X' && v[2] == v[5] && v[2] == v[8])
    || (v[0] == 'X' && v[0] == v[4] && v[0] == v[8])
    || (v[2] == 'X' && v[2] == v[4] && v[2] == v[6]))
        return true;
    return false;
}
void turnofo(){
    bool flag = false;
    int test = 0;
    do{
        cout << "Turn of O, enter a number..." << endl;
        int num = 0;
        cin >> num;
        switch(num){
            case 1:
                if(v[0] == '1'){
                    test = 0;
                    v[0] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 2:
                if(v[1] == '2'){
                    test = 0;
                    v[1] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 3:
                if(v[2] == '3'){
                    test = 0;
                    v[2] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 4:
                if(v[3] == '4'){
                    test = 0;
                    v[3] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 5:
                if(v[4] == '5'){
                    test = 0;
                    v[4] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 6:
                if(v[5] == '6'){
                    test = 0;
                    v[5] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 7:
                if(v[6] == '7'){
                    test = 0;
                    v[6] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 8:
                if(v[7] == '8'){
                    test = 0;
                    v[7] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            case 9:
                if(v[8] == '9'){
                    test = 0;
                    v[8] = 'O';
                    break;
                }
                else{
                    cout << "This number has taken before.\nEnter 0 to terminate the game, any number to continue..." << endl;
                    cin >> test;
                    if(test == 0)
                        flag = true;
                }
            default :
                cout << "This number is out of range [1, 9].\nEnter 0 to terminate the game, any number to continue..." << endl;
                cin >> test;
                if(test == 0)
                    flag = true;
        }
    }while(test != 0 && !flag);
    if(flag){
        cout << "Thanks for using our game :)" << endl;
        exit(0);
    }
    print();
    if(isowin()) {
        cout << "O has win!" << endl;
        exit(0);
    }
    if(isdraw()){
        cout << "The game is draw" << endl;
        exit(0);
    }
}
bool isowin(){
    if((v[0] == 'O' && v[0] == v[1] && v[0] == v[2])
    || (v[3] == 'O' && v[3] == v[4] && v[3] == v[5])
    || (v[6] == 'O' && v[6] == v[7] && v[6] == v[8])
    || (v[0] == 'O' && v[0] == v[3] && v[0] == v[6])
    || (v[1] == 'O' && v[1] == v[4] && v[1] == v[7])
    || (v[2] == 'O' && v[2] == v[5] && v[2] == v[8])
    || (v[0] == 'O' && v[0] == v[4] && v[0] == v[8])
    || (v[2] == 'O' && v[2] == v[4] && v[2] == v[6]))
        return true;
    return false;
}
bool isdraw(){
    if(v[0] != '1' && v[1] != '2' && v[2] != '3'
    && v[3] != '4' && v[4] != '5' && v[5] != '6'
    && v[6] != '7' && v[7] != '8' && v[8] != '9')
        return true;
    return false;
}
