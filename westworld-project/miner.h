#include "base-entity.h"

class Miner : public BaseGameEntity {
    private:
        // a pointer to an instance of a state 
        State* m_current_state;

        // place where the miner is currently located 
        location_type m_location;

        // no. of nuggets in miner's pockets 
        int m_gold_carried;

        // money deposited in the bank 
        int m_money_in_bank;

        // higher the value thirstier the miner 
        int m_thirst;

        // higher the value, the more tired the miner
        int m_fatigue;

    public:
        Miner(int id);

        // this must be implemented
        void update();

        // changes the current state to a new state 
        void change_state(State* new_state);


};