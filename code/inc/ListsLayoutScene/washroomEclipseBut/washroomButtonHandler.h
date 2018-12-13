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

#pragma once

#include <lumin/ui/node/UiButton.h>

namespace scenes {
  namespace ListsLayoutScene {
    struct SpawnedScene;
    namespace handlers {
      namespace washroomEclipseBut {
        class washroomButtonHandler {
          public:
            washroomButtonHandler(SpawnedScene& spawnedScene);
            void onHoverEnter(SpawnedScene& spawnedScene, const lumin::ui::UiEventData& data);
            void onHoverExit(SpawnedScene& spawnedScene, const lumin::ui::UiEventData& data);
            void onActivate(SpawnedScene& spawnedScene, const lumin::ui::UiEventData& data);
            void onLongPress(SpawnedScene& spawnedScene, const lumin::ui::UiEventData& data);
        };
      }
    }
  }
}

