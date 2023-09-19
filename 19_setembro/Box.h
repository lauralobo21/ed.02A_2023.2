//PARA NÃO DAR ERRO DE AMBIGUIDADE, E SE JÁ TIVER DECLARADO NA MAIN, NÃO DÁ PROBLEMA;
//# -> VAI MEXER ANTES DE COMPILAR
#ifndef BOX_H //if not defined
#define BOX_H
#include <iostream>
//nunca usa using namespace std;

class Box {
private:
    double height; // altura
    double width;  // largura
    double length; // comprimento

public:
    // Construtor default
    Box() : Box(1.0,1.0,1.0) { 
        std::cout << "Construtor default foi invocado";
    }
    // Construtor
    Box(double h = 1.0, double w = 1.0, double l = 1.0) {
        set_height(h);
        set_width(w);
        set_length(l);
        std::cout << "Construtor com 3 args foi invocado.\n";
    }
    // Setter: ajusta a altura
    void set_height(double a) {
        if(a >= 0) height = a;
    }
    // Getter : retorna o altura
    double get_heigth() {
        return height;
    }
    // Setter: ajusta largura
    void set_width(double w) {
        if(w >= 0) width = w;
    }
    // Getter : retorna o largura
    double get_width() {
        return width;
    }
    // Setter: ajusta comprimento
    void set_length(double l) {
        if(l >= 0) length = l;
    }
    // Getter : retorna o comprimento
    double get_length() {
        return length;
    }
    // retorna o volume da caixa
    double volume() {
        return height * width * length;
    }
    std::string to_string() {
        return "Caixa(heigth: " + heigth + ",width:" + witdth + ",length:" + length;
    }

};
#endif