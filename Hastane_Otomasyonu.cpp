/**
 * @Date:   2022-01-10T21:22:15+03:00
 * @Last modified time: 2022-01-12T11:28:07+03:00
 */
 /**
  * @Date:   2022-01-10T17:27:42+03:00
 * @Last modified time: 2022-01-12T11:28:07+03:00
  */

  // Add system wait while getting patient information with 3 dots ...
  // Add hour system in the panels...
  // Eczane Bolumu
  #include <iostream>
  #include <Windows.h>
  #include <unistd.h>
  #include <fstream>
  #include <string.h>
  #include <string>
  #include <stdlib.h>
  using namespace std;


 class Patient
 {
 public:
   ofstream file;
   string p_name, p_surname, p_ssn, p_tlf, p_age, hour, date, department, line, insurance_str;
   bool insurance, doc_prescription;
   int insurance_process, hospital_fees, p_fee, hour_number, date_number, department_number;
   char doc_pres[200];

   Patient()
   {
     doc_prescription == false;
     insurance = true;
   }
   void take_patient_information_english()
   {
     system("cls");
     cout << char(201);      for(int i=0; i<36; i++){cout << char(205);}      cout << char(187) << endl;
 cout << char(186) << "                                    " << char(186) << endl;
 cout << char(186) << "                                    " << char(186) << endl;
 cout << char(186) << "    Loading Patient's Information   " << char(186) << endl;
 cout << char(186) << "                                    " << char(186) << endl;
 cout << char(186) << "                                    " << char(186) << endl;
 cout << char(200);      for(int i=0; i<36; i++){cout << char(205);}      cout << char(188) << endl;
              cout << "              .";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << "." << endl;
              sleep(1);
              cout << endl << endl;

              cout << "Patient's Name: " << p_name << endl;
              cout << "Patient's Surname: " << p_surname << endl;
              cout << "Patient's SSN: " << p_ssn << endl;
              cout << "Patient's Phone Number: " << p_tlf << endl;
              cout << "Patient's Age: " << p_age << endl;
              cout << "Examination Department: " << department << endl;
              cout << "Appointment Date and Time: " << date << " - " << hour << endl;
              cout << "Insurance Status: " << insurance_str << endl;
              cout << "Doctor's Prescription: ";
              if(doc_prescription == false)
              {

                cout << "No Prescription Yet." << endl;

              }
              else
              {
                cout << doc_pres << endl;
              }
              cout << endl;
              cout << char(201);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(187) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(186) << "        Loading Main Menu        " << char(186) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(200);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(188) << endl;
                       cout << "              .";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << "." << endl;
                       sleep(1);



   }
   void take_patient_information_turkish()
   {
     system("cls");
     cout << char(201);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(187) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(186) << "    Hasta Bilgileri Yukleniyor   " << char(186) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(200);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(188) << endl;
              cout << "              .";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << "." << endl;
              sleep(1);
              cout << endl << endl;

              cout << "Hasta'nin ismi: " << p_name << endl;
              cout << "Hasta'nin soyismi: " << p_surname << endl;
              cout << "Hasta'nin TC'si: " << p_ssn << endl;
              cout << "Hasta'nin Telefon Numarasi: " << p_tlf << endl;
              cout << "Hasta'nin Yasi: " << p_age << endl;
              cout << "Muayene Bolumu: " << department << endl;
              cout << "Muayene Tarihi ve Saati: " << date << " - " << hour << endl;
              cout << "Sigorta Durumu: " << insurance_str << endl;
              cout << "Doktor Recetesi: ";
              if(doc_prescription == false)
              {
                cout << "Recete Yazilmamistir" << endl;

              }
              else
              {
                cout << doc_pres << endl;
              }
              cout << endl;
          cout << char(201);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(187) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(186) << "    Menuye Yonlendiriliyorsunuz  " << char(186) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(186) << "                                 " << char(186) << endl;
          cout << char(200);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(188) << endl;
                       cout << "              .";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << ".";
                       sleep(1);
                       cout << "." << endl;
                       sleep(1);


   }

   void take_patient_appointment_turkish()
   {
     system("cls");
     cout << char(201);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(187) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(186) << "  Hasta Kaydi Paneli Yukleniyor  " << char(186) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(186) << "                                 " << char(186) << endl;
 cout << char(200);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(188) << endl;
              cout << "              .";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << "." << endl;
              sleep(1);


     file.open("patients_information.txt", ios_base::app);
     file << endl << "<<<<<<<<< Patient Record >>>>>>>>" << endl;

     cout << "Ad: ";
     cin >> p_name;
     file << "Ad: " << p_name << endl;
     cout << "Soyad: ";
     cin >> p_surname;
     file << "Soyad: " << p_surname << endl;
     cout << "TC Numarasi: ";
     cin >> p_ssn;
     file << "TC Numarasi: " << p_ssn << endl;
     cout << "Anabilim dali(1/2/3): " << endl;
     cout << "1.Gogus Hastaliklari" << endl;
     cout << "2.Cildiye Hastaliklari" << endl;
     cout << "3.Enfeksiyon Hastaliklari" << endl;
     cin >> department_number;
     if(department_number == 1)
     department = "Gogus Hastaliklari";
     else if(department_number == 2)
     department = "Cildiye Hastaliklari";
     else
     department = "Enfeksiyon Hastaliklari";
     file << "Muayene bolumu: " << department << endl;
     cout << "Sigorta(1/2): " << endl;
     cout << "1.Var" << endl;
     cout << "2.Yok" << endl;
     cin >> insurance_process;
     if(insurance_process == 1)
     {
       insurance = true;
       insurance_str = "Var";
       file << "Sigortasi var, ucret alinmadi." << endl;
     }
     else
     {
       insurance = false;
       if(department_number == 1)
       {
         cout << "Gogus Hastaliklari Muayenesi ucreti: 200TL(1/2): " << endl;
         cout << "1.Ucret Odendi" << endl;
         cout << "2.Ucret Odenmedi" << endl;
         cin >> hospital_fees;
         p_fee = 200;
       }
       else if(department_number == 2)
       {
         cout << "Cildiye Hastaliklari Muayenesi ucreti: 150TL(1/2): " << endl;
         cout << "1.Ucret Odendi" << endl;
         cout << "2.Ucret Odenmedi" << endl;
         cin >> hospital_fees;
         p_fee = 150;
       }
       else
       {
         cout << "Enfeksiyon Hastaliklari Muayenesi ucreti: 120TL(1/2): " << endl;
         cout << "1.Ucret Odendi" << endl;
         cout << "2.Ucret Odenmedi" << endl;
         cin >> hospital_fees;
         p_fee = 120;
       }
       while(hospital_fees != 1)
       {
         if(department_number == 1)
         {
           cout << "Gogus Hastaliklari Muayenesi ucreti: 200TL(1/2): " << endl;
           cout << "1.Ucret Odendi" << endl;
           cout << "2.Ucret Odenmedi" << endl;
           cin >> hospital_fees;
           p_fee = 200;
         }
         else if(department_number == 2)
         {
           cout << "Cildiye Hastaliklari Muayenesi ucreti: 150TL(1/2): " << endl;
           cout << "1.Ucret Odendi" << endl;
           cout << "2.Ucret Odenmedi" << endl;
           cin >> hospital_fees;
           p_fee = 150;
         }
         else
         {
           cout << "Enfeksiyon Hastaliklari Muayenesi ucreti: 120TL(1/2): " << endl;
           cout << "1.Ucret Odendi" << endl;
           cout << "2.Ucret Odenmedi" << endl;
           cin >> hospital_fees;
           p_fee = 120;
         }

       }
       cout << "Odenen ucret: " << p_fee << endl;
       file << "Muayane Ucreti: " << p_fee << endl;

     }
     cout << "Yas: ";
     cin >> p_age;
     file << "Yas: " << p_age << endl;
     cout << "Randevu tarihi(1/2/3): " << endl;
     cout << "1. 2/02/2022" << endl;
     cout << "2. 2/13/2022" << endl;
     cout << "3. 2/21/2022" << endl;
     cin >> date_number;
     if(date_number == 1)
     date = "2/02/2022";
     else if(date_number == 2)
     date = "2/13/2022";
     else
     date = "2/21/2022";

     file << "Randevu tarihi: " << date << endl;

     cout << date << " Tarihindeki Uygun Saatler(1/2/3): " << endl;
     cout << "1. 09:00" << endl;
     cout << "2. 13:30" << endl;
     cout << "3. 15:40" << endl;
     cin >> hour_number;
     if(hour_number == 1)
     hour = "09:00";
     else if(hour_number == 2)
     hour = "13:30";
     else
     hour = "15:40";

     file << "Randevu saati: " << hour << endl;

   }
   void take_patient_appointment_english()
   {
     system("cls");
     cout << char(201);      for(int i=0; i<38; i++){cout << char(205);}      cout << char(187) << endl;
 cout << char(186) << "                                      " << char(186) << endl;
 cout << char(186) << "                                      " << char(186) << endl;
 cout << char(186) << "  Patient Registration Panel Loading  " << char(186) << endl;
 cout << char(186) << "                                      " << char(186) << endl;
 cout << char(186) << "                                      " << char(186) << endl;
 cout << char(200);      for(int i=0; i<38; i++){cout << char(205);}      cout << char(188) << endl;
              cout << "              .";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << ".";
              sleep(1);
              cout << "." << endl;
              sleep(1);


     file.open("patients_information.txt", ios_base::app);
     file << endl << "<<<<<<<<< Patient Record >>>>>>>>" << endl;

     cout << "Name: ";
     cin >> p_name;
     file << "Surname: " << p_name << endl;
     cout << "Surname: ";
     cin >> p_surname;
     file << "Surname: " << p_surname << endl;
     cout << "SSN: ";
     cin >> p_ssn;
     file << "SSN: " << p_ssn << endl;
     cout << "Inspection Section(1/2/3): " << endl;
     cout << "1.Chest Diseases" << endl;
     cout << "2.Dermatological Diseases" << endl;
     cout << "3.Infectious Diseases" << endl;
     cin >> department_number;
     if(department_number == 1)
     department = "Chest Diseases";
     else if(department_number == 2)
     department = "Dermatological Diseases";
     else
     department = "Infectious Diseases";
     file << "Inspection Section: " << department << endl;
     cout << "1.Patient Has Insurance" << endl;
     cout << "2.Patient Doesn't Have Insurance" << endl;
     cin >> insurance_process;
     if(insurance_process == 1)
     {
       insurance = true;
       insurance_str = "Has Insurance";
       file << "Patient Has Insurance" << endl;
     }
     else
     {
       insurance_str = "Doesn't have Insurance";
       insurance = false;
       if(department_number == 1)
       {
         cout << "Chest Diseases Examination Fee: 200$(1/2): " << endl;
         cout << "1.Patient Paid The Fee" << endl;
         cout << "2.Patient Did Not Pay The Fee" << endl;
         cin >> hospital_fees;
         p_fee = 200;
       }
       else if(department_number == 2)
       {
         cout << "Dermatology Examination Fee: 150$(1/2): " << endl;
         cout << "1.Patient Paid The Fee" << endl;
         cout << "2.Patient Did Not Pay The Fee" << endl;
         cin >> hospital_fees;
         p_fee = 150;
       }
       else
       {
         cout << "Infectious Diseases Examination Fee: 120$(1/2): " << endl;
         cout << "1.Patient Paid The Fee" << endl;
         cout << "2.Patient Did Not Pay The Fee" << endl;
         cin >> hospital_fees;
         p_fee = 120;
       }
       while(hospital_fees != 1)
       {
         if(department_number == 1)
         {
           cout << "Chest Diseases Examination Fee: 200$(1/2): " << endl;
           cout << "1.Patient Paid The Fee" << endl;
           cout << "2.Patient Did Not Pay The Fee" << endl;
           cin >> hospital_fees;
           p_fee = 200;
         }
         else if(department_number == 2)
         {
           cout << "Dermatology Examination Fee: 150$(1/2): " << endl;
           cout << "1.Patient Paid The Fee" << endl;
           cout << "2.Patient Did Not Pay The Fee" << endl;
           cin >> hospital_fees;
           p_fee = 150;
         }
         else
         {
           cout << "Infectious Diseases Examination Fee: 120$(1/2): " << endl;
           cout << "1.Patient Paid The Fee" << endl;
           cout << "2.Patient Did Not Pay The Fee" << endl;
           cin >> hospital_fees;
           p_fee = 120;
         }

       }
       cout << "Fee Paid: " << p_fee << endl;
       file << "Fee Paid: " << p_fee << endl;

     }
     cout << "Age: ";
     cin >> p_age;
     file << "Age: " << p_age << endl;
     cout << "Appointment Date(1/2/3): " << endl;
     cout << "1. 2/02/2022" << endl;
     cout << "2. 2/13/2022" << endl;
     cout << "3. 2/21/2022" << endl;
     cin >> date_number;
     if(date_number == 1)
     date = "2/02/2022";
     else if(date_number == 2)
     date = "2/13/2022";
     else
     date = "2/21/2022";

     file << "Appointment date: " << date << endl;

     cout << "Available hours(1/2/3): " << endl;
     cout << "1. 09:00" << endl;
     cout << "2. 13:30" << endl;
     cout << "3. 15:40" << endl;
     cin >> hour_number;
     if(hour_number == 1)
     hour = "09:00";
     else if(hour_number == 2)
     hour = "13:30";
     else
     hour = "15:40";

     file << "Appointment hour: " << hour << endl;
   }

 };
 Patient patient_objects[10];
 void all_patient_information_turkish()
 {
   system("cls");
   cout << char(201);      for(int i=0; i<42; i++){cout << char(205);}      cout << char(187) << endl;
   cout << char(186) << "                                          " << char(186) << endl;
   cout << char(186) << "                                          " << char(186) << endl;
   cout << char(186) << "       Dosyadan Bilgiler Okunuyor         " << char(186) << endl;
   cout << char(186) << "                                          " << char(186) << endl;
   cout << char(186) << "                                          " << char(186) << endl;
   cout << char(200);      for(int i=0; i<42; i++){cout << char(205);}      cout << char(188) << endl;
   cout << "                  .";
   sleep(1);
   cout << ".";
   sleep(1);
   cout << ".";
   sleep(1);
   cout << ".";
   sleep(1);
   cout << ".";
   sleep(1);

       string lines;
       ifstream my_file("patients_information.txt");

         while (getline(my_file,lines))
         {
           cout << lines << endl;
         }
         cout << endl;
 }
 void all_patient_information_english()
 {
   system("cls");
   cout << char(201);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(187) << endl;
   cout << char(186) << "                                 " << char(186) << endl;
   cout << char(186) << "                                 " << char(186) << endl;
   cout << char(186) << "       Reading From File         " << char(186) << endl;
   cout << char(186) << "                                 " << char(186) << endl;
   cout << char(186) << "                                 " << char(186) << endl;
   cout << char(200);      for(int i=0; i<33; i++){cout << char(205);}      cout << char(188) << endl;
   cout << "              .";
   sleep(1);
   cout << ".";
   sleep(1);
   cout << ".";
   sleep(1);
   cout << ".";
   sleep(1);
   cout << ".";
   sleep(1);

       string lines;
       ifstream my_file("patients_information.txt");

         while (getline(my_file,lines))
         {
           cout << lines << endl;
         }
         cout << endl;
 }

 void english_doktor_panel()
 {
   int number, patient_number, check, check2;
   string patient_ssn;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "                   Doctor's Panel                     " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                  Choose a Process:                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "              1.Write a Prescription                  " << char(186) << endl;
   cout << char(186) << "           2.Patient Information with SSN             " << char(186) << endl;
   cout << char(186) << "             3.All Patient's Information              " << char(186) << endl;
   cout << char(186) << "                4.Uninsured Patients                  " << char(186) << endl;
   cout << char(186) << "                5.Back to Main Menu                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> number;
   if(number == 1)
   {
     check = 0;
     cout << "Patient SSN: ";
     cin >> patient_ssn;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].p_ssn == patient_ssn)
       {
         check++;
         cout << "Recete: ";
         cin.ignore();
         cin.getline(patient_objects[i].doc_pres, 200);
         patient_objects[i].doc_prescription = true;
       }
     }
     if(check == 0)
     {
       system("cls");
       cout << endl << "         No Record Was Found For This SSN Number..." << endl;
     }
     else
     system("cls");
   }
   else if(number == 2)
   {
     check2 = 0;
     cout << "   Patient SSN: ";
     cin >> patient_ssn;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].p_ssn == patient_ssn)
       {
         patient_objects[i].take_patient_information_english();
         check2++;
       }
     }
     if(check2 == 0)
     {
       system("cls");
       cout << endl << "          No Record Was Found For This Patient..." << endl;
     }

   }
   else if(number == 3)
   {
     all_patient_information_english();
   }
   else if(number == 4)
   {
     system("cls");
     cout << char(201);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(187) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "     Uninsured Patients' Names     " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(200);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(188) << endl;
     cout << "              .";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << endl;
     int check = 0;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].insurance == false)
       {
         cout << patient_objects[i].p_name << " " << patient_objects[i].p_surname << " Has No Insurance." << endl;
         check++;
       }
     }
     if(check == 0)
     cout << endl << "No Uninsured Patient Was Found..." << endl;
   }



 }
 void english_assistant_panel()
 {
   int panel_secimi, patients_number, patient_number2;
   string patient_ssn;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "                  Assistant's Panel                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                  Choose a Process:                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "              1.Patient Registration                  " << char(186) << endl;
   cout << char(186) << "           2.Patient Information with SSN             " << char(186) << endl;
   cout << char(186) << "             3.All Patient's Information              " << char(186) << endl;
   cout << char(186) << "                4.Uninsured Patients                  " << char(186) << endl;
   cout << char(186) << "                5.Back to Main Menu                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> panel_secimi;
   if(panel_secimi == 1)
   {
     cout << "How many patients you want to register? ";
     cin >> patients_number;
     for(int i = 0; i < patients_number; i++)
     {
       patient_objects[i].take_patient_appointment_english();
     }
   }
   else if(panel_secimi == 2)
   {
     patient_number2 = 0;
     cout << "   Patient SSN: ";
     cin >> patient_ssn;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].p_ssn == patient_ssn)
       {
         patient_objects[i].take_patient_information_english();
         patient_number2++;
       }
     }
     if(patient_number2 == 0)
     {
       system("cls");
       cout << endl << "          No record found for this Patient..." << endl;
     }
     else
     system("cls");
   }
   else if(panel_secimi == 3)
   {
     all_patient_information_english();
   }
   else if(panel_secimi == 4)
   {
     system("cls");
     cout << char(201);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(187) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "     Uninsured Patients' Names     " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(200);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(188) << endl;
     cout << "              .";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << endl;
     int check = 0;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].insurance == false)
       {
         cout << patient_objects[i].p_name << " " << patient_objects[i].p_surname << " Has No Insurance." << endl;
         check++;
       }
     }
     if(check == 0)
     cout << endl << "No Uninsured Patient Was Found..." << endl;
   }
   else
   system("cls");


 }
 void turkish_doktor_panel()
 {
   int panel_secimi, hasta_sayisi, check;
   string hasta_tcsi;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "                    Doktor Paneli                     " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                    Islem Seciniz:                    " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                    1.Recete Yaz                      " << char(186) << endl;
   cout << char(186) << "                 2.Hasta Bilgisi Al                   " << char(186) << endl;
   cout << char(186) << "             3.Hasta Kayitlarini Goruntule            " << char(186) << endl;
   cout << char(186) << "                4.Sigortasiz Hastalar                 " << char(186) << endl;
   cout << char(186) << "                  5.Ana Menu'ye Don                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> panel_secimi;
   if(panel_secimi == 1)
   {
     check = 0;
     cout << "Hasta TC'si: ";
     cin >> hasta_tcsi;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].p_ssn == hasta_tcsi)
       {
         check++;
         cout << "Recete: ";
         cin.ignore();
         cin.getline(patient_objects[i].doc_pres, 200);
         patient_objects[i].doc_prescription = true;

       }
     }
     if(check == 0)
     {
       system("cls");
       cout << endl << "          Kayitli Hasta Bulunamadi..." << endl;
     }

   }
   if(panel_secimi == 2)
   {
     hasta_sayisi = 0;
     cout << "   Hasta'nin TC Numarasi: ";
     cin >> hasta_tcsi;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].p_ssn == hasta_tcsi)
       {
         patient_objects[i].take_patient_information_turkish();
         hasta_sayisi++;
       }

     }
     if(hasta_sayisi == 0)
     {
       system("cls");
       cout << endl <<  "           Kayitli Hasta Bulunamadi..." << endl;
     }
     else
     {
       system("cls");
     }
   }
   else if(panel_secimi == 3)
   {
     all_patient_information_turkish();
   }
   else if(panel_secimi == 4)
   {
     system("cls");
     cout << char(201);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(187) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "   Sigortasiz Hastalarin Isimleri  " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(200);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(188) << endl;
     cout << "              .";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << endl;
     int check = 0;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].insurance == false)
       {
         cout << patient_objects[i].p_name << " " << patient_objects[i].p_surname << "\'nin Sigortasi Yok." << endl;
         check++;
       }
     }
     if(check == 0)
     cout << endl << "Sigortasiz Hasta Bulunamadi..." << endl;
   }
   // else
   // system("cls");


 }
 void turkish_assistant_panel()
 {
   int panel_secimi, hasta_sayisi, hasta_sayisi2;
   string hasta_tcsi;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "                     Asistan Paneli                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                     Islem Seciniz:                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                     1.Hasta Kaydi                    " << char(186) << endl;
   cout << char(186) << "               2.Hasta Bilgisi Sorgulama              " << char(186) << endl;
   cout << char(186) << "                3.Tum Hasta Bilgileri                 " << char(186) << endl;
   cout << char(186) << "                 4.Sigortasiz Hastalar                " << char(186) << endl;
   cout << char(186) << "                   5.Panel'den Cik                    " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> panel_secimi;
   if(panel_secimi == 1)
   {
     cout << "   Kaydini girmek istediginiz Hasta Sayisi: ";
     cin >> hasta_sayisi;
     {
       for(int i = 0; i < hasta_sayisi; i++)
       {
         patient_objects[i].take_patient_appointment_turkish();
       }
     }
   }
   else if(panel_secimi == 2)
   {
     hasta_sayisi2 = 0;
     cout << "   Hasta TC Numarasi: ";
     cin >> hasta_tcsi;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].p_ssn == hasta_tcsi)
       {
         patient_objects[i].take_patient_information_turkish();
         hasta_sayisi2++;
       }
     }
     if(hasta_sayisi2 == 0)
     {
       system("cls");
       cout << endl <<  "       Kayitli Hasta Bulunamadi..." << endl;
     }

     else
     system("cls");
   }
   else if(panel_secimi == 3)
   {
       all_patient_information_turkish();
   }
   else if(panel_secimi == 4)
   {
     system("cls");
     cout << char(201);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(187) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "   Sigortasiz Hastalarin Isimleri  " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(186) << "                                   " << char(186) << endl;
     cout << char(200);      for(int i=0; i<35; i++){cout << char(205);}      cout << char(188) << endl;
     cout << "              .";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << ".";
     sleep(1);
     cout << endl;
     int check = 0;
     for(int i = 0; i < 10; i++)
     {
       if(patient_objects[i].insurance == false)
       {
         cout << patient_objects[i].p_name << " " << patient_objects[i].p_surname << "\'nin Sigortasi Yok." << endl;
         check++;
       }
     }
     if(check == 0)
     cout << endl << "Sigortasiz Hasta Bulunamadi..." << endl;
   }
   else
   system("cls");


 }
 void english_menu()
 {
   int panel_secimi;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "            Hospital Management System                " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                  Choose a Panel:                     " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                 1.Doctor's Panel                     " << char(186) << endl;
   cout << char(186) << "                2.Assistant's Panel                   " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> panel_secimi;
   system("cls");
   if(panel_secimi == 1)
   {
     english_doktor_panel();
   }
   else
   {
     english_assistant_panel();
   }

 }
 void turkish_menu()
 {
   int panel_secimi;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "            Hastane Otomasyonuna Hosgeldiniz          " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                  Panel Seciniz:                      " << char(186) << endl;
   cout << char(186) << "                 1.Doktor Paneli                      " << char(186) << endl;
   cout << char(186) << "                 2.Asistan Paneli                     " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> panel_secimi;
   if(panel_secimi == 1)
   {
     turkish_doktor_panel();
   }
   else
   {
     turkish_assistant_panel();
   }



 }



 void main_menu()
 {
   bool quit = false;
   while(!quit)
   {
     int language;
   cout << char(201);      for(int i=0; i<54; i++){cout << char(205);}  cout << char(187) << endl;
   cout << char(186) << "                Hastane Otomasyonu                    " << char(186) << endl;
   cout << char(186) << "            Hospital Management System                " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << " Please choose the language you want to continue with " << char(186) << endl;
   cout << char(186) << "      Lutfen kullanmak istediginiz dili seciniz:      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                    1.Turkce                          " << char(186) << endl;
   cout << char(186) << "                    2.English                         " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                                                      " << char(186) << endl;
   cout << char(186) << "                  By Qusai Gazawy                     " << char(186) << endl;

   cout << char(200);      for(int i=0; i<54; i++){cout << char(205);}      cout << char(188) << endl;
   cin >> language;
   system("cls");
   if(language == 1)
   {
     turkish_menu();
   }
   else if(language == 2)
   {
     english_menu();
   }
   else
   quit = true;
   }

 }

 int main()
 {

   main_menu();
 }
