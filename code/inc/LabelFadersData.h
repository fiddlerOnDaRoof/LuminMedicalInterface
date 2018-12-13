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
#pragma once
#include <SpawnedSceneUserData.h>
#include <LabelFader.h>

struct LabelFadersData : SpawnedSceneUserData {
  virtual ~LabelFadersData();
  std::string onText;
  std::string offText;
  std::map<const std::string, LabelFader*> faders;
  LabelFadersData(const std::string& onText, const std::string& offText);
};