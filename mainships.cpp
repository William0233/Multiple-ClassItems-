



#include <iostream>
#include <string>
using namespace std;

 
class Ship {

protected:

 string     name;
 string     year;
 
public:
    
                Ship(string n, string y){name = n; year = y;}
void            load_name(string n, string y){name = n; year =y;}      // accessor
string          load_year(string y){year = y;}
string          find_name(void) const {return name;} 
string          find_year(void) const {return year;}
virtual void    print()  	    {cout<< "Name: "<<find_name()<<endl;
								cout<< "Year: " << find_year()<<endl;}
    
};


class CruiseShip : public Ship {
    

int             Pass_cap;

public:

                CruiseShip (string n, string y, int c) : Ship( n, y ) 
               {Pass_cap = c;}
void            load_cap ( const int c){ Pass_cap = c;}  
int             find_cap(void){return Pass_cap;} 
virtual void    print() {cout<< "Name: "<<find_name()<<endl;
							  cout<<"Year: "<< find_year()<<endl;
							 cout<<"Passenger cap: " << find_cap()<<endl;}
};

class CargoShip : public Ship {
	
int				ton_cap;

public:
	
				CargoShip ( string n, string y, int t) : Ship (n, y)
				{ ton_cap = t;}
void			load_ton (int t){ton_cap = t;}
int 			find_ton (void) { return ton_cap; }
virtual void 	print() {cout<< "Name: " << find_name()<<endl;
							  cout<< "Year: "<<find_year()<<endl;
							//  cout<< "Passenger cap: "<<find_cap()<<endl;
							  cout<< "Ton cap: " <<find_ton()<<endl;}
				


	
};





int main(){

cout<< "This program prints the attributes of three different"<<endl;
cout<< "items of the same kind; ussing an array of pointers"<< endl;	
cout<< endl;
cout<<endl;
    
Ship      *sp[3] = {
					new Ship ("Nina", "1480"),
					new CargoShip ("Pinta","1482",9000),
					new CruiseShip ("Santa Maria", "1451", 300)
					};

int count;
for (count =0; count < 3; count ++){
	sp[count] -> print();
}
cin.get();

    return 0;
}




