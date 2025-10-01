//COMSC-210 | Lab 16 | Kristofer King
//IDE Used: VSC

#include <iostream>
#include <iomanip>

using namespace std;

//declaring and initializing a class
class Color
{
    //declaring the private elements of the class
    private:
        int Red;
        int Blue;
        int Green;

    //declaring the public elements of the class with setters and getters to declare each value
    public:
        int getRed() {return Red;}
        void setRed(int r) {Red = r;}
        int getBlue() {return Blue;}
        void setBlue(int b) {Blue = b;}
        int getGreen() {return Green;}
        void setGreen(int g) {Green = g;}

        //an in class print function that can be called to display the values of the colors from within the class
        void print()
        {
            cout << "Red Value: " << Red << endl;
            cout << "Blue Value: " << Blue << endl;
            cout << "Green Value: " << Green << endl << endl;
        }

};

int main()
{
    cout << "Color #1\n";
    //declaring the first color class object
    Color color1;
    //calling the class functions for the class object using the dot operator to set the values of the colors
    //and printing out the appropriate values
    color1.setRed(155);
    color1.setBlue(76);
    color1.setGreen(103);
    color1.print();

    cout << "Color #2\n";
    //declaring the second color class object
    Color color2;
    //calling the class functions for the class object using the dot operator to set the values of the colors
    //and printing out the appropriate values
    color2.setRed(203);
    color2.setBlue(43);
    color2.setGreen(12);
    color2.print();

    cout << "Color #3\n";
    //declaring the second color class object
    Color color3;
    //calling the class functions for the class object using the dot operator to set the values of the colors
    //and printing out the appropriate values
    color3.setRed(6);
    color3.setBlue(35);
    color3.setGreen(204);
    color3.print();

    return 0;
}