# Hospital Management System (GUI)

This directory (`GUI_SP`) contains the Graphical User Interface (GUI) implementation of the Hospital Management System. It is a desktop application built using C++/CLI and Windows Forms.

## 🏥 Project Overview

The Hospital Management System is designed to facilitate the management of hospitals, patients, and medical reservations. It features a role-based access system catering to both **Administrators** and **Patients**, providing an intuitive interface for handling daily hospital operations.

## ✨ Features

### Patient Features
*   **User Authentication:** Secure registration and login for patients.
*   **Medical Reservations:** Book appointments for regular **Check-ups** or schedule **Surgeries**.
*   **Cost Calculation:** Automatically calculates the total price based on the hospital's specific fees, surgery costs, and the number of days stayed.
*   **Laboratory Reservations:** Book laboratory tests (e.g., Complete Blood Count, Lipid Profile, X-rays) at various affiliated laboratories.
*   **Manage Bookings:** View active reservations and cancel them if necessary.

### Administrator Features
*   **Admin Access:** Dedicated login for hospital administrators (using `@Hadmin.com` accounts).
*   **Hospital Management:** View, add, or delete hospital records from the system.
*   **Patient Management:** Oversee patient records and their reservation details.

### System Functionalities
*   **Sorting & Filtering:** Sort the list of hospitals by Name, Rating, Beds Available, or Bed Price to help patients find the right fit.
*   **Data Persistence:** Data is securely saved and loaded from local text files (`Data/Hospitalinfo.txt` and `Data/UserInfo.txt`), ensuring no information is lost between sessions.

## 🛠️ Technologies Used
*   **Language:** C++ / C++/CLI
*   **Framework:** Windows Forms (.NET Framework)
*   **Development Environment:** Visual Studio (Project file: `GUI_SP.vcxproj`)
*   **Data Storage:** File Handling (Text files for database simulation)

## 📂 Key Files & Structure

*   `mainPage.h` / `mainPage.cpp`: The main entry point and primary dashboard for the application.
*   `mainFun.h`: Contains the core business logic, including sorting algorithms, data loading/saving, login verification, and reservation logic.
*   `Structs.h`: Defines the core data structures used throughout the system, such as `Hospitals`, `Reservations`, `LABReservations`, and `Users`.
*   `Addpage.h`: UI Form for adding new hospital records.
*   `ListOfHopsital.h` / `ListOfPatient.h`: UI Forms for displaying lists of hospitals and patients.
*   `Data/`: Directory containing the database text files.
*   `assets/`: Directory containing graphical assets and icons used in the UI.

## 🚀 How to Run

1.  Open the `SP_Project.sln` solution file in Visual Studio.
2.  Set `GUI_SP` as the startup project.
3.  Build and Run the application (Local Windows Debugger).
4.  Ensure that the `Data` folder and its respective `.txt` files exist in the working directory to allow the application to read and save data correctly.
