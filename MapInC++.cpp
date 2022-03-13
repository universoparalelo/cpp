#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <list>

using namespace std;

int main(){
	map <string,string> myDictionary;
	
	myDictionary.insert(pair<string,string>("Manzana","Apple"));
	//pair <string, string> myDictionary(<Manzana>, <Apple>);
	myDictionary.insert(pair<string,string>("Naranja","Orange"));
	myDictionary.insert(pair<string,string>("Banana","Banana"));
	myDictionary.insert(pair<string,string>("Silla","Chair"));
	myDictionary.insert(pair<string,string>("Escritorio","Desk"));
	
	cout<<myDictionary.size()<<endl;
	
	for(auto pair : myDictionary){
		cout << pair.first << " - " << pair.second << endl;
	}
	
	//for (auto &pair = myDictionary.begin(); pair != myDictionary.end(); ++pair){
    //    cout << "[" << pair->first << ","
    //               << pair->second << "]\n";
    //}
	
	map<string, list<string> shadowHunters;
	
	list<string> AlecFriends {"Magnus", "Jace", "Isabelle"};
	list<string> ClaryFriends {"Magnus", "Simon", "Luke"};
	list<string> MagnusFriends {"Alec", "Vampires", "Wizards"};
	
	shadowHunters.insert(pair<string,list<string>>("Alec","AlecFriends"));
	shadowHunters.insert(pair<string,list<string>>("Clary","ClaryFriends"));
	shadowHunters.insert(pair<string,list<string>>("Magnus","MagnusFriends"));
	
	for(auto pair:shadowHunters){
		cout<<pair.first<<" - ";
		for(auto friends:pair.second){
			cout<<friends<<".";
		}
	}*/

		
		
	system("pause>0");
}
/*
#include <iostream>
#include <map>
#includecstring>
 
using namespace std;

int main()
     mapcstring, string myDictionary:
     myDictionary.insert(paircstring, string>("strawberry", "die Erdbeere"));
     myDictionary.insert(paircstring, string>("orange", "die Orange, die Apfelsine"));
     myDictionary.insert(paircstring, string>("apple", "der Apfel"));
     myDictionary.insert(paircstring, string>("banana", "die Banane"));
     for (auto pair : myDictionary)
         cout « pair.first « - « pair. second <« endl;
     system("pause>0");*/
