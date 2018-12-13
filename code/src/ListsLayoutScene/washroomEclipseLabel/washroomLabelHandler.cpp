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

#include <ListsLayoutScene/washroomEclipseLabel/washroomLabelHandler.h>
#include <ListsLayoutScene/ListslayoutScene.h>
#include <ListsLayoutScene/ButtonHandlers.h>
#include <LabelFadersData.h>

using namespace lumin::ui;

namespace scenes {
  namespace ListsLayoutScene {
    namespace handlers {
      namespace washroomEclipseLabel {
        washroomLabelHandler::washroomLabelHandler(SpawnedScene& spawnedScene) {
        }

        void washroomLabelHandler::onUpdate(SpawnedScene& spawnedScene, const UiEventData& data, const float dTime) {

			LabelFadersData* userData = static_cast<LabelFadersData*>(spawnedScene.userData);
			if (userData) {
				onUpdateLabelBase(userData->faders[externalNodes::washroomEclipseLabel], dTime);
			}
        }

      }
    }
  }
}

