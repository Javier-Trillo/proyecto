#pragma once

using namespace System;

namespace HealthStylePersistance {
	public ref class Persistance
	{
	public:// TODO: Agregue aquí los métodos de esta clase.
		static void Persist(String^ fileName, Object^ persistObject); //Método de clase o global
		static void PersistXML(String^ fileName, Object^ persistObject);
		static void PersistBinary(String^ fileName, Object^ persistObject);
		static Object^ LoadData(String^ fileName);
		static Object^ LoadXMLData(String^ fileName);
		static Object^ LoadBinaryData(String^ fileName);
	};
}
