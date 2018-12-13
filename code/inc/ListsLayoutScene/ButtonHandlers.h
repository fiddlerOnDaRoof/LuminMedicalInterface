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

#include <lumin/ui/node/UiNode.h>
#include <lumin/ui/node/UiDropDownList.h>
#include <lumin/ui/node/UiButton.h>
#include <lumin/ui/node/UiText.h>
#include <LabelFader.h>

namespace scenes {
  namespace ListsLayoutScene {
    struct SpawnedScene;
    namespace handlers {

      void onHoverEnterBase(lumin::ui::UiButton* button, lumin::ui::UiText* label, LabelFader* fader);
      void onHoverExitBase(lumin::ui::UiButton* button, lumin::ui::UiText* label, LabelFader* fader);
      void onActivateBase(lumin::ui::UiButton* button, lumin::ui::UiText* label);
	  void onActivateEmergBut(lumin::ui::UiButton* button, lumin::ui::UiText* label);
	  void onActivateHelpBut(lumin::ui::UiButton* button, lumin::ui::UiText* label, const std::vector<const lumin::ui::DropDownListItem*>& selection);
	  void onActivateWashroomBut(lumin::ui::UiButton* button, lumin::ui::UiText* label);
      void onLongPressBase(lumin::ui::UiButton*, lumin::ui::UiText* label);
      void onUpdateLabelBase(LabelFader* fader, float delta);
    }
  }
}
