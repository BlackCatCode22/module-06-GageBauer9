#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <fstream>
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;

string getCurrentDateISO(){
    auto now = system_clock::now();

    auto nowInDays = floor<days>(now);

    year_month_day currentDate = year_month_day{nowInDays};

    ostringstream oss;

    oss << currentDate;

    return oss.str();
}

year_month_day calcAnimalBirthday(int age, int birthMonth, int birthDay){
    auto now = system_clock::now();
    
    auto nowInDays = floor<days(now);

    year_month_day today = year_month_day{nowInDays};

    year_month_day thisYearBirthday{today.year(), month{birthMonth}, day{birthDay}};

    year_month_day birthYearBirthday = thisYearBirthday - years{age};

    if birthMonth = Spring
        then birthMonth = "March"
    if birthMonth = Fall
        then birthMonth = "September"
    if birthMonth = Winter
        then birthMonth = "December"
    if birthMonth = summer
        then birthMonth = "May"
        
    return birthYearBirthday;
}

class Animals {
    protected:
        int age;
        int weight;
        string name;
        string species;
        string sex;
        string season;
        string from;
        year_month_day birthDate;
        year_month_day arrivalDate;

    public:
        Animals(int age, int weight, string& name, string& species, string& sex, string& season, string& from){
            numOfAnimals++; cout << " A new Animal was added there are now " << numOfAnimals << " animals in the zoo!\n";
        } 

    private:
        static int numOfAnimals;
};

class Hyena : public Animals{
    public:
        Hyena(int age, int weight, string name, string species, string sex, string season, string from):Animals(age, weight, name, species, sex, season, from){

        }

};

class Lion : public Animals{
    public:
        Lion(int age, int weight, string name, string species, string sex, string season, string from):Animals(age, weight, name, species, sex, season, from){

        }
};

class Tiger : public Animals{
    public:
        Tiger(int age, int weight, string name, string species, string sex, string season, string from):Animals(age, weight, name, species, sex, season, from){

        }
};

class Bear : public Animals{
    public:
        Bear(int age, int weight, string name, string species, string sex, string season, string from):Animals(age, weight, name, species, sex, season, from){

        }
};

int Animals::numOfAnimals = 0;

int storingu(){
    vector<string> Animal;
    Animal.push_back("Aninmal added");
    for (vector<string>::iterator i=Animal.begin();i!=Animal.end();++i)
    cout << *i;
    return 0;   
}

int main(){
    map<int, string> Hyenas;

    Hyenas[1] = "Shenzi";
    Hyenas[2] = "Banzai";
    Hyenas[3] = "Ed";
    Hyenas[4] = "Zig";

    map<int, string> Lions;

    Lions[1] = "Scar";
    Lions[2] = "Mufasa";
    Lions[3] = "Simba";
    Lions[4] = "Kiara";

    map<int, string> Tigers;
    Tigers[1] = "Tony";
    Tigers[2] = "Tigger";
    Tigers[3] = "Amber";
    Tigers[4] = "Hobbs"; //Calvin and hobbs refrance

    map<int, string> Bears;
    Bears[1] = "Yogi";
    Bears[2] = "Smokey";
    Bears[3] = "Padington";
    Bears[4] = "Lippy";

    cout << "Hyeans: " << endl;
    for( map<int,string>::iterator i=Hyenas.begin(); i!=Hyenas.end(); ++i){
        
        cout << (*i).first << ": " << (*i).second << endl;
        
    }
    cout << "\n";
    
    cout << "Lions: " << endl;
    for( map<int,string>::iterator i=Lions.begin(); i!=Lions.end(); ++i){
        cout << (*i).first << ": " << (*i).second << endl;
    }
    cout << "\n";

    cout << "Tigers: " << endl;
    for( map<int,string>::iterator i=Tigers.begin(); i!=Tigers.end(); ++i){
        cout << (*i).first << ": " << (*i).second << endl;
    }
    cout << "\n";

    cout << "Bears: " << endl;
    for( map<int,string>::iterator i=Bears.begin(); i!=Bears.end(); ++i){
        cout << (*i).first << ": " << (*i).second << endl;
   }
    cout << "\n";

    return 0;
}

int read(){

    fstream arriving;
    arriving.open("arrivingAnimals.txt", ios::in);
    if (arriving.is_open()){
        string line;
        while (getline(arriving, line)){
            cout << line << endl;      
        }
        arriving.close();
    }

    
    return 0;
}
