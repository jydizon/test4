#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include <iomanip>
#include <fstream>
#include <string>
#include "menu.h"
#include "salarycheck.h"
#include "addAttribute.h"
#include "requestLeave.h"
#include "terminatedStaff.h"
#include "deleteStaff.h"
#include "addStaff.h"
#include "modifyStaff.h"
#include "searchStaff.h"
#include "viewAllStaff.h"
#include "backToMenu.h"
using namespace std;


    void menu(void) { //the menu page
      while(true) {
        cout << "\n\t\t\t============================================";
        cout << "\n\t\t\t          Staff Management System " ;
        cout << "\n\t\t\t============================================";
        cout << "\n";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 1: View List of Staff Members";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 2: Search Staff Records";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 3: Modify Staff Records";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 4: Add New Staff Record";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 5: Delete Existing Staff Record";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 6: View List of Terminated Staff";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 7: Request for Casual Leave";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 8: Add New Atrribute";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 9: Salary Check";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n\t\t\tOption 10: End Program";
        cout << "\n\t\t\t____________________________________________";
        cout << "\n";
        cout << "\n";
        cout << "Please Enter Your Option: ";

        //user's option
        int option;
        cin >> option;
        cout << "\n";

        //calling function based on option chosen
        switch (option) {
          case 1:
            viewAllStaff();
            break;
          case 2:
            searchStaff();
            break;
          case 3:
            modifyStaff();
            break;
          case 4:
            addStaff();
            break;
          case 5:
            deleteStaff();
            break;
          case 6:
            terminatedStaff();
            break;
          case 7:
            requestLeave();
            break;
          case 8:
            addAttribute();
            break;
          case 9:
            salarycheck();
            break;
          case 10:
            cout << "Goodbye! \n"<<endl;
            exit(1);
          default:
            cout << "This option is unavailable \n";
            break;
          }
        }
    }
