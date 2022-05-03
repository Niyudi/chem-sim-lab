/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/main.cc to edit this template
 */

/*
 * File:   main.cpp
 * Author: niyudi
 *
 * Created on 3 de maio de 2022, 14:38
 */

#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    QMainWindow window = QMainWindow();
    window.show();

    return app.exec();
}
