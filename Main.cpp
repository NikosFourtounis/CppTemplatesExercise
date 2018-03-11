#include <iostream>
using namespace std;

template <typename T> class ClassA {
    T x [5];
    public: ClassA(T px[5]) {
        int i;
        cout << "Values are:" << endl;
        for(i=0;i<5;i++){
            x[i]=px[i];
            cout << px[i] << endl;
        }
    }
    T average ();
};
template <> class ClassA <char> {
    char x [5];
    public: ClassA(char px[5]) {
        int i;
        cout << "Values are:" << endl;
        for(i=0;i<5;i++){
            x[i]=px[i];
            cout << px[i] << endl;
        }
    }
    char average ();
};
template <typename T> T ClassA<T>::average(){
    double a=x[0]+x[1]+x[2]+x[3]+x[4];
    a=a/5;
    return a;
}




int main() {
    int arr1[5]={4,2,5,3,5};
    ClassA <int> o1(arr1);
    cout << o1.average() << endl;
    double arr2[5]={1.2,4.3,1.8,3.2,4.1};
    ClassA <double> o2(arr2);
    cout << o2.average() << endl;
    char arr3[5]={'A','B','B','D','C'};
    ClassA <char> o3(arr3);
    //cout << o3.average() << endl;
}
