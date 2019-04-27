#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include <iomanip>
#include <fstream>
#include <string>
#include "backToMenu.h"
using namespace std;


    void backToMenu(void) {
      int m;
      cout << "Enter 0 to go back to menu: ";
      cin >> m;
      if (m==0) {
        menu();
      }
    }
