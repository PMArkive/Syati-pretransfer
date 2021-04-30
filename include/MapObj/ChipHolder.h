#pragma once

#include "MapObj/ChipGroup.h"

class ChipCounter;

class ChipHolder : public NameObj
{
public:
	ChipHolder(const char *, s32);

	virtual ~ChipHolder();
	virtual void init(const JMapInfoIter &);

	void registerChipGroup(ChipGroup *);
	ChipGroup* findChipGroup(s32) const;

	ChipCounter* mChipCounter;
	ChipGroup** mChipGroups;
	s32 mNumChipGroups;
	s32 mType;
};

namespace MR
{
	ChipHolder* createChipHolder(s32);
	ChipHolder* getChipHolder(s32);
	void registerChipGroup(s32, ChipGroup *);
	void registerChip(s32, ChipBase *, s32);
	void updateChipCounterUIRange(s32, ChipBase *, s32);
	void noticeGetChip(s32, ChipBase *, s32);
	void showChipCounter(s32, s32);
	void hideChipCounter(s32, s32);
	void requestStartChipCompleteDemo(s32, s32);
	void noticeEndChipCompleteDemo(s32, s32);
	s32 getGotChipCount(s32, s32);
	void activateChipLayout();
	void deactivateChipCounter();
};
