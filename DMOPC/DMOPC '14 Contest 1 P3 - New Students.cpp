#include <bits/stdc++.h>

using namespace std;

int main()
{
    int I;
    scanf("%d",&I);
    int input;
    double sum = 0;
    
    for(int i = 0; i < I; i++){
        scanf("%d", &input);
        sum+=input;
    }

    double avg;
    int s;
    scanf("%d",&s);

    for(int i = 1; i <= s; i++){
        scanf("%d",&input);
        sum += input;
        avg = sum/(I+i);
        printf("%lf \n", avg);
    }
    return 0;
}