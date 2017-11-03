#include <iostream>
#include <sstream>
using namespace std;https://github.com/ilya41299/buble_soirt-0.0.1
void buble_sort(int *mas, unsigned int k){  
for(unsigned int i=0;i<k-1;i++){
    for (unsigned int j=0; j<k-i-1; j++){ 
        if (mas[j]>mas[j+1]){
            swap (mas[j], mas[j+1]);
            } 
        }
    }
}

int main()
{
    unsigned int k;                            
    cin>> k;
    cin.get();                                  
    int *mas = new int [k];
    string stroka;
    getline (cin, stroka);
    istringstream stream (stroka);
    for (unsigned int i=0; i<k;i++){
        if(!(stream>> mas[i])){
            cout<<"ERROR"<<endl;
            return -1;
        }
    }
 
    buble_sort (mas,k);
    for(unsigned int i=0; i<k; i++){
        cout << mas[i] << " ";
    }
    delete[]mas;
    return 0;
}
