
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Write C++ code here
    bool exit = false;
    float a,b ;
    int cal ;
   
   while(!exit){
       cout << "==========Menu =========="<<endl;
       cout << " 0 - exit" << endl;
       cout << " 1 - addition " << endl;
       cout << " 2 - substraction" << endl;
       cout << " 3 - miltiplication" << endl;
       cout << " 4 - division "<< endl;
       cout << "Select your chioce : " ;
       
       cin >> cal ;
        if(cal >= 1 && cal <= 4 ){
            cout << "A = ";
            cin >> a;
            cout << "B = ";
            cin >> b;
        }
       
   
   switch (cal){
       case 0 : exit = true ; break;
       case 1 : cout << "A + B : "<< fixed << setprecision(3) <<  a + b <<endl; break;
       case 2 : cout << "A - B : "<< fixed << setprecision(3)<< a - b << endl; break;
       case 3 : cout << "A * B : "<< fixed << setprecision(3) << a * b << endl;break;
       case 4 : 
        if (b == 0.0)
            cout << " No Divide by 0 - druhhh" <<endl;
        else { 
            cout << "A / B :  "  <<fixed << setprecision(3)<< a / b << endl;
            
            
        }
            break;
      
        default:
            cout << "BRUHHHH, Can not!  please enter new number : " << cal <<  endl;
   }
   }

    return 0;
}