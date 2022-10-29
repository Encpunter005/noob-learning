// #include<iostream>
// using namespace std;
// int main(){
//     double * p3 = new double[3];
//     p3[0] = 38.3;
//     p3[1] = 23.4;
//     p3[2] = 3.4;
//     cout << "p3[0] is " << p3[0] << endl;
//     p3 += 1;
//     cout << "Now p3[0] is " << p3[0] << endl;
//     p3 -= 1;
//     delete [] p3;

//     return 0;
// }

//指针与字符串
/* #include<iostream>
#include<cstring>
using namespace std;
int main(){
    char animal[20] = "bear";
    const char * bird ="wren";
    char * ps;
    cout << "animal" << " and " << bird << endl;
    cout << "Enter a kind of animal: " ;
    cin >> animal;
    ps = animal;
    cout << ps << endl;
    cout << "Before using strcpy(): " << endl;
    cout << animal << " at " << (int *) ps << endl;
    ps = new char[strlen(animal)];
    strcpy(ps,animal);
    cout << "After using strcpy(): " << endl;
    cout << animal << " at " << (int * ) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
} */

//delete 技巧
// #include<iostream>
// #include<cstring>
// using namespace std;
// char * getname(void);
// int main(){
//     char * name;
//     name = getname();
//     cout << name << " at " << (int *) name << endl;
//     delete [] name;
//     name = getname();
//     cout << name << " at " << (int *) name << endl;
//     delete [] name;
//     return 0;
// }
// char * getname(){
//     char temp[80];
//     cout << "Enter the last name: " ;
//     cin >> temp;
//     char * pn = new char[strlen(temp)] + 1;
//     strcpy(pn,temp);
//     return pn;
