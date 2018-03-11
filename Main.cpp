//Φουρτούνης Νίκος
//icsd13195
#include <iostream>
using namespace std;
//Genikh Template Klash
template <typename T> class ClassA {
    T x [5];//Pinakas tupou T
    public: ClassA(T px[5]) {//Constructor
        int i;
        cout << "Values are:" << endl;
        /*Sto parakatw for apothikevoume to periexomeno tou parameter pinaka ston
        pinaka-idiothta ths klashs*/
        for(i=0;i<5;i++){
            x[i]=px[i];
            cout << px[i] << endl;
        }
    }
    public: T average (){//Function ths klashs pou upologizei kai epistrefei ton meso oro
        double a=x[0]+x[1]+x[2]+x[3]+x[4];
        a=a/5;
        return a;
    }
};
//Eidikh Template Klash gia tupo char
template <> class ClassA <char> {
    char x [5];//Pinakas tupou char
    public: ClassA(char px[5]) {//Constructor
        int i;
        cout << "Values are:" << endl;
        /*Sto parakatw for apothikevoume to periexomeno tou parameter pinaka ston
        pinaka-idiothta ths klashs*/
        for(i=0;i<5;i++){
            x[i]=px[i];
            cout << px[i] << endl;
        }
    }
    public: double average (){//Function ths klashs pou upologizei kai epistrefei ton meso oro
        int i;
        int arr[5];
        /*Sto parakatw for paragoume enan pinaka int prokeimenou na metatrepsoume
        ta char sthn antistoixh klimaka int*/
        for(i=0;i<5;i++){
            switch(x[i]){
                case 'A': arr[i]=1;
                    break;
                case 'B': arr[i]=2;
                    break;
                case 'C': arr[i]=3;
                    break;
                case 'D': arr[i]=4;
                    break;
                case 'E': arr[i]=5;
                    break;
            }
            cout <<arr[i]<<endl;
        }
        double a=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
        a=a/5;//Epistrefw ton meso oro
        return a;
    };
};

int main() {
    //Ftiaxnw tous pinakew me ta dedomena gia ka8e polh
    int arr1[5]={4,2,5,3,5};
    double arr2[5]={1.2,4.3,1.8,3.2,4.1};
    char arr3[5]={'A','B','B','D','C'};
    //Ftiaxnw ta antikeimena twn klasewn
    ClassA <int> o1(arr1);
    ClassA <double> o2(arr2);
    ClassA <char> o3(arr3);
    //kalw tis klaseiw meswn oro kai tous apothikevw
    double avg1=o1.average();
    double avg2=o2.average();
    double avg3=o3.average();
    //Emfanizw ta apotelesmata
    cout << "Average of Karlovasi is: "<< avg1 << endl;
    cout << "Average of Pithagorio is: "<< avg2 << endl;
    cout << "Average of Vathi is: "<< avg3 << endl;
    cout << "Average of Samos is: "<< (avg1+avg2+avg3)/3 << endl;
}
