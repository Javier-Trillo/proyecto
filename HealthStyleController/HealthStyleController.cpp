#include "pch.h"

#include "HealthStyleController.h"
using namespace HealthStylePersistance;
int HealthStyleController::Controller::AddMedicine(Medicinas^ medicinas)
{
    medicinasList->Add(medicinas);
    //Persistance::Persist("medicinas.txt", medicinasList);
    Persistance::PersistXML("medicinas.xml", medicinasList);
    //Persistance::PersistBinary("products.bin", productList);
    return medicinas->Id;
}

Medicinas^ HealthStyleController::Controller::QueryMedicineById(int medicineId)
{
   // medicinasList = (List<Medicinas^>^)Persistance::LoadData("medicinas.txt");
    medicinasList = (List<Medicinas^>^)Persistance::LoadXMLData("medicinas.xml");
    //productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    for (int i = 0; i < medicinasList->Count; i++)
        if (medicinasList[i]->Id == medicineId)
            return medicinasList[i];
    return nullptr;
}

List<Medicinas^>^ HealthStyleController::Controller::QueryAllMedicines()
{
    //medicinasList = (List<Medicinas^>^)Persistance::LoadData("medicinas.txt");
    medicinasList = (List<Medicinas^>^)Persistance::LoadXMLData("medicinas.xml");
    //productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    return medicinasList;
}

int HealthStyleController::Controller::UpdateMedicine(Medicinas^ medicinas)
{
    for (int i = 0; i < medicinasList->Count; i++)
        if (medicinasList[i]->Id == medicinas->Id) {
            medicinasList[i] = medicinas;
            //Persistance::Persist("medicinas.txt", medicinasList);
            Persistance::PersistXML("medicinas.xml", medicinasList);
            //Persistance::PersistBinary("products.bin", productList);
            return medicinas->Id;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteMedicine(int medicineId)
{
    for (int i = 0; i < medicinasList->Count; i++)
        if (medicinasList[i]->Id == medicineId) {
            medicinasList->RemoveAt(i);
            //Persistance::Persist("medicinas.txt", medicinasList);
            Persistance::PersistXML("medicinas.xml", medicinasList);
            //Persistance::PersistBinary("products.bin", productList);
            return medicineId;
        }
    return 0;
}
