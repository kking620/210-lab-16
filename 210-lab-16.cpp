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
        Color() {Red = 100, Blue = 100, Green = 100;}
        Color(int r) {Red = r, Blue = 100, Green = 100;}
        Color(int r, int b) {Red = r, Blue = b, Green = 100;}
        Color(int r, int b, int g) {Red = r, Blue = b, Green = g;}    

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
    Color color2(150);
    //calling the class functions for the class object using the dot operator to set the values of the colors
    //and printing out the appropriate values
    color2.getRed();
    color2.setBlue(43);
    color2.setGreen(12);
    color2.print();

    cout << "Color #3\n";
    //declaring the second color class object
    Color color3(6, 35);
    //calling the class functions for the class object using the dot operator to set the values of the colors
    //and printing out the appropriate values
    color3.getRed();
    color3.getBlue();
    color3.setGreen(204);
    color3.print();

    cout << "Color #4\n";
    //declaring the second color class object
    Color color4(187, 14, 103);
    //calling the class functions for the class object using the dot operator to set the values of the colors
    //and printing out the appropriate values
    color4.getRed();
    color4.getBlue();
    color4.getGreen();
    color4.print();

    return 0;
}