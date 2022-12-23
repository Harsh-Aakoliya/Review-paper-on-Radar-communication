#include<bits/stdc++.h>
using namespace std;
int main(){

 double frequency_source;
 double frequency_receive;
 double velocity_object;
 double velocity_source;

//if sorce or object moving in right direction then enter positive velosity else enter negetive velocity

cout<<"Enter frequency of source: ";
cin>>frequency_source;

cout<<"Enter velocity of object in m/s: ";
cin>>velocity_object;

cout<<"Enter velocity of source in m/s: ";
cin>>velocity_source;

double v=360;//360 m/s
if(velocity_object==0&&velocity_source==0){//O   S
    frequency_receive=frequency_source;
}
else if(velocity_source<0&&velocity_object<0){//<-----S   <-----O
   frequency_receive=frequency_source*(v+abs(velocity_object))/(v+abs(velocity_source));
}
else if(velocity_source>0&&velocity_object>0){//S----->   O----->
   frequency_receive=frequency_source*(v-abs(velocity_object))/(v-abs(velocity_source));
}
else if(velocity_source>0&&velocity_object<0){//S----->   <-----O
   frequency_receive=frequency_source*((v+abs(velocity_object))/(v-abs(velocity_source)));
}
else if(velocity_source<0&&velocity_object>0){//<-----S   O----->
   frequency_receive=frequency_source*(v-abs(velocity_object))/(v+abs(velocity_source));
}
else if(velocity_source==0&&velocity_object>0){//S   O----->
   frequency_receive=frequency_source*(v-abs(velocity_object))/(v+0);
}
else if(velocity_source==0&&velocity_object<0){//S   <-----O
   frequency_receive=frequency_source*(v+abs(velocity_object))/(v+0);
}
else if(&velocity_source>0&&velocity_object==0){//S----->   O
   frequency_receive=frequency_source*(v+0)/(v-abs(velocity_source));
}
else if(&velocity_source<0&&velocity_object==0){//<-----S   O
   frequency_receive=frequency_source*(v+0)/(v+abs(velocity_source));
}
cout<<"frequency received is: "<<frequency_receive;
    return 0;
}