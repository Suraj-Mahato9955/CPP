/*# include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j ;  //cout << *;  print--- *****
                                                *****
                                                *****
                                                *****
        }
        cout<< endl;
    }
    return 0;
}

    //---------Printing alphabets-----------

#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {

        char ch = 'A';
        for(int j = 1; j <= n; j++) {   output---- ABCD
                                                   ABCD
                                                   ABCD
                                                   ABCD
            cout<< ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
    return 0;
}

//----------------- PRINTING N NUMBERS------------------------
#include<iostream>
using namespace std;

int main() {                output----- 123
                                        456
                                        789               
    int n = 3;
    int num = 1;   (loop ke bhar isko initialize kiye hai kyunki we need continuos numuber)

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            cout<< num;
            num++;
        }
        cout<< endl;
    }
    return 0;
}

//---------------------Printing N characters------------------


#include<iostream>
using namespace std;
                                 Output------ABCD
                                             EFGH
                                             IJKL
                                             MNOP
int main() {
    int n = 4;
    char ch = 'A';

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=n; j++){
            cout<<ch;
            ch++;
        }
        cout<< endl;
        
    }
    return 0;
}

//------------------------Triangle Pattern-------------------------


#include<iostream>
using namespace std;

int main() {            Output------- **
                                      ***
                                      ****
                                      *****
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i+1; j++) {
            cout<< "*";
        }
        cout<< endl;
        
    }
    return 0;
}

//---------------------Triangle Pattern for numbers----------------
    
#include<iostream>
using namespace std;

int main() {
    int n = 4;                   Output--------22
                                               333
                                               4444
                                               55555

    for(int i = 1; i <= n; i++) {
        for(int j =1; j <= i+1; j++) {
            cout<< (i+1);
        }
        cout<< endl;
        
    }
    return 0;
}

//---------------------Triangle Patterns for Alphabet-------------
#include<iostream>
using namespace std;

int main() {                Output---------A
                                           BC
                                           DEF
                                           GHIJ
    int n = 4;
    char ch = 'A';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++) {
            cout<< ch;
            ch ++;
        }
        cout<< endl;
        
    }
    return 0;
}

//-----------------------------------------------------

#include<iostream>
using namespace std;
                                 Output-------1
                                              12
                                              123
                                              1234
int main() {               
    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <=i+1; j++) {
            cout<< j<< "";
        }
        cout<<endl;
        
    }
    return 0;
}*/



