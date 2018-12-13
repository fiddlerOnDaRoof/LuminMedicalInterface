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

#include <ListsLayoutScene/ButtonHandlers.h>
#include <ListsLayoutScene/ExamplesConstants.h>
#include <ListsLayoutScene/ListsLayoutScene.h>
#include <lumin/Consts.h>
#include <LabelFadersData.h>

#include <iostream>
#include <fstream>

using namespace lumin;
using namespace lumin::ui;
using namespace std;


namespace scenes {
	namespace ListsLayoutScene {
		namespace handlers {

			void onHoverEnterBase(UiButton* button, UiText* label, LabelFader* fader) {
				label->setText(ExampleConsts::kHoverEnterText);
				if (fader) {
					fader->fadeIn();
				}
				button->setTextColor(color::CYAN);
				button->setIconColor(color::CYAN);
			}

			void onHoverExitBase(UiButton* button, UiText* label, LabelFader* fader) {
				label->setText(ExampleConsts::kHoverExitText);
				if (fader) {
					fader->fadeOut();
				}
				button->setTextColor(color::WHITE);
				button->setIconColor(color::WHITE);
			}

			//below code triggered when button is pressed
			void onActivateBase(UiButton* button, UiText* label) {

				std::ofstream myfile;
				//write to the LAN network so physician app has access
				myfile.open("\\\\LAPTOP-MUPHT9FD\\Users\\micha\\Documents\\LAN_Files\\John_Smith_Request.txt");
				//myfile << "Patient_ID, Request_Type, Details\n";
				myfile << ExampleConsts::patientID;
				myfile << "Aid,";
				myfile << "meal,";
				myfile.close();

				label->setText(ExampleConsts::kActivateTextFood);
				button->setTextColor(color::GREEN);
				button->setIconColor(color::GREEN);
			}

			void onActivateWashroomBut(UiButton* button, UiText* label) {

				std::ofstream myfile;
				myfile.open("\\\\LAPTOP-MUPHT9FD\\Users\\micha\\Documents\\LAN_Files\\John_Smith_Request.txt");
				//myfile << "Patient_ID, Request_Type, Details\n";
				myfile << ExampleConsts::patientID;
				myfile << "Aid,";
				myfile << "washroom,";
				myfile.close();

				label->setText("Staff notified");
				button->setIconColor(color::GREEN);
			}

			void onActivateEmergBut(UiButton* button, UiText* label) {

				//place in code if want to flag physician app before selection is made
				/*std::ofstream myfile;
				myfile.open("\\\\LAPTOP-MUPHT9FD\\Users\\micha\\Documents\\LAN_Files\\John_Smith_Request.txt");
				//myfile << "Patient_ID, Request_Type, Details\n";
				myfile << ExampleConsts::patientID;
				myfile << "Emergency,";
				myfile << "TRUE,";
				myfile.close();*/

				label->setText("Help Coming");
				button->setIconColor(color::GREEN);
			}

			//modified default function by adding selectionChange default function's parameter "selection" so that request sent is only 
			//displayed after an item is selected. Unlike emerg button where the text is shown right after the patient clicks he button as 
			//staff are notified immediately and then given the extra info (e.g chest pain) if patient selects this afterwards.
			void onActivateHelpBut(UiButton* button, UiText* label, const vector<const lumin::ui::DropDownListItem*>& selection) {
				label->setText("");
				std::cout << selection[0]->label << "\n";
				std::ofstream myfile;
				myfile.open("\\\\LAPTOP-MUPHT9FD\\Users\\micha\\Documents\\LAN_Files\\John_Smith_Request.txt");
				//myfile << "Patient_ID, Request_Type, Details\n";
				myfile << ExampleConsts::patientID;
				myfile << "Aid,";
				//myfile << selection.push_back("0");
				myfile << selection[0]->label;

				myfile.close();

				label->setText(selection[0]->label + " requested");



			}

			void onLongPressBase(UiButton* button, UiText* label) {
				label->setText(ExampleConsts::kLongPressText);
				button->setTextColor(color::RED);
				button->setIconColor(color::RED);
			}

			void onUpdateLabelBase(LabelFader* fader, float delta) {
				if (fader) {
					fader->update(delta);
				}
			}

		}
	}
}
