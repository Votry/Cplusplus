

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>

int main() {
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;
    sql::Statement* stmt;
    sql::ResultSet* res;

    // Create a connection
    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "username", "password");

    // Connect to the specific database
    con->setSchema("your_database");

    // Execute a query
    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT * FROM your_table");

    while (res->next()) {
        cout << "Column1: " << res->getString("column1") << endl;
    }

    // Clean up
    delete res;
    delete stmt;
    delete con;

    return 0;
}
using namespace std;
//declaration of a pointer
int* nbre;
string* chaine;
double* tab;
double somme(double a, double b)
{
	return a+b;
}
class Olona
{
public:
	string anarana;
	string fanampiny;
	//Constructor
	Olona(string a, string f) : anarana(a), fanampiny(f) {}
	string presentermoi(string anarana,string fanampiny){
		return "Bonjour, je m'appelle " + anarana + " " + fanampiny;
	}
};

int main()
{
	


	return 0;
}


