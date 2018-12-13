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

#include <lumin/ui/node/UiDropDownList.h>

namespace scenes {
  namespace ListsLayoutScene {
    struct SpawnedScene;
    namespace handlers {
      namespace SSSL_EmergencyList {
        class SingleSelectSingleLevelHandlers {
          public:
            SingleSelectSingleLevelHandlers(SpawnedScene& spawnedScene);
            void onSelectionChanged(SpawnedScene& spawnedScene, const lumin::ui::UiEventData& data, const std::vector<const lumin::ui::DropDownListItem*>& selection);
        };
      }
    }
  }
}

