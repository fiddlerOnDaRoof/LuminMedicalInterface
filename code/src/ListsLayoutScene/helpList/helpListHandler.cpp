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

#include <ListsLayoutScene/helpList/helpListHandler.h>
#include <ListsLayoutScene/ListsLayoutScene.h>
#include <ListsLayoutScene/ButtonHandlers.h>

using namespace lumin;
using namespace lumin::ui;
using namespace std;

namespace scenes {
  namespace ListsLayoutScene {
    namespace handlers {
      namespace helpList {
        helpListHandler::helpListHandler(SpawnedScene& spawnedScene) {
        }

        void helpListHandler::onHoverEnter(SpawnedScene& spawnedScene, const UiEventData& data) {
        }

        void helpListHandler::onActivate(SpawnedScene& spawnedScene, const UiEventData& data) {
			//commented out as will instead wait for a selection before informing staff, unlike emerg button where signal is sent right away
			//onActivateHelpBut(UiButton::CastFrom(data.getUiNode()), spawnedScene.helpEclipseLabel);

        }

        void helpListHandler::onSelectionChanged(SpawnedScene& spawnedScene, const UiEventData& data, const vector<const lumin::ui::DropDownListItem*>& selection) {
			onActivateHelpBut(UiButton::CastFrom(data.getUiNode()), spawnedScene.helpEclipseLabel, selection);
        }

        void helpListHandler::onEnabled(SpawnedScene& spawnedScene, const UiEventData& data) {
        }

        void helpListHandler::onUpdate(SpawnedScene& spawnedScene, const UiEventData& data, const float dTime) {
        }

      }
    }
  }
}


