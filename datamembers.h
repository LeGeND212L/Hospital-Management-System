#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
//---------------Validity Checker---------------//
bool validityChecker();
bool contactValidation();
//--------------Data Structures ( Arrays , Variables )-------------//
const int MAX_RECORDS = 100;
int doctorCount = 0;
int option, choice2;
const int MAX_PATIENTS = 100;
const double PREMIUM_BEDROOM_CHARGE = 2000.00;
const double GENERAL_BEDROOM_CHARGE = 1000.00;
const double AC_CHARGE = 500.00;
const double TV_CHARGE = 200.00;
const double OTHER_SERVICE_CHARGE = 300.00;
vector<string> patientNames;
vector<int> patientNumbers;
vector<int> roomNumbers;
vector<int> invoiceNumbers;
vector<double> totalBills;
vector<string> bedroomTypes;
vector<double> bedroomCharges;
string doctorId[MAX_RECORDS];
string doctorPassword[MAX_RECORDS];
string doctorNames[MAX_RECORDS];
int doctorAges[MAX_RECORDS];
string doctorAddress[MAX_RECORDS];
string doctorQualification[MAX_RECORDS];
int doctorSalary[MAX_RECORDS];
string doctorContact[MAX_RECORDS];

int patientCount = 0;
int prescriptionCount = 0;
int appointmentCount = 0;
int reportsCount = 0;
int checkupFees;
int labTestFees;
int paymentCount = 0;
int reviewCount = 0;

string patientId[MAX_RECORDS];
string patientName[MAX_RECORDS];
int patientAge[MAX_RECORDS];
string patientDisease[MAX_RECORDS];
string patientMedicine[MAX_RECORDS];
string patientAddress[MAX_RECORDS];
string patientContact[MAX_RECORDS];

string prescriptionId[MAX_RECORDS];
string addPrescription[MAX_RECORDS];

string appointmentId[MAX_RECORDS];
string appointmentDay[MAX_RECORDS];
string appointmentTime[MAX_RECORDS];

string reportsId[MAX_RECORDS];
string test[MAX_RECORDS];
string result[MAX_RECORDS];

string paymentId[MAX_RECORDS];
int payments[MAX_RECORDS];

string reviews[MAX_RECORDS];

string instructionManual[6];
//--------------Validity Checker------------//
string num;

