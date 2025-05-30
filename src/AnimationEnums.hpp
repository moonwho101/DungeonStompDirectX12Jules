// AnimationEnums.hpp
#ifndef ANIMATION_ENUMS_HPP
#define ANIMATION_ENUMS_HPP

// Sequences for Monsters
enum class MonsterAnimSequence {
    IDLE = 0,
    WALK = 1,
    ATTACK = 2,
    PAIN1 = 3,
    PAIN2 = 4,
    PAIN3 = 5,
    FIRE_ONLY = 6, // ability 6, fire only
    FLIP = 7,
    ACTION_VARIANT1 = 8, // Or IDLE_VARIANT1, MISC1
    TAUNT = 9,
    WAVE = 10,
    POINT = 11,
    DEATH1 = 12,
    DEATH2 = 13,
    DEATH3 = 14,
    // Specific frames that cause animation to stop might not be sequences themselves
    // but could be referred to by constants if needed, e.g., FRAME_DEATH_FINAL_1 = 183
};

// Sequences for Player
enum class PlayerAnimSequence {
    IDLE = 0,
    WALK_RUN = 1, // Covers both walking and running based on context (runflag)
    ATTACK = 2,
    PAIN1 = 3,
    PAIN2 = 4,
    PAIN3 = 5,
    JUMP_FALL = 6, // Frame 71 is end of this, possibly jump landing or continuous fall
    FLIP = 7,
    SALUTE = 8,
    TAUNT = 9,
    WAVE = 10,
    POINT = 11,
    DEATH1 = 12,
    DEATH2 = 13,
    DEATH3 = 14
    // Specific attack/event frames
    // FRAME_ATTACK_HIT = 50, // When damage can be applied
    // FRAME_ATTACK_RECOVERY_DONE = 52, // Monster can take damage again
};

// Potentially useful frame constants (if they are used outside sequence definitions)
// const int MONSTER_FRAME_DEATH_STOP1 = 183;
// const int MONSTER_FRAME_DEATH_STOP2 = 189;
// const int MONSTER_FRAME_DEATH_STOP3 = 197;

// const int PLAYER_FRAME_ATTACK_HIT = 50;
// const int PLAYER_FRAME_ATTACK_RECOVERY_DONE = 52; // Monster takedamageonce reset
// const int PLAYER_FRAME_JUMP_LAND = 71; // End of jump/fall sequence leading to idle/walk

#endif // ANIMATION_ENUMS_HPP
