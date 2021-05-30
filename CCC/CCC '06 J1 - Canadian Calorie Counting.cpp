#include <iostream>
using namespace std;
int main(){
int calories = 0;
int burger;
cin>>burger;
switch (burger){
case 1:
calories = calories + 461;
break;
case 2:
	calories = calories + 431;
break;
case 3:
	calories = calories + 420;
break;
case 4:
	calories = calories;
break;

}
int side;
cin>>side;
switch (side){
case 1:
calories = calories + 100;
break;
case 2:
	calories = calories + 57;
break;
case 3:
	calories = calories + 70;
break;
case 4:
	calories = calories;
break;

}
int drink;
cin>>drink;
switch (drink){
case 1:
calories = calories + 130;
break;
case 2:
	calories = calories + 160;
break;
case 3:
	calories = calories + 118;
break;
case 4:
	calories = calories;
break;
}
int dessert;
cin>>dessert;
switch (dessert){
case 1:
calories = calories + 167;
break;
case 2:
	calories = calories + 266;
break;
case 3:
	calories = calories + 75;
break;
case 4:
	calories = calories;
break;

}

cout<<"Your total Calorie count is "<<calories<<"."<<endl;
return 0;

}