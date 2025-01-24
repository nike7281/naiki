#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    int  intelligence=rand()%18+1;
    int  stamina=rand()%(19-intelligence)+1;
    int  charisma=20-intelligence-stamina;
    
    printf("intelligence:%d,stamina:%d,charisma:%d,Class:%s\n",intelligence,stamina,charisma,
           intelligence>=stamina&&intelligence>=charisma?"Mage":
           stamina>=charisma?"Knight":"Thef");
    
    return 0;
}