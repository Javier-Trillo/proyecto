#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace HealthStyleModel;

namespace HealthStyleController {
	public ref class Controller
	{
	private:
		static List<Medicinas^>^ medicinasList = gcnew List<Medicinas^>();

	public:
		static int AddMedicine(Medicinas^medicinas);
		static Medicinas^ QueryMedicineById(int medicineId);
		static List<Medicinas^>^ QueryAllMedicines();
		static int UpdateMedicine(Medicinas^ medicinas);
		static int DeleteMedicine(int medicineId);
	};
}
