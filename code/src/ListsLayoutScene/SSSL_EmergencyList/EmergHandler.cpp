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

#include <ListsLayoutScene/SSSL_EmergencyList/EmergHandler.h>
#include <ListsLayoutScene/ButtonHandlers.h>
#include <ListsLayoutScene/ListsLayoutScene.h>

using namespace lumin::ui;

namespace scenes {
  namespace ListsLayoutScene {
    namespace handlers {
      namespace SSSL_EmergencyList {
        EmergHandler::EmergHandler(SpawnedScene& spawnedScene) {
        }

        void EmergHandler::onActivate(SpawnedScene& spawnedScene, const UiEventData& data) {
			onActivateEmergBut(UiButton::CastFrom(data.getUiNode()), spawnedScene.eclipseLabel1);
			
        }

        void EmergHandler::onEnabled(SpawnedScene& spawnedScene, const UiEventData& data) {
        }

        void EmergHandler::onPressed(SpawnedScene& spawnedScene, const UiEventData& data) {
        }

        void EmergHandler::onHoverEnter(SpawnedScene& spawnedScene, const UiEventData& data) {
        }

      }
    }
  }
}

