#include <Windows.h>
#include <iostream>

namespace VALUES {
	namespace SAFE_VALUES {
		namespace MOVEMENT {
			const float fly_speed_min = 10;
			const float fly_speed_max = 25;

			const float ms_normal_min = 5;
			const float ms_normal_max = 15;

			const float ms_carry_min = 5;
			const float ms_carry_max = 15;

			const float ms_grabbing_min = 5;
			const float ms_grabbing_max = 15;

			const float normalDive_speed_min = 15;
			const float normalDive_speed_max = 50;
			const float airDive_speed_min = 5;
			const float airDive_speed_max = 25;

			const float gravity_scale_min = 0.01f;
			const float gravity_scale_max = 5;
		};

		namespace CARRY {
			const float carryNormalDropForce_min = 25;
			const float carryNormalDropForce_max = 150;

			const float carryDiveDropForce_min = 25;
			const float carryDiveDropForce_max = 300;
		};

		namespace GRAB {
			const float grabDetectRadius_min = 0.01f;
			const float grabDetectRadius_max = 15;

			const float grabCheckDistance_min = 0.01f;
			const float grabCheckDistance_max = 5;

			const float grabMaxForce_min = 0.01f;
			const float grabMaxForce_max = 5;

			const float grabBreakTime_min = 0.01f;
			const float grabBreakTime_max = 5;

			const float grabBreakTimeJump_min = 0.01f;
			const float grabBreakTimeJump_max = 2;

			const float armLength_min = 0.01f;
			const float armLength_max = 3;

			const float grabCheckPredictionBase_min = 0.01f;
			const float grabCheckPredictionBase_max = 3;

			const float grabImmediateVelocityReduction_min = 0.01f;
			const float grabImmediateVelocityReduction_max = 3;

			const float grabDragDirectionContribution_min = 0.01f;
			const float grabDragDirectionContribution_max = 5;

			const float grabCooldown_min = 0.01f;
			const float grabCooldown_max = 2;

			const float grabRegrabDelay_min = 0.01f;
			const float grabRegrabDelay_max = 5;

			const float grabReleaseRegrabCooldown_min = 0.01f;
			const float grabReleaseRegrabCooldown_max = 5;

			const float grabBreakAngle_min = 50;
			const float grabBreakAngle_max = 150;

		}
	};

	namespace DEFAULT_VALUES {
		// MOVEMENT
		const float default_max_speed = 9.500000f;
		const float default_carryMaxSpeed = 8.000000f;
		const float default_grabbingMaxSpeed = 5.000000f;
		const float default_diveForce = 16.500000f;
		const float default_airDiveForce = 7.000000f;
		const float default_gravityScale = 1.500000f;

		// COLLISIONS
		const float default_anyCollisionStunForce = 28.000000f;
		const float default_dynamicCollisionStunForce = 10.000000f;
		const float default_CollisionThreshold = 14.000000f;

		// CARRY
		const float default_carryNormalDropForce = 50.000000f;
		const float default_carryDiveDropForce = 90.000000f;

		// GRAB
		const float default_playerGrabDetectRadius = 6.0f;
		const float default_playerGrabCheckDistance = 2.0f;
		const float default_playerGrabberMaxForce = 0.6000000238f;
		const float default_playerGrabBreakTime = 1.200000048f;
		const float default_armLength = 1.0f;
		const float default_playerGrabCheckPredictionBase = 0.1000000015f;
		const float default_playerGrabImmediateVelocityReduction = 0.5f;
		const float default_playerGrabberDragDirectionContribution = 0.50f;
		const float default_grabCooldown = 0.5f;
		const float default_playerGrabRegrabDelay = 2.0f;
		const float default_playerGrabBreakTimeJumpInfluence = 0.01999999955f;
		const float default_forceReleaseRegrabCooldown = 1.0f;
		const float default_breakGrabAngle = 75.0f;
	};
};