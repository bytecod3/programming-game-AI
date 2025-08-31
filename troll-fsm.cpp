
class Troll {
    State* m_current_state;

    public:
        void update() {
            m_current_state->Execute(this);
        }

        void change_state(State* p_new_state) {
            delete m_current_state;
            m_current_state = p_new_state;
        }
};

// abstract class as the base class for different states
class State {
    public:
        virtual void Execute(Troll* troll) = 0;
};

// STATES 

// state runAway 
class State_RunAway : public State {
    void Execute(Troll* troll) override {
        // if the troll is safe, sleep, otherwise move away from enemy
        if(troll->is_safe()) {
            troll->change_state(new State_Sleep());
        } else {
            troll->move_away_from_enemy();
        }
    }
};

// state sleep
class State_Sleep : public State {
    public:
        void Execute(Troll* troll) {
            if(troll->is_threatened()) {
                troll->change_state(new State_RunAway());
            } else {
                troll->snore();
            }
        }
};