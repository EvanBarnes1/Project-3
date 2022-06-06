#include <cstdio>
#include <cstdlib>

char toUpper(char x);

int main() {
    char r;
    do {
        //Declaring the varibles
        float Height, BMI;
        int Bodyweight;
        //Printing the entry screen
        printf("Body Mass Index (BMI) Calculator\n");
        printf("================================\n\n");
        printf("BW   : Weight (lbs.)\n");
        printf("BH   : Height (ft)\n");
        printf("BMI  : Body Mass Index\n\n");
        printf("BW in pounds   : ");
        //scans the first input which is the bodyweight
        scanf("%d", & Bodyweight);
        printf("BH in feet   : ");
        //scans the next input which is the height
        scanf("%f", & Height);
        //Converts lbs and ft to kg and m to make simpler math
        Bodyweight = Bodyweight * 0.453592;
        Height = Height * 0.3048;
        //The BMI formula
        BMI = Bodyweight  / (Height * Height);
        printf("BMI  : %0.2f\n\n", BMI);
        //Figuring out where on the index you are for your height and weight
        printf("You are ");
        if (BMI < 18.5)
            printf("Underweight");
        else if (BMI < 23)
            printf("Normal weight");
        else if (BMI < 25)
            printf("Overweight");
        else if (BMI < 30)
            printf("Kind of Obese");
        else
            printf("Morbidly Obese");
        printf("\n\nTry again [Y/N]? ");
        //Allows for multiple tries
        do {
            r = getchar();
            r = toUpper(r);
        } while (r != 'Y' && r != 'N');
    } while (r == 'Y');
    //0 is false and 1 is true
    return 0;
}
//toUpper constructor for getting the character to caps
char toUpper(char x) {
    if (x >= 97 && x <= 122) x = x - 32;
    return x;
}
