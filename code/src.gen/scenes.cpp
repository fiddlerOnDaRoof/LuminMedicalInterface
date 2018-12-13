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

#include <PrismSceneManager.h>
#include <scenes.h>
#include <ListsLayoutScene/ListsLayoutScene.h>

namespace scenes {

  namespace ListsLayoutScene {

    namespace externalNodes {
      extern const std::string eclipseLabel1 = "eclipseLabel1";
      extern const std::string SSSL_EmergencyList = "SSSL_EmergencyList";
      extern const std::string helpEclipseLabel = "helpEclipseLabel";
      extern const std::string helpList = "helpList";
      extern const std::string foodEclipseButton = "foodEclipseButton";
      extern const std::string BES_Label6 = "BES_Label6";
      extern const std::string washroomEclipseBut = "washroomEclipseBut";
      extern const std::string washroomEclipseLabel = "washroomEclipseLabel";
    }

    const SceneDescriptor::ExternalNodeReferences externalNodesMap = {
      {"eclipseLabel1", externalNodes::eclipseLabel1},
      {"SSSL_EmergencyList", externalNodes::SSSL_EmergencyList},
      {"helpEclipseLabel", externalNodes::helpEclipseLabel},
      {"helpList", externalNodes::helpList},
      {"foodEclipseButton", externalNodes::foodEclipseButton},
      {"BES_Label6", externalNodes::BES_Label6},
      {"washroomEclipseBut", externalNodes::washroomEclipseBut},
      {"washroomEclipseLabel", externalNodes::washroomEclipseLabel}
    };

    const SceneDescriptor descriptor(
      0,
      "ListsLayoutScene",
      "root",
      "/assets/ListsLayoutScene.scene.xml",
      "/assets/ListsLayoutScene.scene.res.xml",
      externalNodesMap,
      true);
  }

  const SceneDescriptorReferences externalScenes = {
    {ListsLayoutScene::descriptor.getExternalName(), ListsLayoutScene::descriptor}
  };

  struct VerifyNumberOfExternalScenes {
    VerifyNumberOfExternalScenes() { assert(externalScenes.size() == numberOfExternalScenes); }
  };

  VerifyNumberOfExternalScenes verifyNumberOfExternalScenes;
}

const PrismSceneManager::CreateSpawnedScene PrismSceneManager::createSpawnedScene[scenes::numberOfExternalScenes] = {
  ::scenes::ListsLayoutScene::createSpawnedScene
};

const PrismSceneManager::CreateSpawnedSceneHandlers PrismSceneManager::createSpawnedSceneHandlers[scenes::numberOfExternalScenes] = {
  static_cast<CreateSpawnedSceneHandlers>(::scenes::ListsLayoutScene::createSpawnedSceneHandlers)
};

