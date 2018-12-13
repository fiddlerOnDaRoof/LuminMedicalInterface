// %BANNER_BEGIN%
// ---------------------------------------------------------------------
// %COPYRIGHT_BEGIN%
//
// Copyright (c) 2018 Magic Leap, Inc. All Rights Reserved.
// Use of this file is governed by the Creator Agreement, located
// here: https://id.magicleap.com/creator-terms
//
// %COPYRIGHT_END%
// ---------------------------------------------------------------------
// %BANNER_END%

// %SRC_VERSION%: 1

#include <ListsLayoutScene/ExamplesConstants.h>
#include <ListsLayoutScene/SSSL_EmergencyList/SingleSelectSingleLevelHandlers.h>

#include <iostream>
#include <fstream>

using namespace lumin;
using namespace lumin::ui;
using namespace std;

namespace scenes {
  namespace ListsLayoutScene {
    namespace handlers {
      namespace SSSL_EmergencyList {
        SingleSelectSingleLevelHandlers::SingleSelectSingleLevelHandlers(SpawnedScene& spawnedScene) {
        }

        void SingleSelectSingleLevelHandlers::onSelectionChanged(SpawnedScene& spawnedScene, const UiEventData& data, const vector<const lumin::ui::DropDownListItem*>& selection) {
			std::cout << selection[0]->label << "\n";

			std::ofstream myfile;
			//write the the LAN network so physician app has access
			//std::string s = date::format("%F %T", std::chrono::system_clock::now());
			myfile.open("\\\\LAPTOP-MUPHT9FD\\Users\\micha\\Documents\\LAN_Files\\John_Smith_Request.txt");
			//myfile << "Patient_ID, Request_Type, Details\n";
			myfile << ExampleConsts::patientID;
			myfile << "Emergency,";
			myfile << selection[0]->label;
			myfile.close();

		}

      }
    }
  }
}

