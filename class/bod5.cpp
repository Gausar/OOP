#include<iostream>
#include<string>

using namespace std;
class Library{
    private:
        int id;
        string name;
        string zohiogch;
        string publisher;
        float price;
        bool Unshlagad_eseh = false;
    public:
        void nom_nemeh(){
            cout<<"id"<<", "<<"name"<<", "<<"zohiogch"<<", "<<"publisher"<<", "<<"price"<<endl;
            cin>>id>>name>>zohiogch>>publisher>>price;
        }
        void nom_olgoh(){
            if(Unshlagad_eseh == false){
                Unshlagad_eseh = true;
                cout<<"nom unshlagad garlaa"<<endl;
            }
            else cout<<"ene nom unshlagad garsan bn"<<endl;
        }
        void nom_butsaah(){
            if(Unshlagad_eseh == true){
                Unshlagad_eseh = false;
                cout<<"nomiig amjilttai butsaalaa"<<endl;
            }
            else cout<<"nom unshlagad garaagui bn"<<endl;  
        }
        void nomiin_medeelel(){
            cout<<"id"<<", "<<"name"<<", "<<"zohiogch"<<", "<<"publisher"<<", "<<"price"<<", unshlagad eseh"<<endl;
            cout<<id<<", "<<name<<", "<<zohiogch<<", "<<publisher<<", "<<price<<", ";
            if(Unshlagad_eseh == true){
                cout<<"Unshlagad bn"<<endl;
            }
            else cout<<"bolomjtoi"<<endl;
        }
};

int main(){
    Library book1, book2;
    book1.nom_nemeh();
    book2.nom_nemeh();

    book1.nomiin_medeelel();
    book2.nomiin_medeelel();

    book1.nom_olgoh();
    book1.nomiin_medeelel();

    book2.nom_butsaah();

    return 0;
}