#include <iostream>
using namespace std;

void drawOneTick(int tickLength,int tickLabel = -1){
    for(int i=0;i<tickLength;i++){
        cout<<"-";
    }
    if(tickLabel >= 0) cout<<" "<<tickLabel;
    cout<<endl;
}

void drawTicks(int tickLength){
    if(tickLength > 0){
        drawTicks(tickLength-1);
        drawOneTick(tickLength);
        drawTicks(tickLength-1);
    }
}

void drawRuler(int nInches,int majorLength){
    drawOneTick(majorLength,0);
    for(int i=1;i<=nInches;i++){
        drawTicks(majorLength-1);
        drawOneTick(majorLength,i);
    }
}

int main(){
    int inches,majorTickLength;
    cout<<"Enter number of inches : ";
    cin>>inches;
    cout<<"\nEnter major tick length : ";
    cin>>majorTickLength;
    cout<<endl;
    if(inches > majorTickLength){
        cout<<"Not possible. This will go on infinitely\n";
        return 0;
    }
    drawRuler(inches,majorTickLength);
    return 0;
}