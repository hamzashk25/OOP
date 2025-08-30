// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;
// class MedicalRecord
// {
// private:
//     string disease;
//     string treatment;
//     string doctor;

// public:
//     MedicalRecord()
//     {
//         disease = " ";
//         treatment = " ";
//         doctor = " ";
//     }

//     MedicalRecord(string disease, string treatment, string doctor)
//     {
//         this->disease = disease;
//         this->treatment = treatment;
//         this->doctor = doctor;
//     }

//     void Set_Record(string disease, string treatment, string doctor)
//     {
//         this->disease = disease;
//         this->treatment = treatment;
//         this->doctor = doctor;
//     }

//     void Dispaly()
//     {
//         cout << disease << " " << treatment << " " << doctor << endl;
//     }
//     void updateRecord(string disease, string treatment, string doctor)
//     {
//         this->disease = disease;
//         this->treatment = treatment;
//         this->doctor = doctor;
//     }
// };

// class Patient
// {
// private:
//     MedicalRecord *MDR;
//     string Name;
//     static int id;
//     int Patientid;

// public:
//     Patient(string Name, MedicalRecord *MDR)
//     {
//         this->Name = Name;
//         this->MDR = MDR;
//         id++;
//         Patientid = id;
//     }

//     void Display()
//     {
//         cout << Patientid << " " << Name << endl;
//         MDR->Dispaly();
//     }

//     void UpdateRecord(string disease, string treatment, string doctor)
//     {
//         MDR->updateRecord(disease, treatment, doctor);
//     }
// };

// int Patient::id = 0;
// int main()
// {

//     MedicalRecord M1;
//     M1.Set_Record("jhondas", "abc", "DR.Umer");

//     MedicalRecord M2;
//     M2.Set_Record("Hyperthesia", "Xyz", "Dr.Hassan");

//     Patient P1("Usama", &M1);
//     P1.Display();

//     P1.UpdateRecord("Hyperthesia", "Xyz", "Dr.Hassan");
//     P1.Display();

//     return 0;
// }