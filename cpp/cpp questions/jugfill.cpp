#include<iostream>
using namespace std;

void waterJugProblem(int capacity1, int capacity2, int goal){
    int jug1 =0, jug2 = 0;
    while (jug1!= goal && jug2 != goal){
        if(jug1 == 0){
            jug1 = capacity1;
            cout<<"fill jug1: jug1 = "<<jug1<<" jug2 = "<<jug2<<endl;
        }
        else if(jug2<capacity2){
            int pour = min(jug1, capacity2 - jug2);
            jug1 += pour;
            jug2 += pour;
            cout<<"Pour from jug1 to jug2: jug1 = "<<jug1<<" jug2 = "<<jug2<<endl;
        }
        else if(jug2 == capacity2){
        
            jug2 = 0;
            cout<<"Emopty jug2: jug1 = "<<jug1<<" jug2 = "<<jug2<<endl;
        }
    }
    cout<<"jug1 = "<<jug1<<" jug2 = "<<jug2<<endl;
}
int main(){
    int capacity1 = 4, capacity2 =3, goal =2;
    waterJugProblem(capacity1, capacity2, goal);
    return 0;
}