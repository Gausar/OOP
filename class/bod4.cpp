#include<iostream>

using namespace std;

class bankaccount{
    private:
        char *name;
        int dugaar;
        float uldegdel;

    public:
        void dans_neeh(){
            name = new char[30];
            cout<<"ner : ";
            cin>>name;
            cout<<"dansnii dugaar : ";
            cin>>dugaar;
            cout<<"uldegdel : ";
            cin>>uldegdel;
        }
        void mongo_hiih(int mongo){
            uldegdel = uldegdel + mongo;
        }
        void mongo_awah(int t){
            if(t > uldegdel){
                cout<<"mongon dun hureltsehgui"<<endl;
                exit(0);
            }
            else{
                uldegdel = uldegdel - t;
            }
        }
        void dans_haah(){
            delete[] name;
        }
        float uldegdel_tootsoh(){
            return uldegdel;
        }

};

int main(){
    bankaccount a, b, c;
    int x, t;
    while(true){
        cout<<"1-dans neeh, 2-mongo hiih, 3-mongo awah, 4-uldegdel shalgah, 5-dans haah, 6-exit"<<endl;
        cin>>x;
        switch(x){
            case 1:
                a.dans_neeh();
                break;
            case 2:
                int mongo;
                cout<<"oruulah mongon dun : ";
                cin>>mongo;
                a.mongo_hiih(mongo);
                break;
            case 3:
                cout<<"awah mongonii hemjeegee oruulaarai"<<endl;
                cin>>t;

                a.mongo_awah(t);
                break;
            case 4:
                float uld;
                uld = a.uldegdel_tootsoh();
                cout<<"uldegdel ni : "<<uld<<endl;
                break;
            case 5:
                cout<<"dans haagdlaa"<<endl;
                a.dans_haah();
                break;
            default:
                exit(0);
        }
    }
    return 0;
}