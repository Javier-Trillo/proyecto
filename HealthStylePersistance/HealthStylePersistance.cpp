#include "pch.h"

#include "HealthStylePersistance.h"
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace HealthStyleModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;

void HealthStylePersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
{
    FileStream^ archivo;
    StreamWriter^ escritor;
    try {
        archivo = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        escritor = gcnew StreamWriter(archivo);
        if (persistObject->GetType() == List<Medicinas^>::typeid) {
            for (int i = 0; i < ((List<Medicinas^>^)persistObject)->Count; i++) {
                escritor->WriteLine(((List<Medicinas^>^)persistObject)[i]->Id + "," +
                    ((List<Medicinas^>^)persistObject)[i]->Name + "," +
                    ((List<Medicinas^>^)persistObject)[i]->Description + "," +
                    ((List<Medicinas^>^)persistObject)[i]->Price + "," +
                    ((List<Medicinas^>^)persistObject)[i]->Stock);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (escritor != nullptr) escritor->Close();
        if (archivo != nullptr) archivo->Close();
    }
}

void HealthStylePersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject)
{
    StreamWriter^ output;
    try {
        output = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Medicinas^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Medicinas^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<String^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }
}

void HealthStylePersistance::Persistance::PersistBinary(String^ fileName, Object^ persistObject)
{
    FileStream^ output;
    try {
        output = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        BinaryFormatter^ formateador = gcnew BinaryFormatter();
        //if (persistObject->GetType() == List<Product^>::typeid) {
        formateador->Serialize(output, persistObject);
        //}
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }
}

Object^ HealthStylePersistance::Persistance::LoadData(String^ fileName)
{
    Object^ res;
    FileStream^ archivo;
    StreamReader^ lector;
    try {
        if (File::Exists(fileName)) {
            archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            lector = gcnew StreamReader(archivo);
        }
        if (fileName->Equals("medicinas.txt")) {
            res = gcnew List<Medicinas^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Medicinas^ p = gcnew Medicinas();
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->Description = record[2];
                    p->Price = Convert::ToDouble(record[3]);
                    p->Stock = Convert::ToInt32(record[4]);
                   // p->Status = 'A';
                    ((List<Medicinas^>^)res)->Add(p);
                }
            }
        }
        if (fileName->Equals("stores.txt")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    res = gcnew List<String^>(record);
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (lector != nullptr) lector->Close();
        if (archivo != nullptr) archivo->Close();
    }
    return res;
}

Object^ HealthStylePersistance::Persistance::LoadXMLData(String^ fileName)
{
    Object^ res;
    StreamReader^ sr;
    XmlSerializer^ serializadorXML;
    try {
        if (File::Exists(fileName)) {
            sr = gcnew StreamReader(fileName);
        }
        if (fileName->Equals("medicinas.xml")) {
            res = gcnew List<Medicinas^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Medicinas^>::typeid);
                res = (List<Medicinas^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("stores.xml")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
                res = (List<String^>^)serializadorXML->Deserialize(sr);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
    return res;
}

Object^ HealthStylePersistance::Persistance::LoadBinaryData(String^ fileName)
{
    Object^ res;
    FileStream^ input;
    BinaryFormatter^ formateador;
    try {
        if (File::Exists(fileName)) {
            input = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formateador = gcnew BinaryFormatter();
        }
        if (fileName->Equals("medicinas.bin")) {
            res = gcnew List<Medicinas^>();
            if (File::Exists(fileName)) {
                res = (List<Medicinas^>^)formateador->Deserialize(input);
            }
        }
       // if (fileName->Equals("salesmen.bin")) {
         //   res = gcnew List<Salesman^>();
           // if (File::Exists(fileName)) {
             //   res = (List<Salesman^>^)formateador->Deserialize(input);
            //}
        //}

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (input != nullptr) input->Close();
    }

    return res;
}
