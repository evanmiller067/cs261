#include "reporter.h"
/*
void reporter::printFullReport(int y){
	string monthList[13] = {"Jan","Feb","Mar",
                            "Apr","May","Jun",
                            "Jul","Aug","Sep",
                            "Oct","Nov","Dec",
                            "Tot"};
    cout << "*******" << y << "*******\n";
    for(map<string, stationdata*>::iterator i = ds->begin(); i != ds->end(); i++){
        map<int, yeardata*>* dy = i->second->getDB();
        for(map<int, yeardata*>::iterator j = dy->begin(); j != dy->end(); j++){
            if(j->first == y){
                cout << "\nStation: " << i->first << endl << endl;
                cout << "           ";
                for(int i = 0; i < 13; i++){
                    cout << setw(8) << right << monthList[i];
                }
                cout << endl;

                map<string, resourcedata*>* dr = j->second->getDB();
                for(map<string, resourcedata*>::iterator k = dr->begin(); k != dr->end(); k++){
                   cout << setw(11) << left << k->first;
                   for(int i = 0; i < 12; i++){
                       cout << setw(8) << right << k->second->getMonthCount(i);
                   }
                   cout << setw(8) << right << k->second->getTotal();
                   cout << endl;
                }
            }
        }
        cout << endl;
    }
};
*/

