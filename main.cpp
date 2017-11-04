#include <iostream>
#include <sstream>
using namespace std;
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
    int *mas = new int [k];
    if (cin >> k){
            mas = new int [k];
        } 
    else { 
        cout<<"error"<<endl; 
        return -1; 
    } 
    cin.get();
    string stroka;
    getline (cin, stroka);
    istringstream stream (stroka);
    for (unsigned int i=0; i<k;i++){
        if(!(stream>> mas[i])){
            cout<<"ERROR"<<endl;
            delete[]mas;
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
