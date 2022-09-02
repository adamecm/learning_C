#include <stdio.h>

int main(){
    printf("How many worlds do you want to greet? (Maximum is 8)\n");
    const char *planets[9];
    planets[0] = "Mercury";
    planets[1] = "Venus";
    planets[2] = "Earth";
    planets[3] = "Mars";
    planets[4] = "Jupiter";
    planets[5] = "Saturn";
    planets[6] = "Uranus";
    planets[7] = "Neptune";
    planets[8] = "Pluto <3";

    int input;
    scanf("%d", &input);
    
    if(input < 1 ){
        printf("That was not a number, the worlds will not be greeted...\n");
    }else if(input > 8) {
        input=9;
    }
    for (short i = 0; i < input; i++){
        printf("Hello, %s!\n", planets[i]);
    }
    return 0;
}

