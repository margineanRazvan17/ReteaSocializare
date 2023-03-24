//
// Created by Razvan on 30/05/2022.
//

#ifndef PROIECTSDA_USERINTERFACE_H
#define PROIECTSDA_USERINTERFACE_H
#include "utilizatorService.h"
#include "prietenieService.h"
#include "MesajService.h"
#include <iostream>
using namespace std;
class ui{
private:
    UtilizatorService serviceUser;
    PrietenieService prietenieService;
    MesajService mesajSevice;

public:
    ui() = default;

    ui(UtilizatorService &us, PrietenieService &ps, MesajService& ms){
        this->serviceUser = us;
        this->prietenieService = ps;
        mesajSevice = ms;
    }
    void registerUser(){
        cout << " username: " << endl;
        string un;
        cin >> un;

        bool verify = true;
        cout << " password: " << endl;
        string pass;
        while (verify) {
            cin >> pass;
            if (pass.length() < 6) {
            cout << "Parola trebuie sa contina cel putin 6 caracterer." << endl;
            cout << "Reintroduceti parola:";
            }
            else
                verify = false;
        }

        this->serviceUser.addUtilizator(un, pass);
    };


    void loginUser(){
        cout<<"enter username:"<<endl;
        string un;
        cin >> un;
        cout<<"enter password:"<<endl;
        string pas;
        cin>>pas;
        if(!this->serviceUser.verifyUser(un, pas))
            cout<<"User sau parola gresit/a,reincercati!"<<endl;
        else this->runMenu2(un);
    }

    void showDisplay(){
        cout<<"1. register"<<endl;
        cout<<"2. login"<<endl;
        cout<<"3. exit!"<<endl;
    }

    void runMenu(){
        while(true){
            showDisplay();

            int optiune;
            cout << "Alegeti optiune:";
            cin >> optiune;
            if(optiune == 1) registerUser();

            else if (optiune == 2) loginUser();

            else if (optiune == 3)  break;
        }

    }

    void runMenu2(string un){
        cout << endl;
        cout<<"Salut, "<< un <<endl;
        while (true){

            cout<<endl;
            cout<<"1.Adauga prieten."<<endl;
            cout<<"2.Sterge prieten."<<endl;
            cout<<"3.Vizualizaeaza prieteni."<<endl;
            cout<<"4.Scrie un mesaj."<<endl;
            cout<<"5.Stergere mesaj."<<endl;
            cout<<"6.Vizualizeaza mesaje."<<endl;
            cout<<"7.Iesire!"<<endl;
            cout<<"8.Stergere cont."<<endl;

            cout<<"Alegeti optiune:";
            int optiune;
            cin>>optiune;

            if (optiune == 1){
                string username;
                cout<<"Adaugati prieten(dupa nume user):";
                cin >> username;
                adaugaPrietenie(un, username);
            }
            if(optiune == 2){
                cout<<"Introduceti username-ul prietenului: "<<endl;
                string username;
                cin>>username;
                prietenieService.stergerePrietenieService(un, username);
            }
            if (optiune == 3){
                Prietenie *p;
                p = prietenieService.getAll();
                cout<<"Prietenii lui "<<un<<" sunt:"<<endl;
                for(int i = 0; i < prietenieService.size(); i++)
                    cout<<p[i].getUsername2()<<endl;

            }
            if(optiune == 4){
                Prietenie *p;
                p = prietenieService.getAll();
                bool verify = false;
                cout<<"Introduceti destinatarul: "<<endl;
                string receiver;
                cin >> receiver;
                for(int i = 0; i < prietenieService.size(); i++){
                    if(p[i].getUsername2() == receiver) verify = true;
                }
                if(!verify){
                    cout<<"Eroare, nu sunteti prieten cu userul respectiv!"<< endl;

                }
                else{
                cout<<"Introduceti mesajul: "<<endl;
                string info;
                cin>>info;
                mesajSevice.adaugaMesajService(un, receiver, info);}
            }

            if(optiune == 5){
                cout<<"Introduceti mesajul: "<<endl;
                string info;
                cin>>info;
                cout<<"Introduceti interlocutorul: "<<endl;
                string receiver;
                cin >> receiver;
                mesajSevice.stergereMesajService(un, receiver, info);
                mesajSevice.stergereMesajService(receiver, un, info);
            }
            if(optiune == 6){
                Mesaj* m = mesajSevice.getAll();
                for(int i = 0; i<mesajSevice.size(); i++)
                    if(m[i].getSender() == un || m[i].getReceiver() == un)
                        cout<<m[i];
            }
            if (optiune == 8){
                serviceUser.removeUtilizator(un);
                cout<<"contul a fost sters."<<endl;
                break;
            }
            if (optiune == 9){
                cout<<"Introduceti noua parola: "<<endl;
                string password;
                cin>>password;
                serviceUser.modify(un, password);
                cout<<"Parola a fost schimbata cu succes! "<<endl;
                break;
            }

            if(optiune == 7) break;
            //if(optiune == 8) serviceUser.removeUtilizator()
        }
    }
    void adaugaPrietenie(string u1, string u2){

        prietenieService.adaugaPrietenieService(u1, u2);
    }
};



#endif //PROIECTSDA_USERINTERFACE_H
