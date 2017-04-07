#ifndef DUNGEONGENERATION_H_INCLUDED
#define DUNGEONGENERATION_H_INCLUDED
using namespace std;

class Rooms{
private:
    int Room [7][7];
    int MonsterNumbers;
    int ExitDirection;
    int PlayerX;
    int PlayerY;
    bool Cleared;
public:
    int RoomTemplate [7][7];
    void CreateRoom(){
        for (int i=0;i<7;i++){
            for (int j=0;j<7;j++){
                Room [i][j]=RoomTemplate [i][j];
            }
        }
    }
    void PrintRoom(){
        for (int ii=0;ii<7;ii++){
            for(int jj=0;jj<7;jj++){
                if (Room [ii][jj]== 0){
                cout << " ";}
                else if (Room [ii][jj]== 1){
                    cout << "P";
                }
                else if (Room [ii][jj]== 2||Cleared!=true){
                    cout << "M";
                }
                else if (Room [ii][jj]== 3){
                    cout << "X";
                }
                else if (Room [ii][jj]== 4){
                    cout << "D";
                }
            }
            cout << endl;
        }

    }
    void SetTemplate(int TemplateNumber){
        if(TemplateNumber==1){
               RoomTemplate ={{3,3,3,4,3,3,3},
                            {3,0,0,0,0,0,3},
                            {3,0,0,0,0,0,3},
                            {4,0,0,1,0,0,4},
                            {3,0,0,0,0,0,3},
                            {3,0,0,0,0,0,3},
                            {3,3,3,4,3,3,3},}
        }
        else if(TemplateNumber==2){
              RoomTemplate =  {
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,0,3},
                {4,0,0,2,0,0,4},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
                }

        }
        else if(TemplateNumber==3){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,2,0,0,0,3},
                {4,0,0,3,0,0,4},
                {3,0,0,0,0,0,3},
                {3,0,2,0,0,0,3},
                {3,3,3,4,3,3,3},
                }
        }
        else if(TemplateNumber==4){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,0,3},
                {4,0,0,3,0,0,4},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
                }
        }
        else if(TemplateNumber==5){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,3,3},
                {4,0,0,2,0,0,4},
                {3,3,0,0,0,0,3},
                {3,0,0,0,0,2,3},
                {3,3,3,4,3,3,3},
                }
        }
        else if(TemplateNumber==6){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,3,0,2,0,3},
                {4,0,0,2,0,0,4},
                {3,0,3,0,0,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
                }
        }
        else if(TemplateNumber==7){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,0,3,0,0,3},
                {4,0,0,0,0,0,4},
                {3,0,0,3,0,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
}
        }
        else if(TemplateNumber==8){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,2,0,0,0,3},
                {4,0,0,0,0,0,4},
                {3,0,0,0,2,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
                }
        }
        else if(TemplateNumber==9){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,0,0,2,0,3},
                {4,0,0,0,0,0,4},
                {3,0,2,0,0,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
                }
        }
        else if(TemplateNumber==10){
                RoomTemplate ={
                {3,3,3,4,3,3,3},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,0,3},
                {4,0,0,2,0,0,4},
                {3,0,0,0,0,0,3},
                {3,0,0,0,0,0,3},
                {3,3,3,4,3,3,3},
                }
        }
    }

};

#endif // DUNGEONGENERATION_H_INCLUDED
