// Read a text file by line and save to a vector of strings
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// the class that stores data
class Student
{
private:
    int id;
    string name;
    int age;

public:
    Student(string s)                          //constructor   
    {
      name = s;   
    }  
    Student(string s, int i)                  //constructor   
    {
      name = s;   
      id = i;          
    }     
    Student(string s, int i, int g)                  //constructor   
    {
      name = s;   
      id = i;  
      age = g;        
    }  
    void print()
    {
        cout << "id:" << id << ", name:" << name << ", age:" << age << endl; 
    }
    string getStudentInfo()
    {
        return to_string(id) + "," + name + "," + to_string(age) ; 
    }

}; //class ends here

int main () {
    string filename = "students.csv";
    string fileout = filename.substr(0, filename.find('.')) + ".txt";
    string line;
    vector<string> mylines;  
    ifstream myfile(filename);
    ofstream myfileout(fileout);
    if (myfile.is_open()){
        while (getline(myfile,line))
        {
            mylines.push_back(line);
        }
        myfile.close();
        cout << "Here are lines stored in vector mylines:" << endl;
        for (auto l: mylines) {
            cout << l << endl;
        }
        if (myfileout.is_open()){
            for (auto l: mylines) {
                myfileout << l << endl;
            }  
            myfileout.close(); 
            cout << "Contents saved to output file " << fileout << endl;
        } else {
            cout << "Can not open " << fileout << " to write." << endl;
        }
    } else {
        cout << "Can not open " << filename << " to read." << endl; 
    }
    myfile.close();
    myfile.clear();

    filename = "students.csv";
    string word, header;
	vector<string> row;
	vector<vector<string>> rows;
    myfile.open(filename, ios::in);
	if(myfile.is_open()){
        getline(myfile, header);
		while(getline(myfile, line))
		{
			row.clear();
            //convert a string into a stringstream;
			stringstream fields(line);
			while(getline(fields, word, ','))
				row.push_back(word);
			rows.push_back(row);
		}
        myfile.close();
        myfile.clear();        
        cout << header << endl;
        for(auto row: rows){
            for (auto cell: row) {
                cout << cell << " ";
            }
            cout << endl;
        }
	}
	else
		cout<<"Could not open file " << filename << " to read." << endl;

    filename = "students.csv";
    string id, name, age;
    int count;
	vector<Student> students;
    myfile.open(filename, ios::in);
	if (myfile.is_open()) {
        getline(myfile, header);
        count = 0;
		while(getline(myfile, line))
		{
            //convert a string into a stringstream;
			stringstream fields(line);
            getline(fields, id, ',');
            getline(fields, name, ',');
            getline(fields, age, ',');                        
            Student student(name, stoi(id), stoi(age));
			students.push_back(student);
            count++;
		}
        myfile.close();
        cout << header << endl;
        for(auto st: students){
            st.print();
        }
	}
	else
		cout<<"Could not open file " << filename << " to read." << endl;

    //Write to a file
    filename = "students.out";
    ofstream myout(filename);
    if (myout.is_open()) {
        myout << "#id, name, age" << endl;
        for(auto st: students){
            myout << st.getStudentInfo() << endl;
        }
        myfile.close();  
    }  else
		cout<<"Could not open file " << filename << " to write." << endl;

    return 0;
}