#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <sstream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include "datamembers.h"
// #include "Admin.h"
// #include "Doctor.h"
// #include "Patient.h"
// #include "Receptionist.h"

using namespace std;
void header() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 6);
	cout << "\t\t\t\t\t\t\t   ***************************************************" << endl;
	cout << "\t\t\t\t\t\t\t   ***************************************************" << endl;
	cout << "\t\t\t\t\t\t\t   *********  HOSPITAL  MANAGEMENT  SYSTEM  **********" << endl;
	cout << "\t\t\t\t\t\t\t   ***************************************************" << endl;
	cout << "\t\t\t\t\t\t\t   ***************************************************" << endl;
	SetConsoleTextAttribute(hConsole, 15);
}
void clearScreen() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Press any key to continue_";
	SetConsoleTextAttribute(hConsole, 15);
	getch();
	system("cls");
}
void viewPatients();

int adminLogin() {
	string u1, u2, u3;
	string p1, p2, p3;
	string password;
	string username;
	//    _getch();
	system("cls");
	header();
	cout << "\t\t\t\t\t\t\t\t------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\t Admin Login \n";
	cout << "\t\t\t\t\t\t\t\t------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
	cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\tEnter User Name: ";
	cin >> username;
	cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\tEnter Password: ";
	cin >> password;

	ifstream in("AdminPasswords.txt");
	getline(in, u1);
	getline(in, p1);
	getline(in, u2);
	getline(in, p2);
	getline(in, u3);
	getline(in, p3);

	while (username != u1 && username != u2 && username != u3) {
		cout << "Access denied" << endl;
		cout << "Invalid username" << endl;
		system("pause");
		system("cls");
		adminLogin();
		return 0;
	}
	while (password != p1 && password != p2 && password != p3) {
		cout << "Access denied" << endl;
		cout << "Invalid password." << endl;

		system("pause");
		system("cls");
		adminLogin();
		return 0;
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Access granted" << endl;
	cout << "Welcome Sir " << username << endl;
	SetConsoleTextAttribute(hConsole, 15);
	clearScreen();
}

void AdminMenu() {
	cout << endl
	     << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t | Select one option from menu |" << endl;
	cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|1)Add Doctor                           |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|2)Remove Doctor                        |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|3)Add Receptionist                     |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|4)Remove Receptionist                  |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|5)View Profile of All Doctors          |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|6)Update Doctor information            |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|7) View Profile of All Receptionist    |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|8)Update Receptionist information      |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|9) Logout                              |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	//	SetConsoleTextAttribute(hConsole, 17);
}

class People {
	protected:
		string FirstName, lastName, Age, PhoneNo, Salary;

	public:
		People() {
		}
		People(string fir_name, string last_name, string age, string sal, string phone_number) {
			FirstName = fir_name;
			lastName = last_name;
			Age = age;
			Salary = sal;
			PhoneNo = phone_number;
		}
		virtual void Info() = 0;
};
class Doctor : public People {
	private:
		string Specilization;

	protected:
		string WorkingTime;

	public:
		Doctor() {
		}
		Doctor(string fir_name, string last_name, string age, string sal, string phone_number, string wt, string spec) {
			WorkingTime = wt;
			Specilization = spec;
		}
		void Add_Doctor(string f_n, string l_n, string age, string special, string w_t, string sal, string ph_num) {
			ofstream file;
			file.open("DoctorsData.txt", ofstream::app);

			if (file.is_open()) {
				file << "\n"
				     << f_n << " " << l_n << " " << age << " " << special << " " << w_t << " " << sal << " " << ph_num;
			} else {
				cout << "ERROR FOR FOUND FILE";
				system("pause");
			}
			file.close();

			read_doc_file();
		}
		void Info() override {
			cout << "First Name: " << FirstName << endl;
			cout << "Last Name: " << lastName << endl;
			cout << "Age: " << Age << endl;
			cout << "Specialization: " << Specilization << endl;
			cout << "Working Time: " << WorkingTime << endl;
			cout << "Salary: " << Salary << endl;
			cout << "Phone Number: " << PhoneNo << endl;
		}
		void Info_about_all_doc() {
			fstream dr("DoctorsData.txt", ios::in);

			if (dr.is_open()) {
				cout << left << setw(20) << "First Name" << setw(20) << "Last Name"
				     << setw(20) << "Age" << setw(20) << "Specilization" << setw(20)
				     << "Time Working" << setw(20) << "Salary" << setw(20) << "Phone No" << endl;

				while (dr >> FirstName >> lastName >> Age >> Specilization >> WorkingTime >> Salary >> PhoneNo) {
					cout << left << setw(20) << FirstName << setw(20) << lastName
					     << setw(20) << Age << setw(20) << Specilization << setw(20)
					     << WorkingTime << setw(20) << Salary << setw(20) << PhoneNo << endl;
				}
				dr.close();
			} else {
				cout << "File failed to open.\n";
			}
		}
		int doc;
		void read_doc_file() {
			doc = 0;
			ifstream file;
			file.open("DoctorsData.txt");
			string age, fir_name, last_name, specializ, time_working, salary, phone_num;
			if (file.is_open()) {
				while (!file.eof()) {
					fir_name = "";
					file >> fir_name >> last_name >> age >> specializ >> time_working >> salary >> phone_num;
					if (fir_name == "")
						break;
					Doctor(age, salary, fir_name, last_name, phone_num, time_working, specializ);
					doc++;
				}
			} else {
				cout << "FILE NAMED 'doctors.txt' NOT FOUND" << "\n\n";
				system("pause");
			}
			file.close();
		}
		void removeDoctorData() {
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("DoctorsData.txt");
			ofstream outFile("temp.txt");

			bool found = false;
			while (inFile >> FirstName >> lastName >> Age >> Specilization >> WorkingTime >> Salary >> PhoneNo) {
				if (FirstName == s) {
					found = true;
				} else {
					outFile << FirstName << setw(20) << lastName << setw(20)
					        << Age << setw(20) << Specilization << setw(20)
					        << WorkingTime << setw(20) << Salary << endl
					        << PhoneNo << endl;
					;
				}
			}

			inFile.close();
			outFile.close();
			if (found) {
				remove("DoctorsData.txt");
				rename("temp.txt", "DoctorsData.txt");
				cout << "Doctor details deleted successfully." << endl;
			} else {
				cout << "Doctor ID not found." << endl;
				remove("temp.txt");
			}
		}

		void Doctor_update() {
			string fir_name, last_name, age, sal, phone_number, wt, spec;
			int option;
			bool found = false;
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("DoctorsData.txt");
			ofstream outFile("temp.txt");

			if (!inFile.is_open() || !outFile.is_open()) {
				cout << "Error: Could not open the file." << endl;
				return;
			}
			while (inFile >> fir_name >> last_name >> age >> spec >> wt >> sal >> phone_number) {
				if (fir_name == s) {
					found = true;
					cout << "Updating details for Doctor: " << fir_name << endl;
					system("pause");
					system("cls");
					do {
						cout << "Enter the number of the detail you want to update:\n";
						cout << "1. Update first name " << endl;
						cout << "2. Update last name " << endl;
						cout << "3. Update age " << endl;
						cout << "4. Update Specilization" << endl;
						cout << "5. Update Working Time " << endl;
						cout << "6. Update Salary " << endl;
						cout << "7. Update phone number " << endl;
						cout << "8. FOR EXITING " << endl;
						cin >> option;

						switch (option) {
							case 1:
								cout << "Enter first name: ";
								cin >> fir_name;
								break;
							case 2:
								cout << "Enter last name: ";
								cin >> last_name;
								break;
							case 3:
								cout << "Enter age: ";
								cin >> age;
								break;
							case 4:
								cout << "Enter Specilization: ";
								cin >> spec;
								break;
							case 5:
								cout << "Enter Working Time: ";
								cin >> wt;
								break;
							case 6:
								cout << "Enter salary: ";
								cin >> sal;
								break;
							case 7:
								cout << "Enter phone no: ";
								cin >> phone_number;
								break;
							case 8:
								cout << "You are exiting : ";
								break;
							default:
								cout << "Invalid option selected." << endl;
						}
					} while (option != 8);
				}
				outFile << fir_name << setw(20) << last_name << setw(20)
				        << age << setw(20) << spec << setw(20)
				        << wt << setw(20) << sal << endl
				        << phone_number << endl;
			}
			if (!found) {
				cout << "Not updating data from the file." << endl;
			}
			inFile.close();
			outFile.close();
			remove("DoctorsData.txt");
			rename("temp.txt", "DoctorsData.txt");
		}
};
void DoctorMenu() {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << " -------------------------------" << endl;
	cout << " | Select one option from menu |" << endl;
	cout << " -------------------------------" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl;
	cout << "\t 1. Advise Prescription " << endl;
	cout << "\t 2. Make Appointments" << endl;
	cout << "\t 3. View Appointments " << endl;
	cout << "\t 4. Update Appointments " << endl;
	cout << "\t 5. Cancel Appointments " << endl;
	cout << "\t 6. View Reviews by Patients." << endl;
	cout << "\t 7. Exit " << endl;
	cout << endl;
	cout << "Your option_";
}


int DoctorLogin() {
	system("cls");
	header();
	string u1, u2, u3, u4, u5, u6, u7, u8, u9, u10;
	string p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
	string password;
	string username;
	_getch();
	cout << "\t\t\t\t\t\t\t\t------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\tDoctor Login \n";
	cout << "\t\t\t\t\t\t\t\t------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\t     LOGIN \n";

	cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\tEnter User Name: ";
	cin >> username;
	cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\tEnter Password: ";
	cin >> password;

	ifstream in("DoctorPasswords.txt");

	getline(in, u1);
	getline(in, p1);
	getline(in, u2);
	getline(in, p2);
	getline(in, u3);
	getline(in, p3);
	getline(in, u4);
	getline(in, p4);
	getline(in, u5);
	getline(in, p5);
	getline(in, u6);
	getline(in, p6);
	getline(in, u7);
	getline(in, p7);
	getline(in, u8);
	getline(in, p8);
	getline(in, u9);
	getline(in, p9);
	getline(in, u10);
	getline(in, p10);

	for (int i = 0; i < 10; i++) {
		if (username != u1 && username != u2 && username != u3 && username != u4 && username != u5 && username != u6 && username != u7 && username != u8 && username != u9 && username != u10) {
			cout << "Access denied" << endl;
			cout << "Invalid username" << endl;

			system("pause");
			system("cls");
			DoctorLogin();
			return 0;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (password != p1 && password != p2 && password != p3 && password != p4 && password != p5 && password != p6 && password != p7 && password != p8 && password != p9 && password != p10) {
			cout << "Access denied" << endl;
			cout << "Invalid password." << endl;

			system("pause");
			system("cls");
			DoctorLogin();
			return 0;
		}
	}

	cout << "Access granted" << endl;
}

class Receptionist : public Doctor {
	private:
		string WorkingTime;

	public:
		Receptionist() {
		}
		Receptionist(string fir_name, string last_name, string age, string wt, string sal, string phone_number) {

			WorkingTime = wt;
		}
		void Add_Rec(string f_n, string l_n, string age, string w_t, string sal, string ph_num) {
			ofstream file;
			file.open("RecptData.txt", ofstream::app);

			if (file.is_open()) {
				file << "\n"
				     << f_n << " " << l_n << " " << age << " " << w_t << " " << sal << " " << ph_num;
			} else {
				cout << "ERROR FOR FOUND FILE";
				system("pause");
			}
			file.close();

			// read_recpt_file();
		}
		string bedroomType;
		double bedroomCharge;
		void Info() override {
			cout << "First Name: " << FirstName << endl;
			cout << "Last Name: " << lastName << endl;
			cout << "Age: " << Age << endl;
			cout << "Working Time: " << WorkingTime << endl;
			cout << "Salary: " << Salary << endl;
			cout << "Phone Number: " << PhoneNo << endl;
		}
		void Info_about_all_recpt() {
			fstream rec("RecptData.txt", ios::in);

			if (rec.is_open()) {
				cout << left << setw(20) << "First Name" << setw(20) << "Last Name"
				     << setw(20) << "Age" << setw(20)
				     << "Time Working" << setw(20) << "Salary" << setw(20) << "Phone No" << endl;

				while (rec >> FirstName >> lastName >> Age >> WorkingTime >> Salary >> PhoneNo) {
					cout << left << setw(20) << FirstName << setw(20)
					     << lastName << setw(20) << Age << setw(20) << WorkingTime
					     << setw(20) << Salary << setw(20) << PhoneNo << endl;
				}
				rec.close();
			} else {
				cout << "File failed to open.\n";
			}
		}

		int recpt;
		void read_recpt_file() {
			recpt = 0;
			ifstream file;
			file.open("RecptData.txt");
			string age, fir_name, last_name, time_working, salary, phone_num;
			if (file.is_open()) {
				while (!file.eof()) {
					fir_name = "";
					file >> fir_name >> last_name >> age >> time_working >> salary >> phone_num;
					if (fir_name == "")
						break;
					Receptionist(fir_name, last_name, age, time_working, salary, phone_num);
					recpt++;
				}
			} else {
				cout << "FILE NAMED \"RecptData.txt\" NOT FOUND" << "\n\n";
				system("pause");
			}
			file.close();
		}
		void removeRecptData() {
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("RecptData.txt");
			ofstream outFile("temp.txt");

			bool found = false;
			while (inFile >> FirstName >> lastName >> Age >> WorkingTime >> Salary >> PhoneNo) {
				if (FirstName == s) {
					found = true;
				} else {
					outFile << FirstName << setw(20) << lastName << setw(20)
					        << Age << setw(20) << WorkingTime << setw(20)
					        << Salary << endl
					        << PhoneNo << endl;
				}
			}

			inFile.close();
			outFile.close();
			if (found) {
				remove("RecptData.txt");
				rename("temp.txt", "RecptData.txt");
				cout << "Recptionist details deleted successfully." << endl;
			} else {
				cout << "Receptionist Name not found." << endl;
				remove("temp.txt");
			}
		}
		void Receptionist_update() {
			string fir_name, last_name, age, sal, phone_number, wt;
			int option;
			bool found = false;
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("RecptData.txt");
			ofstream outFile("temp.txt");

			if (!inFile.is_open() || !outFile.is_open()) {
				cout << "Error: Could not open the file." << endl;
				return;
			}
			while (inFile >> fir_name >> last_name >> age >> wt >> sal >> phone_number) {
				if (fir_name == s) {
					found = true;
					cout << "Updating details for Receptionist " << fir_name << endl;
					system("pause");
					system("cls");
					do {
						cout << endl
						     << endl;
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, 14);
						cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
						cout << "\t\t\t\t\t\t\t\t | Select one option from menu |" << endl;
						cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
						SetConsoleTextAttribute(hConsole, 15);
						cout << "Enter the number of the detail you want to update:\n";
						cout << "1. Update first name " << endl;
						cout << "2. Update last name " << endl;
						cout << "3. Update age " << endl;
						cout << "4. Update Working Time " << endl;
						cout << "5. Update Salary " << endl;
						cout << "6. Update phone number " << endl;
						cout << "7. FOR EXITING " << endl;
						cin >> option;

						switch (option) {
							case 1:
								cout << "Enter first name: ";
								cin >> fir_name;
								break;
							case 2:
								cout << "Enter last name: ";
								cin >> last_name;
								break;
							case 3:
								cout << "Enter age: ";
								cin >> age;
								break;
							case 4:
								cout << "Enter Working Time: ";
								cin >> wt;
								break;
							case 5:
								cout << "Enter salary: ";
								cin >> sal;
								break;
							case 6:
								cout << "Enter phone no: ";
								cin >> phone_number;
								break;
							case 7:
								cout << "You are exiting.... ";
								break;
							default:
								cout << "Invalid option selected." << endl;
						}
					} while (option != 7);
				}
				outFile << fir_name << setw(20) << last_name << setw(20)
				        << age << setw(20) << setw(20)
				        << wt << setw(20) << sal << endl
				        << phone_number << endl;
			}
			if (!found) {
				cout << "Not updating data from the file." << endl;
			}
			inFile.close();
			outFile.close();
			remove("RecptData.txt");
			rename("temp.txt", "RecptData.txt");
		}
		void allotRoom() {
			char roomChoice;
			cout << "Choose bedroom category (p for Premium, g for General Ward): ";
			cin >> roomChoice;
			if (roomChoice == 'p' || roomChoice == 'P') {
				bedroomType = "Premium";
				bedroomCharge = PREMIUM_BEDROOM_CHARGE;
			} else if (roomChoice == 'g' || roomChoice == 'G') {
				bedroomType = "General Ward";
				bedroomCharge = GENERAL_BEDROOM_CHARGE;
			} else {
				cout << "Invalid choice, defaulting to General Ward." << endl;
				bedroomType = "General Ward";
				bedroomCharge = GENERAL_BEDROOM_CHARGE;
			}
		}

		void displayBill(int invoiceNumber, string patientName, int patientNumber, int roomNumber, double totalBill, string bedroomType, double bedroomCharge) {
			cout << "\n------------- Invoice -------------\n";
			cout << "Invoice Number: " << invoiceNumber << endl;
			cout << "Patient Name: " << patientName << endl;
			cout << "Patient Number: " << patientNumber << endl;
			cout << "Room Number: " << roomNumber << endl;
			cout << "Bedroom Type: " << bedroomType << endl;
			cout << fixed << setprecision(2);
			cout << "Bedroom Charges: $" << bedroomCharge << endl;
			cout << "Total Bill: $" << totalBill << endl;
			cout << "----------------------------------\n";
		}
};

void RecepMenu() {
	cout << endl
	     << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t | Select one option from menu |" << endl;
	cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|1) Input Patient Information       |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|2) View all patient information    |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|3) Remove Patient                  |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|4) Update Patient                  |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|5) Generate Bill                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|6) Display All Bills               |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|                                   |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@|7) Logout                          |@@" << endl;
	cout << "\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
}
int generateInvoiceNumber() {
	srand(time(0));
	return rand() % 10000 + 1000;
}
int ReceptLogin() {
	string u1, u2, u3;
	string p1, p2, p3;
	string password;
	string username;
	_getch();
	system("cls");
	header();
	cout << "\t\t\t\t\t\t\t\t------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
	cout << "\t\t\t\t\t\t\t\t------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\tEnter User Name: ";
	cin >> username;
	cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\tEnter Password: ";
	cin >> password;

	ifstream in("RecepPasswords.txt");
	getline(in, u1);
	getline(in, p1);
	getline(in, u2);
	getline(in, p2);
	getline(in, u3);
	getline(in, p3);

	for (int i = 0; i < 3; i++) {
		if (username != u1 && username != u2 && username != u3) {
			cout << "Access denied" << endl;
			cout << "Invalid username" << endl;

			clearScreen();
			ReceptLogin();
			return 0;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (password != p1 && password != p2 && password != p3) {
			cout << "Access denied" << endl;
			cout << "Invalid password." << endl;

			clearScreen();
			ReceptLogin();
			return 0;
		}
	}

	cout << "Access granted" << endl;
	clearScreen();
}
void viewPatients() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "======================================================================================================================================" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "  PatientId\t\tName\t\tAge\t\tDisease\t\tMedicine\t\tAddress\t\tContact No" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "======================================================================================================================================" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	for (int i = 0; i <= patientCount; i++) {
		if (patientAge[i] == 0) {
			continue;
		}
		cout << i + 1 << ".  " << patientId[i] << "\t\t" << patientName[i] << "\t\t" << patientAge[i] << "\t\t" << patientDisease[i] << "\t\t" << patientMedicine[i] << "\t\t" << patientAddress[i] << "\t\t" << patientContact[i] << endl;
	}
	SetConsoleTextAttribute(hConsole, 2);
	cout << "======================================================================================================================================" << endl;
	SetConsoleTextAttribute(hConsole, 15);
}

class Patient : public People {
	private:
		string Diagnosis;
		string Day;
		string Time;
		string RoomNo;
		double TotalBill;
		char Ac, Tv, OtherService;
	public:
		Patient() {
		}
		Patient(string fir_name, string last_name, string age, string sal, string phone_number, string dia, string day, string time, string room_no, double totalbill, char ac, char tv, char otherservice ) {

			Diagnosis = dia;
			Time = time;
			Day = day;
			RoomNo = room_no;
			TotalBill = totalbill;
			Ac = ac;
			Tv = tv;
			OtherService = otherservice;
		}
		void Info() override {
			cout << "First Name: " << FirstName << endl;
			cout << "Last Name: " << lastName << endl;
			cout << "Age: " << Age << endl;
			cout << "Salary: " << Salary << endl;
			cout << "Phone Number: " << PhoneNo << endl;
			cout << "Diagnosis: " << Diagnosis << endl;
		}
		void Add_Patient(string f_n, string l_n, string age, string sal, string ph_num, string dia) {
			ofstream file;
			file.open("PatientData.txt", ofstream::app);

			if (file.is_open()) {
				file << "\n"
				     << f_n << " " << l_n << " " << age << " " << sal << " " << ph_num << " " << dia;
			} else {
				cout << "ERROR FOR FOUND FILE";
			}
			file.close();
		}
		void Generate_bill(string f_n, string room_No, double totalBill, char Ac, char tv, char otherService) {
			int invoiceNumber = generateInvoiceNumber();
			ofstream file;
			file.open("bill.txt", ofstream::app);

			if(file.is_open()) {
				file<<"\n"
				    << f_n << " " << room_No <<" "<< totalBill <<" "<< Ac<<" "<<tv<<" "<<otherService;
			} else {
				cout<<"Error for found file";

			}
			file.close();
		}
		void Info_about_all_bills() {
			fstream rec("bill.txt", ios::in);

			if (rec.is_open()) {
				cout << left << setw(20) << "First Name" << setw(20) << "Room Number"
				     << setw(20) << "Total Bill" << setw(20)
				     << "Ac" << setw(20) << "Tv" << setw(20) << "Other Services" << endl;

				while (rec >> FirstName >> RoomNo >> TotalBill >> Ac >> Tv >> OtherService) {
					cout << left << setw(20) << FirstName << setw(20)
					     << RoomNo << setw(20) << TotalBill
					     << setw(20) << Ac << setw(20) << Tv << setw(20) << OtherService << endl;
				}
				rec.close();
			} else {
				cout << "File failed to open.\n";
			}
		}
		void Appointment(string f_n, string l_n, string age, string ph_num, string day, string time) {
			ofstream file;
			file.open("Appointment.txt", ofstream::app);

			if (file.is_open()) {
				file << "\n"
				     << f_n << " " << l_n << " " << age << " " << ph_num << " " << day << " " << time;
			} else {
				cout << "ERROR FOR FOUND FILE";
				system("pause");
			}
			file.close();
		}
		void Info_about_all_appointments() {
			fstream rec("Appointment.txt", ios::in);

			if (rec.is_open()) {
				cout << left << setw(20) << "First Name" << setw(20) << "Last Name"
				     << setw(20) << "Age" << setw(20)
				     << "Phone No" << setw(20) << "Day" << setw(20) << "Timming" << endl;

				while (rec >> FirstName >> lastName >> Age >> PhoneNo >> Day >> Time) {
					cout << left << setw(20) << FirstName << setw(20)
					     << lastName << setw(20) << Age
					     << setw(20) << PhoneNo << setw(20) << Day << setw(20) << Time << endl;
				}
			} else {
				cout << "File failed to open.\n";
			}
		}
		void Appointment_update() {
			string fir_name, last_name, age, phone_number, day, time;
			int option;
			bool found = false;
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("Appointment.txt");
			ofstream outFile("temp.txt");

			if (!inFile.is_open() || !outFile.is_open()) {
				cout << "Error: Could not open the file." << endl;
				return;
			}
			while (inFile >> fir_name >> last_name >> age >> phone_number >> day >> time) {
				if (fir_name == s) {
					found = true;
					cout << "Updating details of Appointment of patient " << fir_name << endl;
					clearScreen();
					do {
						cout << endl
						     << endl;
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, 14);
						cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
						cout << "\t\t\t\t\t\t\t\t | Select one option from menu |" << endl;
						cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
						SetConsoleTextAttribute(hConsole, 15);
						cout << "Enter the number of the detail you want to update:\n";
						cout << "1. Update first name " << endl;
						cout << "2. Update last name " << endl;
						cout << "3. Update age " << endl;
						cout << "4. Update phone number " << endl;
						cout << "5. Update week of the day " << endl;
						cout << "6. Update time " << endl;
						cout << "7. FOR EXITING " << endl;
						cin >> option;

						switch (option) {
							case 1:
								cout << "Enter first name: ";
								cin >> fir_name;
								break;
							case 2:
								cout << "Enter last name: ";
								cin >> last_name;
								break;
							case 3:
								cout << "Enter age: ";
								cin >> age;
								break;
							case 4:
								cout << "Enter phone no: ";
								cin >> phone_number;
								break;
							case 5:
								cout << "Enter day: ";
								cin >> day;
								break;
							case 6:
								cout << "Enter time: ";
								cin >> time;
								break;
							case 7:
								cout << "You are exiting....  ";
								break;
							default:
								cout << "Invalid option selected." << endl;
						}
					} while (option != 7);
				}
				outFile << fir_name << setw(20) << last_name << setw(20)
				        << age << setw(20) << setw(20)
				        << phone_number << setw(20) << day << endl
				        << time << endl;
			}
			if (!found) {
				cout << "Not updating data from the file." << endl;
			}
			inFile.close();
			outFile.close();
			remove("Appointment.txt");
			rename("temp.txt", "Appointment.txt");
		}
		void removeAppointmentData() {
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("Appointment.txt");
			ofstream outFile("temp.txt");

			bool found = false;
			while (inFile >> FirstName >> lastName >> Age >> PhoneNo >> Day >> Time) {
				if (FirstName == s) {
					found = true;
				} else {
					outFile << FirstName << setw(20) << lastName << setw(20)
					        << Age << setw(20)
					        << PhoneNo << setw(20)
					        << Day << endl
					        << Time << endl;
				}
			}

			inFile.close();
			outFile.close();
			if (found) {
				remove("Appointment.txt");
				rename("temp.txt", "Appointment.txt");
				cout << "Patient Appointment details deleted successfully." << endl;
			} else {
				cout << "Patient Name not found." << endl;
				remove("temp.txt");
			}
		}
		void Info_about_all_patients() {
			fstream rec("PatientData.txt", ios::in);

			if (rec.is_open()) {
				cout << left << setw(20) << "First Name" << setw(20) << "Last Name"
				     << setw(20) << "Age" << setw(20)
				     << "Salary" << setw(20) << "Phone No" << setw(20) << "Diagnosis" << endl;

				while (rec >> FirstName >> lastName >> Age >> Salary >> PhoneNo >> Diagnosis) {
					cout << left << setw(20) << FirstName << setw(20)
					     << lastName << setw(20) << Age
					     << setw(20) << Salary << setw(20) << PhoneNo << setw(20) << Diagnosis << endl;
				}
				rec.close();
			} else {
				cout << "File failed to open.\n";
			}
		}
		int patient;
		void read_patient_file() {
			patient = 0;
			ifstream file;
			file.open("PatientData.txt");
			string age, fir_name, last_name, salary, phone_num, dia;
			if (file.is_open()) {
				while (!file.eof()) {
					fir_name = "";
					file >> fir_name >> last_name >> age >> salary >> phone_num >> dia;
					if (fir_name == "")
						break;
					Receptionist(fir_name, last_name, age, salary, phone_num, dia);
					patient++;
				}
			} else {
				cout << "FILE NAMED \"PatientData.txt\" NOT FOUND" << "\n\n";
				system("pause");
			}
			file.close();
		}
		void removePaitentData() {
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("PatientData.txt");
			ofstream outFile("temp.txt");

			bool found = false;
			while (inFile >> FirstName >> lastName >> Age >> Salary >> PhoneNo >> Diagnosis) {
				if (FirstName == s) {
					found = true;
				} else {
					outFile << FirstName << setw(20) << lastName << setw(20)
					        << Age << setw(20)
					        << Salary << setw(20)
					        << PhoneNo << endl
					        << Diagnosis << endl;
				}
			}

			inFile.close();
			outFile.close();
			if (found) {
				remove("PatientData.txt");
				rename("temp.txt", "PatientData.txt");
				cout << "Patient details deleted successfully." << endl;
			} else {
				cout << "Patient Name not found." << endl;
				remove("temp.txt");
			}
		}
		void Patient_update() {
			string fir_name, last_name, age, sal, phone_number, dia;
			int option;
			bool found = false;
			string s;
			cout << "Enter first name: ";
			cin >> s;
			ifstream inFile("PatientData.txt");
			ofstream outFile("temp.txt");

			if (!inFile.is_open() || !outFile.is_open()) {
				cout << "Error: Could not open the file." << endl;
				return;
			}
			while (inFile >> fir_name >> last_name >> age >> sal >> phone_number >> dia) {
				if (fir_name == s) {
					found = true;
					cout << "Updating details for Patient " << fir_name << endl;
					clearScreen();
					do {
						cout << endl
						     << endl;
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, 14);
						cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
						cout << "\t\t\t\t\t\t\t\t | Select one option from menu |" << endl;
						cout << "\t\t\t\t\t\t\t\t -------------------------------" << endl;
						SetConsoleTextAttribute(hConsole, 15);
						cout << "Enter the number of the detail you want to update:\n";
						cout << "1. Update first name " << endl;
						cout << "2. Update last name " << endl;
						cout << "3. Update age " << endl;
						cout << "4. Update Salary " << endl;
						cout << "5. Update phone number " << endl;
						cout << "6. Update diagnosis detail " << endl;
						cout << "7. FOR EXITING " << endl;
						cin >> option;

						switch (option) {
							case 1:
								cout << "Enter first name: ";
								cin >> fir_name;
								break;
							case 2:
								cout << "Enter last name: ";
								cin >> last_name;
								break;
							case 3:
								cout << "Enter age: ";
								cin >> age;
								break;
							case 4:
								cout << "Enter salary: ";
								cin >> sal;
								break;
							case 5:
								cout << "Enter phone no: ";
								cin >> phone_number;
								break;
							case 6:
								cout << "Enter diagnosis detail: ";
								cin >> dia;
								break;
							case 7:
								cout << "You are exiting : ";
								break;
							default:
								cout << "Invalid option selected." << endl;
						}
					} while (option != 8);
				}
				outFile << fir_name << setw(20) << last_name << setw(20)
				        << age << setw(20) << setw(20)
				        << sal << setw(20) << phone_number << endl
				        << dia << endl;
			}
			if (!found) {
				cout << "Not updating data from the file." << endl;
			}
			inFile.close();
			outFile.close();
			remove("PatientData.txt");
			rename("temp.txt", "PatientData.txt");
		}
};


void Info_about_all_reviews() {
	ifstream rec("Reviews.txt", ios::in);
	string st1, st2, st3, st4, st5, st6, st7, st8;
	if (rec.is_open()) {
		cout << "Reviews are as follows: " << endl;
		getline(rec, st1);
		getline(rec, st2);
		getline(rec, st3);
		getline(rec, st4);
		getline(rec, st5);
		getline(rec, st6);
		getline(rec, st7);
		getline(rec, st8);

		cout << "1) " << st1;
		cout << endl;
		cout << "2) " << st2;
		cout << endl;
		cout << "3) " << st3;
		cout << endl;
		cout << "4) " << st4;
		cout << endl;
		cout << "5) " << st5;
		cout << endl;
		cout << "6) " << st6;
		cout << endl;
		cout << "7) " << st7;
		cout << endl;
		cout << "8) " << st8;
		cout << endl;
		rec.close();
	} else {
		cout << "File failed to open.\n";
	}
}
void patientMenu() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << " -------------------------------" << endl;
	cout << " | Select one option from menu |" << endl;
	cout << " -------------------------------" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl;
	cout << "\t 1. View Appointments" << endl;
	cout << "\t 2. View Prescriptions" << endl;
	cout << "\t 3. View Reports" << endl;
	cout << "\t 4. View Lab Test results" << endl;
	cout << "\t 5. View Doctor Fees" << endl;
	cout << "\t 6. Bill Payments" << endl;
	cout << "\t 7. Give Review" << endl;
	cout << "\t 8. Exit" << endl;
	cout << endl;
}
void viewReview() {
	cout << endl;
	for (int i = 0; i < reviewCount; i++) {
		cout << i + 1 << "  " << reviews[i] << endl;
		cout << endl;
	}
	cout << endl;
}

void patientHeader() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "\t\t\t        ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	cout << "\t\t\t        ~    PATIENT    ~" << endl;
	cout << "\t\t\t        ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl;
}
void Prescription() {
	string s, st1,st2,st3,st4,st5,st6,st7, pres;
	cout << "Enter first name: ";
	cin >> s;
	ifstream inFile("PatientData.txt");

	inFile>>st1;
	getline(inFile, st1);
	inFile>>st2;
	getline(inFile, st2);
	inFile>>st3;
	getline(inFile, st3);
	inFile>>st4;
	getline(inFile, st4);
	inFile>>st5;
	getline(inFile, st5);
	inFile>>st6;
	getline(inFile, st6);
	inFile>>st7;
	getline(inFile, st7);

	if(s!=st1 && s!=st2 && s!=st3 && s!=st4 && s!=st5 && s!=st6 && s!=st7) {
		cout<<"Patient name not found"<<endl;
	} else {

		ofstream write("Prescription.txt");
		cout<<"Enter the prescription of "<<s<<" : ";
		write<<pres;
	}
}
void view_prescription() {
	string s, st1, st2, st3, st4, st5, st6, st7, st8;
	string st01, st02, st03, st04, st05, st06, st07, st08;
	cout << "Enter first name: ";
	cin >> s;
	ifstream inFile("PatientData.txt");

	inFile>>st1;
	getline(inFile, st1);
	inFile>>st2;
	getline(inFile, st2);
	inFile>>st3;
	getline(inFile, st3);
	inFile>>st4;
	getline(inFile, st4);
	inFile>>st5;
	getline(inFile, st5);
	inFile>>st6;
	getline(inFile, st6);
	inFile>>st7;
	getline(inFile, st7);
	if(s!=st1 && s!=st2 && s!=st3 && s!=st4 && s!=st5 && s!=st6 && s!=st7 && s!="Danish") {
		cout<<"Patient name not found"<<endl;
	} else {
		ifstream rec("Prescription.txt", ios::in);
		getline(rec, st01);
		getline(rec, st02);
		getline(rec, st03);
		getline(rec, st04);
		getline(rec, st05);
		getline(rec, st06);
		getline(rec, st07);
		getline(rec, st08);
		if(s==st1) {
			cout<<st01;
		} else if(s==st2) {
			cout<<st02;
		} else if(s==st3) {
			cout<<st03;
		} else if(s==st4) {
			cout<<st04;
		} else if(s==st5) {
			cout<<st05;
		} else if(s==st6) {
			cout<<st06;
		} else if(s==st7) {
			cout<<st07;
		}
	}



}

void viewLabResults() {
	srand(time(0));

	// Array of possible test names
	const int numTests = 5;
	string testNames[numTests] = {"Covid-19", "Flu", "Blood Sugar", "Cholesterol", "Liver Function"};

	// Display the list of tests
	cout << "Available tests:" << endl;
	for (int i = 0; i < numTests; ++i) {
		cout << i + 1 << ". " << testNames[i] << endl;
	}
	int testChoice;
	cout << "Enter the number of the test taken: ";
	cin >> testChoice;

	if (testChoice < 1 || testChoice > numTests) {
		cout << "Invalid choice." << endl;
		return;
	}

	string testName = testNames[testChoice - 1];

	int redBloodCells = rand() % 500 + 300;
	int whiteBloodCells = rand() % 300 + 100;
	int platelets = rand() % 300 + 150;
	double rbcTrillion = (rand() % 200 + 300) / 100.0;
	double hb = (rand() % 50 + 100) / 10.0;
	double wbcBillion = (rand() % 100 + 50) / 10.0;
	int lymphs = rand() % 20 + 60;
	double hemoglobin = (rand() % 40 + 100) / 10.0;
	double eos = (rand() % 10) / 10.0;

	string id;
	cout << "Enter Patient ID: ";
	cin >> id;
	cout << endl;
	cout << "Test Taken: " << testName << endl;
	cout << "Red Blood Cells: " << redBloodCells << endl;
	cout << "White Blood Cells: " << whiteBloodCells << endl;
	cout << "Platelets (billion/L): " << platelets << endl;
	cout << "RBC's (trillion/L): " << rbcTrillion << endl;
	cout << "HB (g/dL): " << hb << endl;
	cout << "WBC's (billion/L): " << wbcBillion << endl;
	cout << "Lymphs: " << lymphs << endl;
	cout << "Hemoglobin: " << hemoglobin << endl;
	cout << "EOS: " << eos << endl;
}
void viewDoctorFees() {
	cout << "  Doctor Checkup Fees: " << checkupFees;
	cout << endl;
}
void billPayments() {
	cout << "Enter Patient Id: ";
	cin >> paymentId[paymentCount];
	cout << "Doctor Checkup Fees: " << checkupFees << endl;
	cout << labTestFees;
	payments[paymentCount] = checkupFees + labTestFees;
	cout << "Payable Amount: " << payments[paymentCount];
	cout << endl;
	paymentCount++;
}
void giveReviews() {
	cout << "Please give your Review: ";
	cin.ignore();
	getline(cin, reviews[reviewCount]);
	reviewCount++;
}

int menu() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "\t---------------------" << endl;
	cout << "\t|     Main Menu     |" << endl;
	cout << "\t---------------------" << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << " -------------------------------" << endl;
	cout << " | Select one option from menu |" << endl;
	cout << " -------------------------------" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\t1. Admin" << endl;
	cout << "\t2. Doctor" << endl;
	cout << "\t3. Receptionist" << endl;
	cout << "\t4. Patient     " << endl;
	cout << "\t5. About Hospital" << endl;
	cout << "\t6. Exit" << endl;
	cout << endl;
	cout << "Your option_";
	cin >> option;
	return option;
}
void enableVirtualTerminalProcessing() {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut == INVALID_HANDLE_VALUE) {
		std::cerr << "Error: Unable to get standard output handle." << std::endl;
		return;
	}

	DWORD dwMode = 0;
	if (!GetConsoleMode(hOut, &dwMode)) {
		std::cerr << "Error: Unable to get console mode." << std::endl;
		return;
	}

	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	if (!SetConsoleMode(hOut, dwMode)) {
		std::cerr << "Error: Unable to set console mode." << std::endl;
	}
}
void printHeader() {
	cout << endl
	     << endl;
	cout << " \033[47m\033[95m _    _                 _ _        _   __  __                                                   _      _____           _                                      \033[0m    " << endl;
	cout << " \033[47m\033[95m| |  | |               (_) |      | | |  \\/  |                                                 | |    / ____|         | |                                    \033[0m    " << endl;
	cout << " \033[47m\033[95m| |__| | ___  ___ _ __  _| |_ __ _| | | \\  / | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  | (___  _   _ ___| |_ ___  _ __ ___                     \033[0m    " << endl;
	cout << " \033[47m\033[95m|  __  |/ _ \\/\\__| '_ \\| | __/ _` | | | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __|  \\___ \\| | | / __| __/ _ \\\\ '_ ` _ \\       \033[0m    " << endl;
	cout << " \033[47m\033[95m| |  | | (_) \\__ \\ |_) | | || (_| | | | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_   ____) | |_| \\__ \\ ||  __/ | | | | |                 \033[0m    " << endl;
	cout << " \033[47m\033[95m|_|  |_|\\___/|___/ .__/|_|\\__\\__,_|_| |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__| |_____/ \\__, |___/\\__\\___|_| |_| |_|         \033[0m    " << endl;
	cout << " \033[47m\033[95m                 | |                                             __/ |                                        __/ |                                           \033[0m    " << endl;
	cout << " \033[47m\033[95m                 |_|                                            |___/                                        |___/                                            \033[0m    " << endl;
	cout << endl
	     << endl;
}

int main() {
	Doctor d;
	Receptionist r;
	Patient p;

	enableVirtualTerminalProcessing();
	printHeader();
	clearScreen();
	header();
	//    hms();

	do {
		menu();
		if (option == 1) {
			header();
			adminLogin();

			do {
				header();
				AdminMenu();
				cout << "\t\t\t\t\t\t\t\t";
				cin >> choice2;
				clearScreen();

				switch (choice2) {
					case 1: {
						string f_n, l_n, age, special, w_t, sal, ph_num;
						system("cls");
						header();
						cout << "  ENTER DOCTOR FIRST NAME: ";
						cin >> f_n;
						cout << "  ENTER DOCTOR LAST NAME: ";
						cin >> l_n;
						cout << "  ENTER DOCTOR AGE: ";
						cin >> age;
						cout << "  ENTER DOCTOR SPECIALIZATION: ";
						cin >> special;
						cout << "  ENTER DOCTOR SALARY: ";
						cin >> sal;
						cout << "  ENTER DOCTOR WORK TIME: ";
						cin >> w_t;
						cout << "  ENTER DOCTOR PHONE NUMBER: ";
						cin >> ph_num;
						d.Add_Doctor(f_n, l_n, age, special, w_t, sal, ph_num);
						cout << "\n\n DOCTOR WAS SUCCESSFULLY ADDED! ";
						clearScreen();
						break;
					}

					case 2: {

						system("cls");
						header();
						d.removeDoctorData();
						clearScreen();
						break;
					}

					case 3: {

						string f_n, l_n, age, w_t, sal, ph_num;
						system("cls");
						header();
						cout << "  ENTER RECEPTIONIST FIRST NAME: ";
						cin >> f_n;
						cout << "  ENTER RECEPTIONIST LAST NAME: ";
						cin >> l_n;
						cout << "  ENTER RECEPTIONIST AGE: ";
						cin >> age;
						cout << "  ENTER RECEPTIONIST SALARY: ";
						cin >> sal;
						cout << "  ENTER RECEPTIONIST WORK TIME: ";
						cin >> w_t;
						cout << "  ENTER RECEPTIONIST PHONE NUMBER: ";
						cin >> ph_num;
						r.Add_Rec(f_n, l_n, age, w_t, sal, ph_num);
						cout << "\n\n RECEPTIONIST WAS SUCCESSFULLY ADDED! ";
						clearScreen();
						break;
					}

					case 4: {
						system("cls");
						header();
						r.removeRecptData();
						clearScreen();
						break;
					}

					case 5: {
						system("cls");
						header();
						cout << endl
						     << endl
						     << endl
						     << endl
						     << endl;
						d.Info_about_all_doc();
						clearScreen();
						break;
					}

					case 6: {

						system("cls");
						header();
						d.Doctor_update();
						clearScreen();
						break;
					}

					case 7: {
						system("cls");
						header();
						cout << endl
						     << endl
						     << endl
						     << endl
						     << endl;
						r.Info_about_all_recpt();
						clearScreen();
						break;
					}

					case 8: {
						system("cls");
						header();
						r.Receptionist_update();
						clearScreen();
						break;
					}

					case 9: {
						header();
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n"
						     << endl;
						cout << "Loading.........." << endl;
						clearScreen();
						break;
					}
					default: {
						clearScreen();
						break;
					}
				}
			} while (choice2 != 9);
		} else if (option == 2) {
			header();
			DoctorLogin();
			clearScreen();

			do {
				header();
				DoctorMenu();
				cin >> choice2;
				switch (choice2) {
					case 1: {
						header();
						Prescription();
						break;
					}

					case 2: {
						string f_n, l_n, age, ph_num, day, time;
						system("cls");
						header();
						cout << "  ENTER PATIENT FIRST NAME: ";
						cin >> f_n;
						cout << "  ENTER PATIENT LAST NAME: ";
						cin >> l_n;
						cout << "  ENTER PATIENT AGE: ";
						cin >> age;
						cout << "  ENTER PATIENT PHONE NO: ";
						cin >> ph_num;
						cout << "  ENTER DAY FOR APPOINTMENT: ";
						cin >> day;
						cout << "ENTER TIME OF APPOINTMENT: ";
						cin>>time;
						p.Appointment(f_n,l_n,age,ph_num,day,time);
						cout << "Appointment of Patient was successfully added" << endl;
						clearScreen();
						break;
					}

					case 3: {
						header();
						p.Info_about_all_appointments();
						clearScreen();
						break;
					}

					case 4: {
						header();
						p.Appointment_update();
						clearScreen();
						break;
					}
					case 5: {
						header();
						p.removeAppointmentData();
						clearScreen();
						break;
					}

					case 6: {
						header();
						Info_about_all_reviews();
						clearScreen();
						break;
					}

					case 7: {
						break;
					}

					default: {
						header();
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
						     << endl;
						cout << "Invlid Choice" << endl;
						clearScreen();
					}
				}

			} while (choice2 != 7);
		} else if (option == 3) {
			clearScreen();
			header();
			ReceptLogin();
			do {
				header();
				RecepMenu();
				cin >> choice2;
				switch (choice2) {
					case 1: {
						string f_n, l_n, age, sal, diag, ph_num;
						system("cls");
						header();
						cout << "  ENTER PATIENT FIRST NAME: ";
						cin >> f_n;
						cout << "  ENTER PATIENT LAST NAME: ";
						cin >> l_n;
						cout << "  ENTER PATIENT AGE: ";
						cin >> age;
						cout << "  ENTER PATIENT SALARY: ";
						cin >> sal;
						cout << "  ENTER PATIENT DIAGNOSIS: ";
						cin >> diag;
						cout << "  ENTER PATIENT PHONE NUMBER: ";
						cin >> ph_num;
						p.Add_Patient(f_n, l_n, age, sal, ph_num, diag);
						cout << "Patient was successfully added" << endl;
						clearScreen();
						break;
					}

					case 2: {
						clearScreen();
						header();
						p.Info_about_all_patients();
						clearScreen();
						break;
					}

					case 3: {
						header();
						p.removePaitentData();
						clearScreen();
						break;
					}

					case 4: {
						header();
						p.Patient_update();
						clearScreen();
						break;
					}

					case 5: {
						clearScreen();
						header();
						string f_n,room_no;
						char Ac, tv, otherService;
						double totalBill;

						cout << "Enter first name: ";
						cin>>f_n;

						r.allotRoom();

						// Get room number
						cout << "Enter room number: ";
						cin >> room_no;

						// Calculate the total bill based on services availed
						totalBill += r.bedroomCharge;

						cout << "Did the patient use AC? (y/n): ";
						cin >> Ac;
						if (Ac == 'y' || Ac == 'Y') {
							totalBill += AC_CHARGE;
						}

						cout << "Did the patient use TV? (y/n): ";
						cin >> tv;
						if (tv == 'y' || tv == 'Y') {
							totalBill += TV_CHARGE;
						}

						cout << "Did the patient use any other service? (y/n): ";
						cin >> otherService;
						if (otherService == 'y' || otherService == 'Y') {
							totalBill += OTHER_SERVICE_CHARGE;
						}
						// Get the current system time
						time_t now = time(0);
						char *dt = ctime(&now);
						cout<<"Total bill is: "<<totalBill<<endl;
						cout << "Date and Time: " << dt;
						cout << fixed << setprecision(2);
						p.Generate_bill(f_n,room_no,totalBill, Ac, tv, otherService);
						clearScreen();

						break;

					}
					case 6: {
						clearScreen();
						header();
						p.Info_about_all_bills();
						clearScreen();
						break;
					}
					case 7: {
						clearScreen();
						break;
					}

					default: {
						printHeader();
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
						     << endl;
						cout << "\t\t\t\t\t\tInvlid Choice" << endl;
						clearScreen();
					}
				}
			} while (choice2 != 7);
		} else if (option == 4) {
			do {
				clearScreen();
				header();
				patientMenu();
				cout << "Your option_";
				cin >> choice2;
				clearScreen();
				switch (choice2) {
					case 1: {
						header();
//						viewAppointments();
						clearScreen();
						break;
					}

					case 2: {
						header();
						view_prescription();
						clearScreen();
						break;
					}

					case 3: {
						header();
//						viewReports();
						clearScreen();
						break;
					}
					case 4: {
						header();
						viewLabResults();
						clearScreen();
						break;
					}
					case 5: {
						header();
						viewDoctorFees();
						clearScreen();
						break;
					}
					case 6: {
						header();
						billPayments();
						clearScreen();
						break;
					}

					case 7: {
						header();
						giveReviews();
						clearScreen();
						break;
					}
					case 8: {
						break;
						clearScreen();
					}
					default: {
						header();
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
						     << endl;
						cout << "\t\t\t\t\t\tInvlid Choice" << endl;
						clearScreen();
					}
				}
			} while (choice2 != 8);
		} else if (option == 5) {
			clearScreen();
			header();
			cout << " This Hospital is made by : \n"
			     << "\t --> DANISH BUTT" << endl
			     << "\t --> MUHAMMAD ALI" << endl
			     << "\t --> MUHAMMAD HASSAN\n"
			     << endl
			     << "	THIS HOSPITAL PROVIDES WORLD-CLASS CARE FOR ITS PATIENTS.\n"
			     << "	KNOWN for its Doctor,Nurse and World-Class infrastructure.";
			cout << endl
			     << endl
			     << endl;
			clearScreen();
		} else if (option == 6) {
			cout<<endl<<endl;
			cout<<"Exiting the program"<<endl<<endl;
			system("pause");
		} else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
			     << endl;
			header();
			cout << "\t\t\t\t\t\tInvlid Choice" << endl;
		}

	} while (option != 6);
	return 0;
}

