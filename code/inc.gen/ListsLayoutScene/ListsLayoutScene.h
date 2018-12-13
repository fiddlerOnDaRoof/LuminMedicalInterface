// -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING --
//
// THE CONTENTS OF THIS FILE IS GENERATED BY CODE AND
// ANY MODIFICATIONS WILL BE OVERWRITTEN
//
// -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING --

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

#include <SpawnedSceneBase.h>
#include <SpawnedSceneHandlers.h>

#include <lumin/ui/node/UiButton.h>
#include <lumin/ui/node/UiDropDownList.h>
#include <lumin/ui/node/UiText.h>

namespace scenes {

  namespace ListsLayoutScene {
  
    namespace externalNodes {
      extern const std::string eclipseLabel1;
      extern const std::string SSSL_EmergencyList;
      extern const std::string helpEclipseLabel;
      extern const std::string helpList;
      extern const std::string foodEclipseButton;
      extern const std::string BES_Label6;
      extern const std::string washroomEclipseBut;
      extern const std::string washroomEclipseLabel;
    } 

    struct SpawnedScene : public SpawnedSceneBase {
      SpawnedScene(const SceneDescriptor& sceneDescriptor, lumin::Node* root);
      ~SpawnedScene();
      lumin::ui::UiText* eclipseLabel1;
      lumin::ui::UiDropDownList* SSSL_EmergencyList;
      lumin::ui::UiText* helpEclipseLabel;
      lumin::ui::UiDropDownList* helpList;
      lumin::ui::UiButton* foodEclipseButton;
      lumin::ui::UiText* BES_Label6;
      lumin::ui::UiButton* washroomEclipseBut;
      lumin::ui::UiText* washroomEclipseLabel;
    };  

    SpawnedSceneBase* createSpawnedScene(const SceneDescriptor& sceneDescriptor, lumin::Node* root);
    SpawnedSceneHandlers* createSpawnedSceneHandlers(SpawnedSceneBase& spawnedScene);

    extern const SceneDescriptor descriptor; 
  }
}

