#include <iostream>
using std::string;
using namespace std;

// creation de la class,nom et attributs

class Employee{
// encapsulation
private:
	string Name;
	string Compagny;
	int Age;
public:

	void setName(string name){
		Name = name;
	}
	string getName(){
		return Name;
	}
	void setCompagny(string compagny){
		Compagny = compagny;
	}
	string getCompagny(){
		return Compagny;
	}
	void setAge(int age){
		if (age>=18)
		Age = age;
	}
	int getAge(){
		return Age;
	}
	/*string Name;
	string Compagny;
	int Age;*/

	//creation de la fonction
	// deux apres ...

	void IntroduceYouself(){
		cout<< "Name - " << Name <<"\n";
		cout<< "Compagny - " << Compagny <<"\n";
		cout<< "Age - " << Age <<"\n";
	}

	// constructeur (a le meme nom que la classe, pas de datentyp et est tjrs public)
	Employee(string name,string compagny,int age){
		Name = name;
		Compagny = compagny;
		Age = age;
	}
};

int main()
{	//creation de object et valeurs aux attributs de la classe

	Employee employee1 = Employee("Christophe Lowe", "Programmation OOp", 34);

	/*employee1.Name = "Christophe";
	employee1.Compagny = "Programmation OOp";
	employee1.Age = 34;*/
	
	//introduce mz function
	employee1.IntroduceYouself();
	
	//deuxieme User
	Employee employee2 = Employee("Sado Garros", "Hannover e.v bei C-sharp", 29);

	/*employee2.Name = "Sado Garros";
	employee2.Compagny = "Hannover e.v bei C-sharp";
	employee2.Age = 29;*/

	employee2.IntroduceYouself();

	cout<<"---------------------------------------" "\n";
	
	// encapsulation

	employee1.setAge(17);
	cout<< employee1.getName() <<" ist " << employee1.getAge() <<" Jahr alt " <<"\n";

	//Abstraction
}
