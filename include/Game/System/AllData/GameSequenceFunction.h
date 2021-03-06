#pragma once

#include "revolution.h"

class JMapIdInfo;
class GameSequenceInGame;
class PlayInStageResultHolder;

class GameSequenceFunction {
public:
	static GameSequenceInGame* getGameSequenceInGame();

	static void changeToScenarioSelect(const char *pStageName);

	static const char* getClearedStageName();
	static s32 getClearedPowerStarId();
	static s32 getClearedStarPieceNum();
	static s32 getClearedCoinNum();

	static PlayInStageResultHolder* getPlayInStageResultHolder();

	static void collectTicoCoinInStage();
	static bool isCollectTicoCoinInStage();
	static bool isCollectTicoCoinSaved();
	static void tryCollectTicoCoinSaved();

	static void changeSceneStage(const char *, s32, s32, JMapIdInfo *);
};
