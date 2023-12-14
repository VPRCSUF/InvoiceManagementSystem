#include <iostream>
#include <fstream>
#include <string>

void install() 
{

    char install_choice;
    std::string supplier, part_manufacturer, part_name, serial_num, model_num, purchase_date;



    std::cout << std::endl << "Are you adding a part? (y/n) ";
    std::cin >> install_choice;
    std::cin.ignore(1, '\n');
    std::cout << std::endl;

    while (install_choice == 'y')
    {
        std::string file_name = "Invoices//";

        std::cout << "==================================================================================================================\n";
        std::cout << "Please provide the following:\n\n";

        std::cout << "Supplier Name: ";
        std::getline(std::cin, supplier);

        std::cout << "Part Manufacturer: ";
        std::getline(std::cin, part_manufacturer);

        std::cout << "Part Name: ";
        std::getline(std::cin, part_name);

        std::cout << "Serial Number: ";
        std::getline(std::cin, serial_num);

        std::cout << "Model Number: ";
        std::getline(std::cin, model_num);

        std::cout << "Purchase Date: ";
        std::getline(std::cin, purchase_date);
        std::cout << "==================================================================================================================\n";

        std::cout << std::endl;
        std::cout << "Supplier Name: " << supplier << std::endl;
        std::cout << "Part Manufacturer: " << part_manufacturer << std::endl;
        std::cout << "Part Name: " << part_name << std::endl;
        std::cout << "Serial Number: " << serial_num << std::endl;
        std::cout << "Model Number: " << model_num << std::endl;
        std::cout << "Purchase Date: " << purchase_date << std::endl;
        std::cout << "==================================================================================================================\n";

        std::cout << std::endl << "Edit the above information? (y/n) ";
        std::cin >> install_choice;
        std::cout << std::endl;

        file_name += serial_num + ".txt";

        std::ofstream invoice_file(file_name);

        invoice_file << "Supplier Name: " << supplier << std::endl;
        invoice_file << "Part Manufacturer: " << part_manufacturer << std::endl;
        invoice_file << "Part Name: " << part_name << std::endl;
        invoice_file << "Serial Number: " << serial_num << std::endl;
        invoice_file << "Model Number: " << model_num << std::endl;
        invoice_file << "Purchase Date: " << purchase_date << std::endl;

        invoice_file.close();

        std::cout << std::endl;
        std::cout << "The part has been filed!\n";
        std::cout << "Would you like to add another part? (y/n) ";
        std::cin >> install_choice;
        std::cin.ignore(1, '\n');
    }

    std::cout << "****************\n";
    std::cout << "Have a nice day!\n\n";
}

void warehouse() 
{

    std::cout << "warehouse function";

}

int main(int argc, char const *argv[]) 
{

    int user;
    
    std::cout << "==================================================================================================================\n";
    std::cout << "1. Install\n" << std::endl
              << "2. Warehouse\n" << std::endl;
    std::cout << "==================================================================================================================\n";


    std::cin >> user;

    if (user > 2) 
    {

        std::cout << "Invalid input.";

    } else if (user == 1) 
    {

        install();

    } else 
    {

        warehouse();

    }

    return 0;
}
