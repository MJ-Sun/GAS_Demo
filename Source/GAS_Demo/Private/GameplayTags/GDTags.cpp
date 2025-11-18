#include "GameplayTags/GDTags.h"

namespace GDTags
{
	namespace GDAbilities
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Primary, "GDTags.GDAbilities.Primary", "Tag for the Primary Ability")
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Secondary, "GDTags.GDAbilities.Secondary", "Tag for the Secondary Ability")
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(Tertiary, "GDTags.GDAbilities.Tertiary", "Tag for the Tertiary Ability")
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(ActivateOnGiven, "GDTags.GDAbilities.ActivateOnGiven", "Tag for the Abilities that should activate immediately once given")

		namespace Enemy
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(Attack, "GDTags.GDAbilities.Enemy.Attack", "Enemy Attack Tag")
		}
	}

	namespace Events
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(KillScored, "GDTags.Events.KillScored", "Tag for the KillScored Event")
		
		namespace Enemy
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(HitReact, "GDTags.Events.Enemy.HitReact", "Tag for the Enemy HitReact Event");
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(EndAttack, "GDTags.Events.Enemy.EndAttack", "Tag for the Enemy End Attack Event");
		}
	}
}
