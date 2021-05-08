#pragma once

#include "kamek.h"
#include "JGeometry/TVec3.h"

class LiveActor;
class HitSensor;

namespace MR
{
	HitSensor* addHitSensor(LiveActor *, const char *, u32, u16, f32, const TVec3f &);
	HitSensor* addHitSensorBinder(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorPriorBinder(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorRide(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorMapObj(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorMapObjSimple(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorMapObjMoveCollision(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorEnemy(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorEnemyAttack(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorNpc(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorEye(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorPush(LiveActor *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorPosRide(LiveActor *, const char *, u16, f32, const TVec3f*);
	HitSensor* addHitSensorPosMapObj(LiveActor *, const char *, u16, f32, const TVec3f*);

	HitSensor* addHitSensorMtx(LiveActor *, const char *, u32, u16, f32, Mtx, const TVec3f &);
	HitSensor* addHitSensorMtxRide(LiveActor *, const char *, u16, f32, Mtx, const TVec3f &);
	HitSensor* addHitSensorMtxEnemy(LiveActor *, const char *, u16, f32, Mtx, const TVec3f &);
	HitSensor* addHitSensorMtxEnemyAttack(LiveActor *, const char *, u16, f32, Mtx, const TVec3f &);
	HitSensor* addHitSensorMtxAnimal(LiveActor *, const char *, u16, f32, Mtx, const TVec3f &);
	HitSensor* addHitSensorAtJoint(LiveActor *, const char *, const char *, u32, u16, f32, const TVec3f &);
	HitSensor* addHitSensorAtJointMapObj(LiveActor *, const char *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorAtJointMapObjSimple(LiveActor *, const char *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorAtJointEnemy(LiveActor *, const char *, const char *, u16, f32, const TVec3f &);
	HitSensor* addHitSensorAtJointEnemyAttack(LiveActor *, const char *, const char *, u16, f32, const TVec3f &);

	HitSensor* addBodyMessageSensor(LiveActor *, u32);

	HitSensor* addBodyMessageSensorMapObj(LiveActor *);

	void invalidateHitSensors(LiveActor *);

	void validateHitSensor(LiveActor *, const char *);
	void invalidateHitSensor(LiveActor *, const char *);
	
	bool isSensorPlayer(const HitSensor *);
	bool isSensorBinder(const HitSensor *);

	bool isSensorRide(const HitSensor *);
	bool isSensorPlayerOrRide(const HitSensor *);

	bool isSensorEnemy(const HitSensor *);
	bool isSensorEnemyAttack(const HitSensor *);
	bool isSensorNPC(const HitSensor *);
	bool isSensorMapObj(const HitSensor *);

	bool isSensorItem(const HitSensor *);

	HitSensor* getSensor(LiveActor *, const char *);

	bool sendMsgPush(HitSensor *, HitSensor *);

	bool sendMsgEnemyAttack(HitSensor *, HitSensor *);

	bool sendMsgEnemyAttackElectric(HitSensor *, HitSensor *);
	bool sendMsgEnemyAttackFreeze(HitSensor *, HitSensor *);
	bool sendMsgEnemyAttackExplosion(HitSensor *, HitSensor *);

	void sendMsgToGroupMember(u32, LiveActor *, HitSensor *, const char *);
	
	bool isMsgPlayerHitAll(u32);
	bool isMsgPlayerSpinAttack(u32);
	// I believe this one is for when the player stomps on something
	bool isMsgPlayerTrample(u32);
	bool isMsgPlayerHipDrop(u32);
	bool isMsgPlayerHipDropFloor(u32);
	bool isMsgPlayerUpperPunch(u32);
	bool isMsgPlayerKick(u32);

	bool isMsgJetTurtleAttack(u32);

	bool isMsgFireBallAttack(u32);
	bool isMsgSearchlightAttack(u32); //Located at 0x80016C40 USA.
	bool isMsgFreezeAttack(u32);
	bool isMsgInvincibleAttack(u32);

	bool isMsgAutoRushBegin(u32);
	bool isMsgUpdateBaseMtx(u32);
	bool isMsgRushCancel(u32);
	bool isMsgIsRushTakeOver(u32);

	bool isMsgFloorTouch(u32);
	bool isMsgWallTouch(u32);
	bool isMsgCeilTouch(u32);
	bool isMsgItemGet(u32);
	bool isMsgItemPull(u32);
	bool isMsgItemShow(u32);
	bool isMsgItemHide(u32);

	bool isMsgInhaleBlackHole(u32);

	bool isMsgEnemyAttack(u32);
	bool isMsgEnemyAttackFire(u32);
	bool isMsgEnemyAttackFireStrong(u32);
	bool isMsgEnemyAttackElectric(u32);
	bool isMsgExplosionAttack(u32);
	bool isMsgLockOnStarPieceShoot(u32);
	bool isMsgBallDashWall(u32);
	bool isMsgBallDashGround(u32);
	bool isMsgStarPieceAttack(u32);
	bool isMsgStarPieceReflect(u32);
	bool isMsgStarPieceGift(u32);
};
