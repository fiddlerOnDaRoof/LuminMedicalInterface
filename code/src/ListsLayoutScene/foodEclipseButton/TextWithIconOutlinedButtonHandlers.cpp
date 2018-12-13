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

#include <ListsLayoutScene/foodEclipseButton/TextWithIconOutlinedButtonHandlers.h>
#include <ListsLayoutScene/ListsLayoutScene.h>
#include <ListsLayoutScene/ButtonHandlers.h>
#include <LabelFadersData.h>

using namespace lumin::ui;

namespace scenes {
	namespace ListsLayoutScene {
		namespace handlers {
			namespace foodEclipseButton {
				TextWithIconOutlinedButtonHandlers::TextWithIconOutlinedButtonHandlers(SpawnedScene& spawnedScene) {
				}

				void TextWithIconOutlinedButtonHandlers::onHoverEnter(SpawnedScene& spawnedScene,
					const UiEventData& data) {
					LabelFadersData* userData = static_cast<LabelFadersData*>(spawnedScene.userData);
					if (userData) {
						onHoverEnterBase(UiButton::CastFrom(data.getUiNode()), spawnedScene.BES_Label6,
							userData->faders[externalNodes::BES_Label6]);
					}
				}

				void TextWithIconOutlinedButtonHandlers::onHoverExit(SpawnedScene& spawnedScene,
					const UiEventData& data) {
					LabelFadersData* userData = static_cast<LabelFadersData*>(spawnedScene.userData);
					if (userData) {
						onHoverExitBase(UiButton::CastFrom(data.getUiNode()), spawnedScene.BES_Label6,
							userData->faders[externalNodes::BES_Label6]);
					}
				}

				void TextWithIconOutlinedButtonHandlers::onActivate(SpawnedScene& spawnedScene,
					const UiEventData& data) {
					onActivateBase(UiButton::CastFrom(data.getUiNode()), spawnedScene.BES_Label6);
				}

				void TextWithIconOutlinedButtonHandlers::onLongPress(SpawnedScene& spawnedScene,
					const UiEventData& data) {
					onLongPressBase(UiButton::CastFrom(data.getUiNode()), spawnedScene.BES_Label6);
				}

			}
		}
	}
}



