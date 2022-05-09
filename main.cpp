#include <iostream>
using namespace std;
//exercice 1
struct point{
private:
    int x;
    int y;
public:
    point(int a,int b){
        x=a;
        y=b;
    }
    int affiche()const{
        cout<<"point | x : "<< x << " | y : " << y <<endl;
    };
    int translater(int tx,int ty)const{
       cout <<"La translation en x est : "<< x+tx <<endl;
       cout <<" La translation en y est : "<< y+ty<<endl;


    }
};


int main() {
point abcisse(4,3);

cout << abcisse.affiche() << endl;
cout << abcisse.translater(4,5) << endl;
}
